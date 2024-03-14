import serial
import math
import numpy as np



# encode number in fixed point precision
def encode(x, W=16, I=8, byteorder='little'):
    n_bytes = math.ceil(W/8)
    B = W-I
    
    sign = '1' if x < 0 else '0'
    
    x = abs(x)
    x_int  = math.floor(x)
    x_frac = x - x_int
    
    bin_int = ''
    for k in range(I-1):
        bin_int += str(x_int%2)
        x_int = x_int//2
    bin_int = bin_int[::-1]
    
    
    bin_frac = ''
    for k in range(B):
        x_frac = x_frac*2
        a = math.floor(x_frac)
        bin_frac += str(a)
        x_frac -= a
    
    tot = '0b' + sign + bin_int + bin_frac
    x_integer = int(tot, 2)
    x_byte = x_integer.to_bytes(n_bytes, byteorder=byteorder)
    
    return x_byte, x_integer, tot



# encode number from fixed point precision
def decode(x_byte, W=16, I=8, byteorder='little'):
    B = W-I
    x_integer = int.from_bytes(x_byte, byteorder=byteorder)
    tot = bin(x_integer)
    l = W - (len(tot)-2)
    if l > 0:
        tot = tot[:2] + l*'0' + tot[2:]
    
    x = 0
    for k in range(1, W):
        b = int(tot[-k])
        x += b*pow(2, k-B-1)
    
    if tot[-W]=='1':
        x = -1*x 
    
    return x



# sends np.array through a serial link using a fixed point encoding
# NOTE: 
# Using byteorder='little' data will be saved in memory as 'big' and viceversa due to send order.
# Using preserve_order=False sends features in order so they will be saved as [x_n, ..., x_2, x_1],
# preserve_order=True sends last feature first and so on so they will be saved as [x_1, x_2, ..., x_n]
def send_features(features, ser, W=16, I=8, byteorder='little', preserve_order=False, verbose=False):
    
    n_bytes = math.ceil(W/8)
    
    shape = features.shape
    if len(shape)==1:
        features = np.expand_dims(features, 0)
    
    for feat in features:
        feat_bytes = [encode(f, W, I, byteorder)[0] for f in feat]
        if preserve_order:
            feat_bytes = feat_bytes[::-1]
    
        for i in range(len(feat)):
            for j in range(n_bytes):
            
                message = feat_bytes[i][j:j+1]
                ser.write(message)
                
                if verbose:
                    print(message)



# reads output through a serial link using a fixed point encoding
def read_output(ser, n_class=3, W=16, I=8, byteorder='little', verbose=False):
    
    n_bytes = math.ceil(W/8)
    
    result = []
    for i in range(n_class):
        res = ser.read()
        for j in range(1, n_bytes):
            res += ser.read()
                
        result.append(decode(res, W, I, byteorder))
    
    if verbose:
        print(result)
    return result