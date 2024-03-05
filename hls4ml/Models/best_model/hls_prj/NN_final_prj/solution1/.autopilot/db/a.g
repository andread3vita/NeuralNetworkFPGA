#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/enric/University/NN-on-FPGA/hls4ml/Models/best_model/hls_prj/NN_final_prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
