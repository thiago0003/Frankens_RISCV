// Modulo de registradores
module register(input  wire        reg_write,
               input  wire [4:0]  reg_addr1, reg_addr2, addr, 
               input  wire [31:0] write_reg, 
               output wire [31:0] rd1, rd2,
               input  wire        clk);
					
  reg [31:0] rf[31:0];

  initial begin
    rf[0] = 32'b0;
    rf[2] = 32'h7fffeffc; //Endereço padrão da pilha de dados
    rf[3] = 32'h10008000; //Endereço padrão gp
  end

	always @(negedge clk) 
		if (reg_write && addr != 5'b0) 
			rf[addr] <= write_reg;	
		
	assign rd1 = (reg_addr1 != 5'b0) ? rf[reg_addr1] : 32'b0; 
	assign rd2 = (reg_addr2 != 5'b0) ? rf[reg_addr2] : 32'b0;
endmodule
