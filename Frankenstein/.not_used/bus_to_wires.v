
// Bloco separador de barramento de 8 bits para uso na ferramenta 
module bus_to_wires (in,out_0,out_1,out_2,out_3,out_4,out_5,out_6,out_7);

// Inputs e Outputs
input wire [7:0] in;
output wire out_0,out_1,out_2,out_3,out_4,out_5,out_6,out_7;

// Comportamento do circuito
assign out_0 = in[0];
assign out_1 = in[1];
assign out_2 = in[2];
assign out_3 = in[3];
assign out_4 = in[4];
assign out_5 = in[5];
assign out_6 = in[6];
assign out_7 = in[7];

endmodule
