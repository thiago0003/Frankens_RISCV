/* verilator lint_off PINNOCONNECT */
/* verilator lint_off PINMISSING */
/* verilator lint_off WIDTHTRUNC */
/* verilator lint_off UNUSEDSIGNAL */

module top (

  output wire sck1,
  output wire sda1,
  output wire cs1,
  output wire dc1,
  output wire res1,
  input wire clk

);

//Internal Wires
 wire w_1;
 wire w_2;
 wire [31:0] w_3;
 wire [31:0] w_4;
 wire [31:0] w_5;
 wire [31:0] w_6;
 wire [31:0] w_7;
 wire w_8;
 wire [3:0] w_9;
 wire [31:0] w_10;
 wire [31:0] w_11;
 wire w_12;
 wire [4:0] w_13;
 wire [4:0] w_14;
 wire [4:0] w_15;
 wire [31:0] w_16;
 wire w_21;
 wire [7:0] w_23;
 wire [9:0] w_24;
 wire [127:0] w_26;
 wire w_27;
 wire [7:0] w_28;
 wire [7:0] w_29;
 wire [7:0] w_30;
 wire [1:0] w_32;

//Instances os Modules
franken_riscv blk220_1 (
         .clk (clk),
         .reset (w_2),
         .instruction (w_3),
         .read_data (w_4),
         .src1 (w_5),
         .src2 (w_6),
         .pc (w_7),
         .mem_write (w_8),
         .byte_enable (w_9),
         .alu_result (w_10),
         .write_data (w_11),
         .reg_write (w_12),
         .RS1 (w_13),
         .RS2 (w_14),
         .RD (w_15),
         .write_reg (w_16)
     );

register blk219_2 (
         .rd1 (w_5),
         .rd2 (w_6),
         .reg_write (w_12),
         .reg_addr1 (w_13),
         .reg_addr2 (w_14),
         .addr (w_15),
         .write_reg (w_16),
         .clk (clk)

     );

power_on_reset blk217_4 (
         .clk (clk),
         .resetn (w_21)
     );

blockram blk216_5 (
         .data_out (w_4),
         .we (w_8),
         .be (w_9),
         .addr (w_10),
         .data_in (w_11),
         .clk (clk)
     );

screen blk85_7 (
         .ioSclk (sck1),
         .ioSdin (sda1),
         .ioCs (cs1),
         .ioDc (dc1),
         .ioReset (res1),
         .clk (clk),
         .pixelData (w_23),
         .pixelAddress (w_24)
     );

inverterC blk5_21 (
         .Q (w_2),
         .A (w_21)
     );

alu_decoder blk221_25 (
         .clk (clk),
         .RD1 (w_5),
         .RD2 (w_6),
         .instruction (w_3),
         .data_out (w_26)
     );

stringbyte blk128_26 (
         .clk (clk),
         .strng (w_26),
         .mudar (w_27),
         .sbyte (w_28)
     );

bus_to_wires blk28_27 (
         .out_0 (w_27),
         .in (w_29)
     );

textEngine blk86_28 (
         .clk (clk),
         .pixelData (w_23),
         .pixelAddress (w_24),
         .charAddress (w_29),
         .charOutput (w_30)

     );

mux4_8 blk125_36 (
         .clk (clk),
         .sinalB (" "),
         .sinalC (" "),
         .sinalD (" "),
         .sinalA (w_28),
         .muxOut (w_30),
         .select (w_32)
     );

bus_to_bus_4_5 blk132_38 (
         .in (w_29),
         .out_45 (w_32)
     );

two_hz_clock blk107_39 (
         .clk (clk),
         .out (w_1)

     );

imem blk218_40 (
         .instr (w_3),
         .pc (w_7)

     );


endmodule
