//IMPORTED BLOCK:one_hz_clock
module one_hz_clock (input clk,            // clk input
					  output  out);  // output pin

	reg clk_1, clk_2, clk_3, clk_4, clk_5, clk_6, clk_7, clk_8, clk_9, clk_10, clk_11, clk_12, clk_13, clk_14, clk_15, clk_16, clk_17, clk_18, clk_19, clk_20, clk_21, clk_22, clk_23, clk_24;

	initial 
	begin
		clk_1 = 0;
		clk_2 = 0;
		clk_3 = 0;
		clk_4 = 0;
		clk_5 = 0;
		clk_6 = 0;
		clk_7 = 0;
		clk_8 = 0;
		clk_9 = 0;
		clk_10 = 0;
		clk_11 = 0;
		clk_12 = 0;
		clk_13 = 0;
		clk_14 = 0;
		clk_15 = 0;
		clk_16 = 0;
		clk_17 = 0;
		clk_18 = 0;
		clk_19 = 0;
		clk_20 = 0;
		clk_21 = 0;
		clk_22 = 0;
		clk_23 = 0;
		clk_24 = 0;
	end

	always @(posedge clk)
		clk_1 <= ~clk_1;

	always @(posedge clk_1)
		clk_2 <= ~clk_2;

	always @(posedge clk_2)
		clk_3 <= ~clk_3;

	always @(posedge clk_3)
		clk_4 <= ~clk_4;

	always @(posedge clk_4)
		clk_5 <= ~clk_5;

	always @(posedge clk_5)
		clk_6 <= ~clk_6;

	always @(posedge clk_6)
		clk_7 <= ~clk_7;

	always @(posedge clk_7)
		clk_8 <= ~clk_8;

	always @(posedge clk_8)
		clk_9 <= ~clk_9;

	always @(posedge clk_9)
		clk_10 <= ~clk_10;

	always @(posedge clk_10)
		clk_11 <= ~clk_11;

	always @(posedge clk_11)
		clk_12 <= ~clk_12;

	always @(posedge clk_12)
		clk_13 <= ~clk_13;

	always @(posedge clk_13)
		clk_14 <= ~clk_14;

	always @(posedge clk_14)
		clk_15 <= ~clk_15;

	always @(posedge clk_15)
		clk_16 <= ~clk_16;

	always @(posedge clk_16)
		clk_17 <= ~clk_17;

	always @(posedge clk_17)
		clk_18 <= ~clk_18;

	always @(posedge clk_18)
		clk_19 <= ~clk_19;

	always @(posedge clk_19)
		clk_20 <= ~clk_20;

	always @(posedge clk_20)
		clk_21 <= ~clk_21;

	always @(posedge clk_21)
		clk_22 <= ~clk_22;

	always @(posedge clk_22)
		clk_23 <= ~clk_23;

	always @(posedge clk_23)
		clk_24 <= ~clk_24;

	assign out = clk_2;

endmodule
