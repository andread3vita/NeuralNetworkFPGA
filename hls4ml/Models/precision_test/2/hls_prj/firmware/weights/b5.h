//Numpy array shape [20]
//Min -0.125000000000
//Max 0.250000000000
//Number of zeros 8

#ifndef B5_H_
#define B5_H_

#ifndef __SYNTHESIS__
bias5_t b5[20];
#else
bias5_t b5[20] = {0.125, 0.000, 0.125, 0.000, 0.000, 0.125, 0.000, 0.125, 0.000, 0.125, 0.125, 0.000, 0.125, 0.000, 0.125, 0.125, 0.000, -0.125, 0.250, 0.125};
#endif

#endif
