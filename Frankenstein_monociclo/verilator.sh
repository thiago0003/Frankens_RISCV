#!/bin/bash

export VERILATOR_ROOT=/home/$USER/Documents/verilator
export PATH=$VERILATOR_ROOT/bin:$PATH

verilator -Wall --trace --exe --build -cc frankenstein.cpp top.v CPU_RISCV.v mem.v power.v
cd obj_dir
./Vtop

#gtkwave waveform.vcd
