#ifndef NN_PRECISION_4_BRIDGE_H_
#define NN_PRECISION_4_BRIDGE_H_

#include "firmware/NN_precision_4.h"
#include "firmware/nnet_utils/nnet_helpers.h"
#include <algorithm>
#include <map>

// hls-fpga-machine-learning insert bram

namespace nnet {
bool trace_enabled = false;
std::map<std::string, void *> *trace_outputs = NULL;
size_t trace_type_size = sizeof(double);
} // namespace nnet

extern "C" {

struct trace_data {
    const char *name;
    void *data;
};

void allocate_trace_storage(size_t element_size) {
    nnet::trace_enabled = true;
    nnet::trace_outputs = new std::map<std::string, void *>;
    nnet::trace_type_size = element_size;
}

void free_trace_storage() {
    for (std::map<std::string, void *>::iterator i = nnet::trace_outputs->begin(); i != nnet::trace_outputs->end(); i++) {
        void *ptr = i->second;
        free(ptr);
    }
    nnet::trace_outputs->clear();
    delete nnet::trace_outputs;
    nnet::trace_outputs = NULL;
    nnet::trace_enabled = false;
}

void collect_trace_output(struct trace_data *c_trace_outputs) {
    int ii = 0;
    for (std::map<std::string, void *>::iterator i = nnet::trace_outputs->begin(); i != nnet::trace_outputs->end(); i++) {
        c_trace_outputs[ii].name = i->first.c_str();
        c_trace_outputs[ii].data = i->second;
        ii++;
    }
}

// Wrapper of top level function for Python bridge
void NN_precision_4_float(
    float fc1_input[N_INPUT_1_1],
    float layer10_out[N_LAYER_8]
) {

    input_t fc1_input_ap[N_INPUT_1_1];
    nnet::convert_data<float, input_t, N_INPUT_1_1>(fc1_input, fc1_input_ap);

    result_t layer10_out_ap[N_LAYER_8];

    NN_precision_4(fc1_input_ap,layer10_out_ap);

    nnet::convert_data<result_t, float, N_LAYER_8>(layer10_out_ap, layer10_out);
}

void NN_precision_4_double(
    double fc1_input[N_INPUT_1_1],
    double layer10_out[N_LAYER_8]
) {
    input_t fc1_input_ap[N_INPUT_1_1];
    nnet::convert_data<double, input_t, N_INPUT_1_1>(fc1_input, fc1_input_ap);

    result_t layer10_out_ap[N_LAYER_8];

    NN_precision_4(fc1_input_ap,layer10_out_ap);

    nnet::convert_data<result_t, double, N_LAYER_8>(layer10_out_ap, layer10_out);
}
}

#endif
