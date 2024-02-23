/* verilator lint_off UNUSEDSIGNAL */

module bus_to_bus_4_5 (in,out_45); 
  // Inputs e Outputs 
  input wire [5:0] in; 
  output wire [1:0] out_45;
  // Comportamento do circuito 
  assign out_45[0] = in[4];
  assign out_45[1] = in[5];
endmodule
