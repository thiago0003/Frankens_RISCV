/* verilator lint_off WIDTHTRUNC */
/* verilator lint_off UNUSEDSIGNAL */

module imem( input  [31:0]  pc,
             output [31:0] instr
);

  reg [31:0] RAM[0:511]; 
  
  initial     
	begin
	RAM[0] =   32'h000007b7;
	RAM[1] =   32'h00078793;
	RAM[2] =   32'h00010737;
	RAM[3] =   32'hfff70713;
	RAM[4] =   32'h00e79123;
	RAM[5] =   32'h000007b7;
	RAM[6] =   32'h00078793;
	RAM[7] =   32'h0027d703;
	RAM[8] =   32'h000007b7;
	RAM[9] =   32'h00078793;
	RAM[10] =  32'h00e79023;
	RAM[11] =  32'h000007b7;
	RAM[12] =  32'h00078793;
	RAM[13] =  32'h0007d783;
	RAM[14] =  32'h00f00733;
	RAM[15] =  32'h000007b7;
	RAM[16] =  32'h06478793;
	RAM[17] =  32'h00e7a023;
	// RAM[18] =  32'h00179793;
	// RAM[19] =  32'h00f767b3;
	// RAM[20] =  32'h00f00933;
	// RAM[21] =  32'h0ff97713;
	// RAM[22] =  32'h00509693;
	// RAM[23] =  32'h00309793;
	// RAM[24] =  32'h00f687b3;
	// RAM[25] =  32'h00f487b3;
	// RAM[26] =  32'h00177713;
	// RAM[27] =  32'h0ff77713;
	// RAM[28] =  32'h000006b7;
	// RAM[29] =  32'h00068693;
	// RAM[30] =  32'h00f687b3;
	// RAM[31] =  32'h00e78023;
	// RAM[32] =  32'h00108093;
	// RAM[33] =  32'h01d00793;
	// RAM[34] =  32'hf817d6e3;
	// RAM[35] =  32'h00148493;
	// RAM[36] =  32'h02700793;
	// RAM[37] =  32'hf697dce3;
	// RAM[38] =  32'h00000093;
	// RAM[39] =  32'h04c0006f;
	// RAM[40] =  32'h000007b7;
	// RAM[41] =  32'h00078793;
	// RAM[42] =  32'h001787b3;
	// RAM[43] =  32'h0007c703;
	// RAM[44] =  32'h000007b7;
	// RAM[45] =  32'h52878793;
	// RAM[46] =  32'h001787b3;
	// RAM[47] =  32'h00e78023;
	// RAM[48] =  32'h48808793;
	// RAM[49] =  32'h00000737;
	// RAM[50] =  32'h00070713;
	// RAM[51] =  32'h00f707b3;
	// RAM[52] =  32'h0007c703;
	// RAM[53] =  32'h000007b7;
	// RAM[54] =  32'h50078793;
	// RAM[55] =  32'h001787b3;
	// RAM[56] =  32'h00e78023;
	// RAM[57] =  32'h00108093;
	// RAM[58] =  32'h02700793;
	// RAM[59] =  32'hfa17dae3;
	// RAM[60] =  32'h00000093;
	// RAM[61] =  32'h2900006f;
	// RAM[62] =  32'h00000493;
	// RAM[63] =  32'h1dc0006f;
	// RAM[64] =  32'h00048663;
	// RAM[65] =  32'hfff48793;
	// RAM[66] =  32'h0080006f;
	// RAM[67] =  32'h02700793;
	// RAM[68] =  32'h00000737;
	// RAM[69] =  32'h50070713;
	// RAM[70] =  32'h00f707b3;
	// RAM[71] =  32'h0007c703;
	// RAM[72] =  32'h000007b7;
	// RAM[73] =  32'h50078793;
	// RAM[74] =  32'h009787b3;
	// RAM[75] =  32'h0007c783;
	// RAM[76] =  32'h00f707b3;
	// RAM[77] =  32'h0ff7f713;
	// RAM[78] =  32'h02700793;
	// RAM[79] =  32'h00f48663;
	// RAM[80] =  32'h00148793;
	// RAM[81] =  32'h0080006f;
	// RAM[82] =  32'h00000793;
	// RAM[83] =  32'h000006b7;
	// RAM[84] =  32'h50068693;
	// RAM[85] =  32'h00f687b3;
	// RAM[86] =  32'h0007c783;
	// RAM[87] =  32'h00f707b3;
	// RAM[88] =  32'h0ff7f713;
	// RAM[89] =  32'h00509693;
	// RAM[90] =  32'h00309793;
	// RAM[91] =  32'h00f686b3;
	// RAM[92] =  32'h00048663;
	// RAM[93] =  32'hfff48793;
	// RAM[94] =  32'h0080006f;
	// RAM[95] =  32'h02700793;
	// RAM[96] =  32'h00d787b3;
	// RAM[97] =  32'h000006b7;
	// RAM[98] =  32'h00068693;
	// RAM[99] =  32'h00f687b3;
	// RAM[100] = 32'h0007c783;
	// RAM[101] = 32'h00f707b3;
	// RAM[102] = 32'h0ff7f713;
	// RAM[103] = 32'h00509693;
	// RAM[104] = 32'h00309793;
	// RAM[105] = 32'h00f686b3;
	// RAM[106] = 32'h02700793;
	// RAM[107] = 32'h00f48663;
	// RAM[108] = 32'h00148793;
	// RAM[109] = 32'h0080006f;
	// RAM[110] = 32'h00000793;
	// RAM[111] = 32'h00d787b3;
	// RAM[112] = 32'h000006b7;
	// RAM[113] = 32'h00068693;
	// RAM[114] = 32'h00f687b3;
	// RAM[115] = 32'h0007c783;
	// RAM[116] = 32'h00f707b3;
	// RAM[117] = 32'h0ff7f713;
	// RAM[118] = 32'h00108793;
	// RAM[119] = 32'h00579693;
	// RAM[120] = 32'h00108793;
	// RAM[121] = 32'h00379793;
	// RAM[122] = 32'h00f686b3;
	// RAM[123] = 32'h00048663;
	// RAM[124] = 32'hfff48793;
	// RAM[125] = 32'h0080006f;
	// RAM[126] = 32'h02700793;
	// RAM[127] = 32'h00d787b3;
	// RAM[128] = 32'h000006b7;
	// RAM[129] = 32'h00068693;
	// RAM[130] = 32'h00f687b3;
	// RAM[131] = 32'h0007c783;
	// RAM[132] = 32'h00f707b3;
	// RAM[133] = 32'h0ff7f713;
	// RAM[134] = 32'h00108793;
	// RAM[135] = 32'h00579693;
	// RAM[136] = 32'h00108793;
	// RAM[137] = 32'h00379793;
	// RAM[138] = 32'h00f687b3;
	// RAM[139] = 32'h00f487b3;
	// RAM[140] = 32'h000006b7;
	// RAM[141] = 32'h00068693;
	// RAM[142] = 32'h00f687b3;
	// RAM[143] = 32'h0007c783;
	// RAM[144] = 32'h00f707b3;
	// RAM[145] = 32'h0ff7f713;
	// RAM[146] = 32'h00108793;
	// RAM[147] = 32'h00579693;
	// RAM[148] = 32'h00108793;
	// RAM[149] = 32'h00379793;
	// RAM[150] = 32'h00f686b3;
	// RAM[151] = 32'h02700793;
	// RAM[152] = 32'h00f48663;
	// RAM[153] = 32'h00148793;
	// RAM[154] = 32'h0080006f;
	// RAM[155] = 32'h00000793;
	// RAM[156] = 32'h00d787b3;
	// RAM[157] = 32'h000006b7;
	// RAM[158] = 32'h00068693;
	// RAM[159] = 32'h00f687b3;
	// RAM[160] = 32'h0007c783;
	// RAM[161] = 32'h00f707b3;
	// RAM[162] = 32'h0ff7f913;
	// RAM[163] = 32'h00509713;
	// RAM[164] = 32'h00309793;
	// RAM[165] = 32'h00f707b3;
	// RAM[166] = 32'h00f487b3;
	// RAM[167] = 32'h00000737;
	// RAM[168] = 32'h00070713;
	// RAM[169] = 32'h00f707b3;
	// RAM[170] = 32'h0007c783;
	// RAM[171] = 32'h00f967b3;
	// RAM[172] = 32'h0ff7f793;
	// RAM[173] = 32'hffd78793;
	// RAM[174] = 32'h0017b793;
	// RAM[175] = 32'h0ff7f793;
	// RAM[176] = 32'h00f00733;
	// RAM[177] = 32'h000007b7;
	// RAM[178] = 32'h4b078793;
	// RAM[179] = 32'h009787b3;
	// RAM[180] = 32'h00e78023;
	// RAM[181] = 32'h00148493;
	// RAM[182] = 32'h02700793;
	// RAM[183] = 32'he297d2e3;
	// RAM[184] = 32'h00000493;
	// RAM[185] = 32'h0940006f;
	// RAM[186] = 32'h00509713;
	// RAM[187] = 32'h00309793;
	// RAM[188] = 32'h00f707b3;
	// RAM[189] = 32'h00f487b3;
	// RAM[190] = 32'h00000737;
	// RAM[191] = 32'h00070713;
	// RAM[192] = 32'h00f707b3;
	// RAM[193] = 32'h0007c703;
	// RAM[194] = 32'h000007b7;
	// RAM[195] = 32'h50078793;
	// RAM[196] = 32'h009787b3;
	// RAM[197] = 32'h00e78023;
	// RAM[198] = 32'h02105e63;
	// RAM[199] = 32'hfff08793;
	// RAM[200] = 32'h00579713;
	// RAM[201] = 32'hfff08793;
	// RAM[202] = 32'h00379793;
	// RAM[203] = 32'h00f707b3;
	// RAM[204] = 32'h00f487b3;
	// RAM[205] = 32'h00000737;
	// RAM[206] = 32'h4d870713;
	// RAM[207] = 32'h00970733;
	// RAM[208] = 32'h00074703;
	// RAM[209] = 32'h000006b7;
	// RAM[210] = 32'h00068693;
	// RAM[211] = 32'h00f687b3;
	// RAM[212] = 32'h00e78023;
	// RAM[213] = 32'h000007b7;
	// RAM[214] = 32'h4b078793;
	// RAM[215] = 32'h009787b3;
	// RAM[216] = 32'h0007c703;
	// RAM[217] = 32'h000007b7;
	// RAM[218] = 32'h4d878793;
	// RAM[219] = 32'h009787b3;
	// RAM[220] = 32'h00e78023;
	// RAM[221] = 32'h00148493;
	// RAM[222] = 32'h02700793;
	// RAM[223] = 32'hf697d6e3;
	// RAM[224] = 32'h00108093;
	// RAM[225] = 32'h01c00793;
	// RAM[226] = 32'hd617d8e3;
	// RAM[227] = 32'h00000093;
	// RAM[228] = 32'h1680006f;
	// RAM[229] = 32'h00008663;
	// RAM[230] = 32'hfff08793;
	// RAM[231] = 32'h0080006f;
	// RAM[232] = 32'h02700793;
	// RAM[233] = 32'h00000737;
	// RAM[234] = 32'h50070713;
	// RAM[235] = 32'h00f707b3;
	// RAM[236] = 32'h0007c703;
	// RAM[237] = 32'h000007b7;
	// RAM[238] = 32'h50078793;
	// RAM[239] = 32'h001787b3;
	// RAM[240] = 32'h0007c783;
	// RAM[241] = 32'h00f707b3;
	// RAM[242] = 32'h0ff7f713;
	// RAM[243] = 32'h02700793;
	// RAM[244] = 32'h00f08663;
	// RAM[245] = 32'h00108793;
	// RAM[246] = 32'h0080006f;
	// RAM[247] = 32'h00000793;
	// RAM[248] = 32'h000006b7;
	// RAM[249] = 32'h50068693;
	// RAM[250] = 32'h00f687b3;
	// RAM[251] = 32'h0007c783;
	// RAM[252] = 32'h00f707b3;
	// RAM[253] = 32'h0ff7f713;
	// RAM[254] = 32'h00008663;
	// RAM[255] = 32'h48708793;
	// RAM[256] = 32'h0080006f;
	// RAM[257] = 32'h4af00793;
	// RAM[258] = 32'h000006b7;
	// RAM[259] = 32'h00068693;
	// RAM[260] = 32'h00f687b3;
	// RAM[261] = 32'h0007c783;
	// RAM[262] = 32'h00f707b3;
	// RAM[263] = 32'h0ff7f713;
	// RAM[264] = 32'h02700793;
	// RAM[265] = 32'h00f08663;
	// RAM[266] = 32'h48908793;
	// RAM[267] = 32'h0080006f;
	// RAM[268] = 32'h48800793;
	// RAM[269] = 32'h000006b7;
	// RAM[270] = 32'h00068693;
	// RAM[271] = 32'h00f687b3;
	// RAM[272] = 32'h0007c783;
	// RAM[273] = 32'h00f707b3;
	// RAM[274] = 32'h0ff7f713;
	// RAM[275] = 32'h00008663;
	// RAM[276] = 32'hfff08793;
	// RAM[277] = 32'h0080006f;
	// RAM[278] = 32'h02700793;
	// RAM[279] = 32'h000006b7;
	// RAM[280] = 32'h52868693;
	// RAM[281] = 32'h00f687b3;
	// RAM[282] = 32'h0007c783;
	// RAM[283] = 32'h00f707b3;
	// RAM[284] = 32'h0ff7f713;
	// RAM[285] = 32'h000007b7;
	// RAM[286] = 32'h52878793;
	// RAM[287] = 32'h001787b3;
	// RAM[288] = 32'h0007c783;
	// RAM[289] = 32'h00f707b3;
	// RAM[290] = 32'h0ff7f713;
	// RAM[291] = 32'h02700793;
	// RAM[292] = 32'h00f08663;
	// RAM[293] = 32'h00108793;
	// RAM[294] = 32'h0080006f;
	// RAM[295] = 32'h00000793;
	// RAM[296] = 32'h000006b7;
	// RAM[297] = 32'h52868693;
	// RAM[298] = 32'h00f687b3;
	// RAM[299] = 32'h0007c783;
	// RAM[300] = 32'h00f707b3;
	// RAM[301] = 32'h0ff7f913;
	// RAM[302] = 32'h48808793;
	// RAM[303] = 32'h00000737;
	// RAM[304] = 32'h00070713;
	// RAM[305] = 32'h00f707b3;
	// RAM[306] = 32'h0007c783;
	// RAM[307] = 32'h00f967b3;
	// RAM[308] = 32'h0ff7f793;
	// RAM[309] = 32'hffd78793;
	// RAM[310] = 32'h0017b793;
	// RAM[311] = 32'h0ff7f793;
	// RAM[312] = 32'h00f00733;
	// RAM[313] = 32'h000007b7;
	// RAM[314] = 32'h4d878793;
	// RAM[315] = 32'h001787b3;
	// RAM[316] = 32'h00e78023;
	// RAM[317] = 32'h00108093;
	// RAM[318] = 32'h02700793;
	// RAM[319] = 32'he817dce3;
	// RAM[320] = 32'h00000093;
	// RAM[321] = 32'h0500006f;
	// RAM[322] = 32'h46008793;
	// RAM[323] = 32'h00000737;
	// RAM[324] = 32'h4b070713;
	// RAM[325] = 32'h00170733;
	// RAM[326] = 32'h00074703;
	// RAM[327] = 32'h000006b7;
	// RAM[328] = 32'h00068693;
	// RAM[329] = 32'h00f687b3;
	// RAM[330] = 32'h00e78023;
	// RAM[331] = 32'h48808793;
	// RAM[332] = 32'h00000737;
	// RAM[333] = 32'h4d870713;
	// RAM[334] = 32'h00170733;
	// RAM[335] = 32'h00074703;
	// RAM[336] = 32'h000006b7;
	// RAM[337] = 32'h00068693;
	// RAM[338] = 32'h00f687b3;
	// RAM[339] = 32'h00e78023;
	// RAM[340] = 32'h00108093;
	// RAM[341] = 32'h02700793;
	// RAM[342] = 32'hfa17d8e3;
	// RAM[343] = 32'hb3dff06f;
	// RAM[344] = 32'h00f967b3;
	// RAM[345] = 32'h0ff7f793;
	// RAM[346] = 32'hffd78793;
	// RAM[347] = 32'h0017b793;
	// RAM[348] = 32'h0ff7f793;
	// RAM[349] = 32'h00f00733;
	// RAM[350] = 32'h000007b7;
	// RAM[351] = 32'h4ce78793;
	// RAM[352] = 32'h001787b3;
	// RAM[353] = 32'h00e78023;
	// RAM[354] = 32'h00108093;
	// RAM[355] = 32'h01d00793;
	// RAM[356] = 32'he817dce3;
	// RAM[357] = 32'h00000093;
	// RAM[358] = 32'h0500006f;
	// RAM[359] = 32'h47408793;
	// RAM[360] = 32'h00000737;
	// RAM[361] = 32'h4b070713;
	// RAM[362] = 32'h00170733;
	// RAM[363] = 32'h00074703;
	// RAM[364] = 32'h000006b7;
	// RAM[365] = 32'h00068693;
	// RAM[366] = 32'h00f687b3;
	// RAM[367] = 32'h00e78023;
	// RAM[368] = 32'h49208793;
	// RAM[369] = 32'h00000737;
	// RAM[370] = 32'h4ce70713;
	// RAM[371] = 32'h00170733;
	// RAM[372] = 32'h00074703;
	// RAM[373] = 32'h000006b7;
	// RAM[374] = 32'h00068693;
	// RAM[375] = 32'h00f687b3;
	// RAM[376] = 32'h00e78023;
	// RAM[377] = 32'h00108093;
	// RAM[378] = 32'h01d00793;
	// RAM[379] = 32'hfa17d8e3;
	// RAM[380] = 32'hb3dff06f;
	// //RAM[] = 32'hb25ff06f;


	end

  assign instr = RAM[pc[31:2]]; // word aligned
endmodule
