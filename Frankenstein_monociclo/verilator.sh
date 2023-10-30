#!/bin/bash

export VERILATOR_ROOT=/home/martins/Documents/verilator
export PATH=$VERILATOR_ROOT/bin:$PATH

verilator -Wno-STMTDLY --trace --exe --build -cc frankenstein.cpp top.v CPU_RISCV.v mem.v
cd obj_dir
./Vtop