
/* verilator lint_off WIDTHEXPAND */
/* verilator lint_off WIDTHTRUNC */
// Instancia devidamente os modulos
//module top #(parameter VGA_BITS = 8) (
//			 input CLOCK_50);

module top #(parameter VGA_BITS = 8) (
   input CLOCK_50, // 50MHz
   output [VGA_BITS-1:0] VGA_R, VGA_G, VGA_B,
   output VGA_HS_O, VGA_VS_O,
   output reg VGA_CLK, 
   output VGA_BLANK_N, VGA_SYNC_N);

	wire [31:0] instruction, read_data, read_data_vga, write_data, alu_result;
	wire        mem_write;
	wire [8:0]  pc, addr_vga;
	wire [3:0]  byte_enable;
	
	always@(posedge CLOCK_50)
     VGA_CLK <= ~VGA_CLK; // 25MHz

	wire resetn;
  	power_on_reset power_on_reset(CLOCK_50, resetn);

	// CPU
	franken_riscv franken_riscv(CLOCK_50, !resetn, pc, instruction, mem_write, byte_enable, alu_result, write_data, read_data);
	
	// Memoria 
    imem imem(pc, instruction);
  	dmem dmem(!CLOCK_50, mem_write, byte_enable, alu_result, addr_vga, write_data, read_data, read_data_vga);

   // Video 
	vga video(VGA_CLK, read_data_vga, VGA_R, VGA_G, VGA_B, VGA_HS_O, VGA_VS_O, addr_vga);
	
   assign VGA_BLANK_N = 1'b1;
   assign VGA_SYNC_N  = 1'b0;  
endmodule
