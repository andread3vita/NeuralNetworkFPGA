//Numpy array shape [20]
//Min 0.000000000000
//Max 0.500000000000
//Number of zeros 11

#ifndef B2_H_
#define B2_H_

#ifndef __SYNTHESIS__
bias2_t b2[20];
#else
bias2_t b2[20] = {0.0, 0.5, 0.5, 0.0, 0.0, 0.5, 0.5, 0.0, 0.5, 0.5, 0.0, 0.0, 0.5, 0.0, 0.0, 0.5, 0.0, 0.5, 0.0, 0.0};
#endif

#endif
