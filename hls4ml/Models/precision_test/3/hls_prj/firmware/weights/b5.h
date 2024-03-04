//Numpy array shape [20]
//Min -0.125000000000
//Max 0.187500000000
//Number of zeros 0

#ifndef B5_H_
#define B5_H_

#ifndef __SYNTHESIS__
bias5_t b5[20];
#else
bias5_t b5[20] = {0.0625, 0.1250, 0.1250, -0.1250, 0.0625, 0.1250, -0.0625, 0.1250, 0.1250, 0.1250, 0.1875, 0.1875, 0.0625, 0.0625, -0.0625, 0.1250, 0.0625, -0.1250, 0.1250, -0.0625};
#endif

#endif
