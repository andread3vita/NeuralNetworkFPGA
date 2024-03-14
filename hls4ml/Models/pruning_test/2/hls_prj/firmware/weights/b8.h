//Numpy array shape [3]
//Min -0.187500000000
//Max 0.125000000000
//Number of zeros 0

#ifndef B8_H_
#define B8_H_

#ifndef __SYNTHESIS__
bias8_t b8[3];
#else
bias8_t b8[3] = {0.1250, 0.1250, -0.1875};
#endif

#endif
