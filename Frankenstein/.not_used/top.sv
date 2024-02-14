/* verilator lint_off DECLFILENAME */
/* verilator lint_off PINMISSING */

// `include "register.v"
// `include "power_on_reset.v"
// `include "one_hz_clock.v"
// `include "imem.v"
// `include "blockram.v"
// `include "franken_riscv.v"

//IMPORTED BLOCK:inverterC
module inverterC( 
A,
Q
); 

//-----------Input Ports--------------- 
input A;

//-----------Output Ports--------------- 
output Q; 

//-------------Code Start----------------- 
assign Q = ! A;

endmodule


module top (
  input  wire clk,
  output wire [5:0] led

);

  // always @(posedge clk)
  //   if (!res1)
  //       led <= 6'b111111;

//Internal Wires
 wire w_1;
 wire w_2;
 wire [4:0] w_3;
 wire [4:0] w_4;
 wire [4:0] w_5;
 wire [31:0] w_6;
 wire [31:0] w_7;
 wire [31:0] w_9;
 wire w_12;
 wire w_15;
 wire [31:0] w_34;
 wire [31:0] w_35;
 wire [31:0] w_37;
 wire [3:0] w_38;
 wire [31:0] w_39;
 wire w_40;
 wire [31:0] w_41;

//Instances os Modules
register register (
         .clk (clk),
         .reg_write (w_2),
         .reg_addr1 (w_3),
         .reg_addr2 (w_4),
         .addr (w_5),
         .write_reg (w_6),
         .rd1 (w_7),
         .rd2 (w_9)
     );

power_on_reset power_on_reset (
         .clk (clk),
         .resetn (w_12)
     );


inverterC inverterC (
         .A (w_12),
         .Q (w_15)
     );



one_hz_clock one_hz_clock (
         .clk (clk),
         .out (w_1)
     );


imem imem (
         .pc (w_34),
         .instr (w_35)
     );

blockram blockram (
         .clk (clk),
         .addr (w_37),
         .be (w_38),
         .data_in (w_39),
         .we (w_40),
         .data_out (w_41)
     );

franken_riscv franken_riscv (
         .reg_write_WB (w_2),
         .RS1 (w_3),
         .RS2 (w_4),
         .RD_WB (w_5),
         .write_reg_WB (w_6),
         .src1_Dec (w_7),
         .src2_Dec (w_9),
         .reset (w_15),
         .clk (w_1),
         .pc (w_34),
         .instruction (w_35),
         .alu_result_Exec (w_37),
         .byte_enable (w_38),
         .write_data (w_39),
         .mem_write_Mem (w_40),
         .read_data (w_41),
         .led(led)
     );


endmodule
