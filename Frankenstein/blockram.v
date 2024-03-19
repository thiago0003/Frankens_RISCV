/* verilator lint_off WIDTHTRUNC */ 
/* verilator lint_off UNUSEDSIGNAL */

 // Modulo de memoria de programa

module  blockram( input clk, we,
				 input [3:0] be,
				 input [31:0] addr,
				 input [31:0] data_in,
				 output [31:0] data_out);

	// model the RAM with two dimensional packed array (LUT RAM)
	(* ram_style = "distributed" *) reg [31:0] ram[0:255];

	wire is_sp = (|addr[31:26]);
	wire [31:0] address = is_sp ? {26'b0, addr[5:0]} : addr;

	always@(posedge clk)
	begin
		if(we) begin
			if(be[0]) ram[address[31:2]][7 :0 ] <= data_in[ 7: 0];
			if(be[1]) ram[address[31:2]][15:8 ] <= data_in[15: 8];
			if(be[2]) ram[address[31:2]][23:16] <= data_in[23:16];
			if(be[3]) ram[address[31:2]][31:24] <= data_in[31:24];
		end
	end

	assign data_out = ram[address[31:2]];

endmodule
