//Numpy array shape [3]
//Min -0.101562500000
//Max 0.109375000000
//Number of zeros 0

#ifndef B8_H_
#define B8_H_

#ifndef __SYNTHESIS__
bias8_t b8[3];
#else
bias8_t b8[3] = {0.1093750, 0.0703125, -0.1015625};
#endif

#endif
