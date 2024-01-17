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
ram[1] = 32'h00000013;
ram[2] = 32'h000007b7;
ram[3] = 32'h00078793;
ram[4] = 32'h00300713;
ram[5] = 32'h00e78023;
ram[6] = 32'h000007b7;
ram[7] = 32'h00078793;
ram[8] = 32'h0007c703;
ram[9] = 32'h000007b7;
ram[10] = 32'h00078793;
ram[11] = 32'h0007c783;
ram[12] = 32'h02f707b3;
ram[13] = 32'h0ff7f713;
ram[14] = 32'h000007b7;
ram[15] = 32'h00078793;
ram[16] = 32'h00e780a3;

	end

	always @(posedge clk) 
		if (write) 
			ram[addr_in] <= data;	
		
	assign instr = ram[pc[31:2]]; 
endmodule
