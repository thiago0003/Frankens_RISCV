
/* verilator lint_off WIDTHEXPAND */
/* verilator lint_off WIDTHTRUNC */
/* verilator lint_off UNUSEDSIGNAL */

// Instancia devidamente os modulos
//module top #(parameter VGA_BITS = 8) (
//			 input CLOCK_50);

module top (
   input CLOCK_50 // 50MHz
   );

	wire [31:0] pc, instruction, read_data, write_data, alu_result;
	wire        mem_write;
	wire [3:0]  byte_enable;

	wire resetn;
  	power_on_reset power_on_reset(CLOCK_50, resetn);

	// CPU
	franken_riscv franken_riscv(CLOCK_50, !resetn, pc, instruction, mem_write, byte_enable, alu_result, write_data, read_data);
	
	// Memoria 
   imem imem(pc, instruction);
   // dmem dmem(CLOCK_50, mem_write, byte_enable, alu_result, addr_vga, write_data, read_data, read_data_vga);
  	blockram blockram(alu_result, byte_enable, write_data, mem_write, CLOCK_50, read_data);

endmodule
