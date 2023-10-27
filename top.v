// Instancia devidamente os modulos
module top #(parameter VGA_BITS = 8) (
			  input CLOCK_50, reset);

	wire [31:0] pc, instruction, read_data, address, read_data_vga, write_data, addr_vga, alu_result;
	wire mem_write;
	wire  [3:0] byte_enable;

	// CPU
	franken_riscv franken_riscv(CLOCK_50, reset, pc, instruction, mem_write, byte_enable, alu_result, write_data, read_data);
   //riscvmulti cpu(CLOCK_50, SW, address, write_data, mem_write, read_data, byte_enable);
				
	// Memoria 
   imem imem(pc, CLOCK_50, instruction);
	dmem dmem(address[8:0], addr_vga[8:0], byte_enable, 4'h0, write_data, 32'h00000000, mem_write, 1'b0, CLOCK_50, read_data, read_data_vga);
   
	//vga video(CLOCK_50, read_data_vga, VGA_R, VGA_G, VGA_B, VGA_HS_O, VGA_VS_O, addr_vga);
	
  //assign VGA_BLANK_N = 1'b1;
  //assign VGA_SYNC_N  = 1'b0;  
endmodule
