/* verilator lint_off WIDTHTRUNC */ 
/* verilator lint_off UNUSEDSIGNAL */

 // Modulo de memoria de programa

module  blockram( input clk, we,
				 input [3:0] be,
				 input [31:0] addr,
				 input [31:0] data_in,
				 output [31:0] data_out);

	// model the RAM with two dimensional packed array (LUT RAM)
	(* ram_style = "distributed" *) reg [31:0] ram[0:128];

	// reg [31:0] data_reg;

 	// port A
	always@(posedge clk)
	begin
		if(we) begin
		   // edit this code if using other than four bytes per word
			if(be[0]) ram[addr[31:2]][7 :0 ] <= data_in[ 7: 0];
			if(be[1]) ram[addr[31:2]][15:8 ] <= data_in[15: 8];
			if(be[2]) ram[addr[31:2]][23:16] <= data_in[23:16];
			if(be[3]) ram[addr[31:2]][31:24] <= data_in[31:24];
		end
		
    //   data_reg <= ;
	end

	assign data_out = ram[addr[31:2]];

endmodule
