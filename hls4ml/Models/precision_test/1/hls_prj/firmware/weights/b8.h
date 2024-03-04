//Numpy array shape [3]
//Min 0.000000000000
//Max 0.250000000000
//Number of zeros 2

#ifndef B8_H_
#define B8_H_

#ifndef __SYNTHESIS__
bias8_t b8[3];
#else
bias8_t b8[3] = {0.25, 0.00, 0.00};
#endif

#endif
