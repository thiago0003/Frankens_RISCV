#!/bin/bash

#export VERILATOR_ROOT=/home/$USER/Documents/verilator
#export PATH=$VERILATOR_ROOT/bin:$PATH

verilator -Wall --trace --exe --build -cc frankenstein.cpp top.v blockram.v dma.v flash.v franken_riscv.v one_hz_clock.v power_on_reset.v register.v uart_rx.v  uart_tx.v 

if [ -f "*.hex" ]; then
    cp *.hex /obj_dir
fi

cd obj_dir
./Vtop

#gtkwave waveform.vcd
