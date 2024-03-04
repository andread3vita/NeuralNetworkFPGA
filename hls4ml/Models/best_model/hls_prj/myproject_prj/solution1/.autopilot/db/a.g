#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/enric/University/NN-on-FPGA/hls4ml_Models/Basket/best_model/hls_prj/myproject_prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
