#!/bin/bash

#export VERILATOR_ROOT=/home/$USER/Documents/verilator
#export PATH=$VERILATOR_ROOT/bin:$PATH

verilator -Wall --trace --exe --build -cc frankenstein.cpp top.v register.sv franken_riscv.v imem.sv blockram.sv power_on_reset.v
cd obj_dir
./Vtop

#gtkwave waveform.vcd
