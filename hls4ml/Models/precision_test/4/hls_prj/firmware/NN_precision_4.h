#ifndef NN_PRECISION_4_H_
#define NN_PRECISION_4_H_

#include "ap_fixed.h"
#include "ap_int.h"
#include "hls_stream.h"

#include "defines.h"

// Prototype of top level function for C-synthesis
void NN_precision_4(
    input_t fc1_input[N_INPUT_1_1],
    result_t layer10_out[N_LAYER_8]
);

#endif
