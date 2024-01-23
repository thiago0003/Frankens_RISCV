#!/bin/bash

#export VERILATOR_ROOT=/home/$USER/Documents/verilator
#export PATH=$VERILATOR_ROOT/bin:$PATH

verilator -Wall --trace --exe --build -cc one_hz_clock.v frankenstein.cpp top.v register.v franken_riscv.v imem.v blockram.v power_on_reset.v alu_decoder.v

if [ -f "*.hex" ]; then
    cp *.hex /obj_dir
fi

cd obj_dir
./Vtop

#gtkwave waveform.vcd
