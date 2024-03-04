//Numpy array shape [20]
//Min -0.250000000000
//Max 0.250000000000
//Number of zeros 7

#ifndef B2_H_
#define B2_H_

#ifndef __SYNTHESIS__
bias2_t b2[20];
#else
bias2_t b2[20] = {0.250, 0.125, 0.000, 0.125, -0.250, 0.000, 0.000, 0.250, 0.125, 0.000, 0.125, 0.000, 0.125, 0.125, -0.125, 0.000, 0.125, 0.000, 0.250, 0.250};
#endif

#endif
