/* verilator lint_off WIDTHTRUNC */
/* verilator lint_off UNUSEDSIGNAL */


// Modulo de registradores
module imem(   input  wire        clk, 
               input  wire        write,
               input  wire [31:0] pc, addr_in, 
               input  wire [31:0] data, 
               output wire [31:0] instr);
					
  reg [31:0] ram[0:31];

  initial     
	begin
		ram[0] 	=  32'h000007b7;
		ram[1] 	=  32'h00078793;
		ram[2] 	=  32'h00010737;
		// ram[3] 	=  32'h00070713;
		// ram[4] 	=  32'h00010837;
		// ram[5] 	=  32'h00080813;
		// ram[6] 	=  32'h01070733;
		// ram[7] 	=  32'hfff70713;
		// ram[8] 	=  32'h00e7a223;
		// ram[9] 	=  32'h000007b7;
		// ram[10] =  32'h00078793;
		// ram[11] =  32'h0047a703;
		// ram[12] =  32'h000007b7;
		// ram[13] =  32'h00078793;
		// ram[14] =  32'h00e7a023;
		// ram[15] =  32'h000007b7;
		// ram[16] =  32'h00078793;
		// ram[17] =  32'h0007a783;
		// ram[18] =  32'h00f00733;
		// ram[19] =  32'h000007b7;
		// ram[20] =  32'h06478793;
		// ram[21] =  32'h00e7a023;
	end

	always @(posedge clk) 
		if (write) 
			ram[addr_in] <= data;	
		
	assign instr = ram[pc[31:2]]; 
endmodule
