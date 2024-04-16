#!/bin/bash

#export VERILATOR_ROOT=/home/$USER/Documents/verilator
#export PATH=$VERILATOR_ROOT/bin:$PATH

verilator -Wall --trace --exe --build -cc frankenstein.cpp top.v blockram.v dma.v flash.v franken_riscv.v power_on_reset.v register.v uart_rx.v  uart_tx.v spi_master.v

if [ -f "*.hex" ]; then
    cp *.hex /obj_dir
fi

cd obj_dir
./Vtop

#gtkwave waveform.vcd


	# reg 		 clk_div2, clk_div4, clk_div8, clk_div16, clk_div32, clk_div64, clk_div128, clk_div256, clk_div512, clk_div1024;

	# initial
	# begin
	# 	clk_div2 = 1'b0;
	# 	clk_div4 = 1'b0;
	# 	clk_div8 = 1'b0;
	# 	clk_div16 = 1'b0;
	# 	clk_div32 = 1'b0;
	# 	clk_div64 = 1'b0;
	# 	clk_div128 = 1'b0;
	# 	clk_div256 = 1'b0;
	# 	clk_div512 = 1'b0;
	# 	clk_div1024 = 1'b0;
	# end

	# always @(posedge clk)
	# 	clk_div2 <= ~clk_div2;

	# always @(posedge clk_div2)
	# 	clk_div4 <= ~clk_div4;

	# always @(posedge clk_div4)
	# 	clk_div8 <= ~clk_div8;

	# always @(posedge clk_div8)
	# 	clk_div16 <= ~clk_div16;

	# always @(posedge clk_div16)
	# 	clk_div32 <= ~clk_div32;

	# always @(posedge clk_div32)
	# 	clk_div64 <= ~clk_div64;

	# always @(posedge clk_div64)
	# 	clk_div128 <= ~clk_div128;

	# always @(posedge clk_div128)
	# 	clk_div256 <= ~clk_div256;

	# always @(posedge clk_div256)
	# 	clk_div512 <= ~clk_div512;

	# always @(posedge clk_div512)
	# 	clk_div1024 <= ~clk_div1024;