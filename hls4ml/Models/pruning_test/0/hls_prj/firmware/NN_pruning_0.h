#ifndef NN_PRUNING_0_H_
#define NN_PRUNING_0_H_

#include "ap_fixed.h"
#include "ap_int.h"
#include "hls_stream.h"

#include "defines.h"

// Prototype of top level function for C-synthesis
void NN_pruning_0(
    input_t fc1_input[N_INPUT_1_1],
    result_t layer10_out[N_LAYER_8]
);

#endif
