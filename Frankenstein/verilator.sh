#!/bin/bash

#export VERILATOR_ROOT=/home/$USER/Documents/verilator
#export PATH=$VERILATOR_ROOT/bin:$PATH

verilator -Wall --trace --exe --build -cc frankenstein.cpp top.v alu_decoder.v blockram.v bus_to_bus_4_5.v bus_to_wires.v dma.v flash.v franken_riscv.v mux4_8.v one_hz_clock.v power_on_reset.v register.v screen.v stringbyte.v textEngine.v  

if [ -f "*.hex" ]; then
    cp *.hex /obj_dir
fi

cd obj_dir
./Vtop

#gtkwave waveform.vcd
