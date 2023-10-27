
/* verilator lint_off WIDTHEXPAND */
/* verilator lint_off WIDTHTRUNC */
// Instancia devidamente os modulos
module top #(parameter VGA_BITS = 8) (
			 input clk, reset);

	wire [31:0] instruction, read_data, read_data_vga, write_data, alu_result;
	wire        mem_write;
	wire [8:0]  pc, address, addr_vga;
	wire [3:0]  byte_enable;

	// CPU
	franken_riscv franken_riscv(clk, reset, pc, instruction, mem_write, byte_enable, alu_result, write_data, read_data);
    //riscvmulti cpu(CLOCK_50, SW, address, write_data, mem_write, read_data, byte_enable);
				
	// Memoria 
    imem imem(pc, instruction);
  	dmem dmem(!clk, mem_write, byte_enable, alu_result, addr_vga, write_data, read_data, read_data_vga);

   
	//vga video(CLOCK_50, read_data_vga, VGA_R, VGA_G, VGA_B, VGA_HS_O, VGA_VS_O, addr_vga);

	assign read_data_vga = 32'b0;
	assign addr_vga = 9'b0;
	
    //assign VGA_BLANK_N = 1'b1;
    //assign VGA_SYNC_N  = 1'b0;  
endmodule
