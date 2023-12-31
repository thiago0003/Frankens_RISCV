/* verilator lint_off WIDTHTRUNC */
/* verilator lint_off UNUSEDSIGNAL */


// Modulo de registradores
module imem(   input  wire        clk, 
               input  wire        write,
               input  wire [31:0] pc, addr_in, 
               input  wire [31:0] data, 
               output wire [31:0] instr);
					
  reg [31:0] ram[0:127];

  initial     
	begin
		ram[0]   =  32'h00000013;
		ram[1]   =  32'h000027b7;
		ram[2]   =  32'h00000013;
		ram[3]	 =  32'h00000013;

		ram[4]   =  32'h00078793;
		ram[5]   =  32'h00000013;
		ram[6]   =  32'h00000013;
		
		ram[7]   =  32'h09600713;
		ram[8]   =  32'h00000013;
		ram[9]   =  32'h00000013;
		
		ram[10]  =  32'hfff70713;
		ram[11]  =  32'h00000013;
		ram[12]  =  32'h00000013;
		
		ram[13]  =  32'h00e7a223;
		ram[14]  =  32'h00000013;
		ram[15]  =  32'h00000013;
		
		ram[16]  =  32'h000027b7;
		ram[17]  =  32'h00000013;
		ram[18]  =  32'h00000013;
		
		ram[19]  =  32'h00078793;
		ram[20]  =  32'h00000013;
		ram[21]  =  32'h00000013;
		
		ram[22]  =  32'h0047a703;
		ram[23]  =  32'h00000013;
		ram[24]  =  32'h00000013;
		
		// ram[25]  =  32'h000027b7;
		// ram[26]  =  32'h00000013;
		// ram[27]  =  32'h00000013;
		
		// ram[28]  =  32'h00078793;
		// ram[29]  =  32'h00000013;
		// ram[30]  =  32'h00000013;
		
		// ram[31]  =  32'h00e7a023;
		// ram[32]  =  32'h00000013;
		// ram[33]  =  32'h00000013;
		
		// ram[34]  =  32'h000027b7;
		// ram[35]  =  32'h00000013;
		// ram[36]  =  32'h00000013;
		
		// ram[37]  =  32'h00078793;
		// ram[38]  =  32'h00000013;
		// ram[39]  =  32'h00000013;
		
		// ram[40]  =  32'h0047a703;
		// ram[41]  =  32'h00000013;
		// ram[42]  =  32'h00000013;
		
		// ram[43]  =  32'h09600793;
		// ram[44]  =  32'h00000013;
		// ram[45]  =  32'h00000013;
		
		// ram[46]  =  32'hf4e7f4e3;
		// ram[47]  =  32'h00000013;
		// ram[48]  =  32'h00000013;
		
		// ram[49]  =  32'h000027b7;
		// ram[50]  =  32'h00000013;
		// ram[51]  =  32'h00000013;
		
		// ram[52]  =  32'h00078793;
		// ram[53]  =  32'h00000013;
		// ram[54]  =  32'h00000013;
		
		// ram[55]  =  32'h0007a783;
		// ram[56]  =  32'h00000013;
		// ram[57]  =  32'h00000013;
		
		// ram[58]  =  32'h00f00733;
		// ram[59]  =  32'h00000013;
		// ram[60]  =  32'h00000013;
		
		// ram[61]  =  32'h000027b7;
		// ram[62]  =  32'h00000013;
		// ram[63]  =  32'h00000013;
		
		// ram[64]  =  32'h06478793;
		// ram[65]  =  32'h00000013;
		// ram[66]  =  32'h00000013;
		
		// ram[67]  =  32'h00e7a023;
		// ram[68]  =  32'h00000013;
		// ram[69]  =  32'h00000013;
		
		// ram[70]  =  32'h00000013;
		// ram[71]  =  32'h00000013;

		// ram[72]  =  32';
		// ram[73]  =  32'h00000013;
		// ram[74]  =  32'h00000013;

		// ram[75]  =  32';
		// ram[76]  =  32'h00000013;
		// ram[77]  =  32'h00000013;

		// ram[78]  =  32';
		// ram[79]  =  32'h00000013;
		// ram[80]  =  32'h00000013;

	end

	always @(posedge clk) 
		if (write) 
			ram[addr_in] <= data;	
		
	assign instr = ram[pc[31:2]]; 
endmodule
