//Numpy array shape [20]
//Min -0.062500000000
//Max 0.250000000000
//Number of zeros 4

#ifndef B2_H_
#define B2_H_

#ifndef __SYNTHESIS__
bias2_t b2[20];
#else
bias2_t b2[20] = {0.0000, 0.0625, 0.2500, -0.0625, 0.0000, 0.1250, 0.0625, 0.1875, 0.1875, -0.0625, -0.0625, 0.0000, 0.1250, -0.0625, 0.1250, 0.0625, 0.2500, 0.0000, 0.1875, -0.0625};
#endif

#endif
