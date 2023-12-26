#!/bin/bash

#export VERILATOR_ROOT=/home/$USER/Documents/verilator
#export PATH=$VERILATOR_ROOT/bin:$PATH

verilator -Wall --trace --exe --build -cc frankenstein.cpp top.v register.v franken_riscv.v imem.v blockram.v power_on_reset.v alu_decoder.v
cp *.hex /obj_dir
cd obj_dir
./Vtop

#gtkwave waveform.vcd
