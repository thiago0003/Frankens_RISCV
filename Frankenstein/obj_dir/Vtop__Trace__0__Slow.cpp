// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+215,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+215,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+139,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+140,0,"instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+216,0,"read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+217,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+141,0,"write_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+218,0,"src1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+219,0,"src2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+38,0,"mem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"reg_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+236,0,"TXD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+237,0,"RXD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"byte_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+40,0,"RS1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+41,0,"RS2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+143,0,"RD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declArray(c+123,0,"out_decoder1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+127,0,"out_decoder2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+131,0,"out_decoder3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+135,0,"out_decoder4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1,0,"clk_div1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+220,0,"clk_div2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+221,0,"clk_div3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+222,0,"clk_div4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"resetn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("alu_decoder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+215,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+140,0,"instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"R1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"R2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+141,0,"RD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+123,0,"data_out1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+127,0,"data_out2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+131,0,"data_out3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+135,0,"data_out4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+144,0,"hex_code",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declQuad(c+207,0,"R1_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+209,0,"R2_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+148,0,"RD_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+150,0,"imm_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+152,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+153,0,"rd_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+154,0,"funct3_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+155,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+156,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+157,0,"funct7_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+158,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+159,0,"funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+160,0,"R_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"I_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"S_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"B_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"U_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"J_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+166,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+167,0,"is_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ascii_decoder1_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+44,0,"value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+211,0,"ascii",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("ascii_decoder1_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+45,0,"value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+212,0,"ascii",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("ascii_decoder1_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+238,0,"value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+239,0,"ascii",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("ascii_decoder1_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+238,0,"value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+239,0,"ascii",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("ascii_decoder1_5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+238,0,"value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+239,0,"ascii",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("ascii_decoder1_6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+238,0,"value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+239,0,"ascii",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("ascii_decoder1_7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+238,0,"value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+239,0,"ascii",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("ascii_decoder1_8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+238,0,"value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+239,0,"ascii",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("ascii_decoder2_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+46,0,"value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+213,0,"ascii",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("ascii_decoder2_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+47,0,"value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+214,0,"ascii",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("ascii_decoder2_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+238,0,"value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+239,0,"ascii",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("ascii_decoder2_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+238,0,"value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+239,0,"ascii",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("ascii_decoder2_5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+238,0,"value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+239,0,"ascii",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("ascii_decoder2_6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+238,0,"value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+239,0,"ascii",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("ascii_decoder2_7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+238,0,"value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+239,0,"ascii",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("ascii_decoder2_8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+238,0,"value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+239,0,"ascii",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("ascii_decoder3_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+168,0,"value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+169,0,"ascii",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("ascii_decoder3_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+170,0,"value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+171,0,"ascii",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("ascii_decoder3_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+172,0,"value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+173,0,"ascii",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("ascii_decoder3_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+174,0,"value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+175,0,"ascii",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("ascii_decoder3_5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+176,0,"value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+177,0,"ascii",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("ascii_decoder3_6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+178,0,"value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+179,0,"ascii",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("ascii_decoder3_7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+180,0,"value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+181,0,"ascii",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("ascii_decoder3_8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+182,0,"value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+183,0,"ascii",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("ascii_decoder4_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+184,0,"value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+185,0,"ascii",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("ascii_decoder4_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+186,0,"value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+187,0,"ascii",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("ascii_decoder4_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+188,0,"value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+189,0,"ascii",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("ascii_decoder4_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+190,0,"value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+191,0,"ascii",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("ascii_decoder4_5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+192,0,"value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+193,0,"ascii",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("ascii_decoder4_6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+194,0,"value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+195,0,"ascii",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("ascii_decoder4_7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+196,0,"value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+197,0,"ascii",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("ascii_decoder4_8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+198,0,"value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+199,0,"ascii",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("blockram", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+240,0,"BYTE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+241,0,"ADDRESS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+242,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+243,0,"BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+241,0,"DATA_WIDTH_R",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+217,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"be",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+37,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+38,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+215,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+216,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+216,0,"data_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("franken_riscv", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+222,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+139,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+140,0,"instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+38,0,"mem_write_Mem",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"byte_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+217,0,"alu_result_Exec",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"write_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+216,0,"read_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+142,0,"reg_write_WB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"RS1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+41,0,"RS2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+143,0,"RD_WB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+141,0,"write_reg_WB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+218,0,"src1_Dec",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+219,0,"src2_Dec",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+237,0,"RXD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+236,0,"TXD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"is_conditional_jump_Exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+201,0,"mem_write_Exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"mem_read_Exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"reg_write_Exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+204,0,"RD_Exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+223,0,"jump_add_Exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+205,0,"src2_Exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+48,0,"mem_read_Mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"reg_write_Mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+50,0,"alu_result_Mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"data_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"RD_Mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+224,0,"next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"funct7_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+54,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+55,0,"rd_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+56,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+57,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+58,0,"funct3_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+59,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,0,"pc_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"Fwd_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+62,0,"Fwd_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+63,0,"stall_Exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+206,0,"stall_Mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"stall_WB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"R_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"is_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"is_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"is_xor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"is_or",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"is_and",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"is_sltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"is_sll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"is_slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"is_srl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"is_sra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"is_mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"is_mulh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"is_mulhsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"is_mulhu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"is_div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"is_divu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"is_rem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"is_remu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"is_multiply",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"I_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"is_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"is_lb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"is_lh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"is_lw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"is_lbu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"is_lhu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"is_addi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"is_slti",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"is_sltiu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"is_xori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"is_ori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"is_andi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"is_slli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"is_srli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"is_srai",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"S_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"is_sw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"is_sb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"is_sh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"B_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"is_bge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"is_beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"is_blt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"is_bne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"is_bltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"is_bgeu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"U_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"is_auipc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"is_lui",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"J_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"is_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"fence",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+117,0,"RD_Dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+118,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+119,0,"funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+120,0,"is_conditional_jump_Dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"mem_write_Dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"mem_read_Dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"reg_write_Dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+225,0,"src1_forward",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+226,0,"src2_forward",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+227,0,"sign1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+228,0,"sign2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+229,0,"src1_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+231,0,"src2_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+233,0,"result_mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("imem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+235,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+237,0,"write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+139,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+244,0,"addr_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+244,0,"data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+140,0,"instr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("power_on_reset", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+215,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"resetn",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("regs", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+215,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"reg_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"reg_addr1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+41,0,"reg_addr2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+143,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+141,0,"write_reg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+218,0,"rd1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+219,0,"rd2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("rf", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+5+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtop___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtop___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+236,(vlSelf->top__DOT__TXD));
    bufp->fullBit(oldp+237,(0U));
    bufp->fullCData(oldp+238,(0U),4);
    bufp->fullCData(oldp+239,(0x30U),8);
    bufp->fullIData(oldp+240,(8U),32);
    bufp->fullIData(oldp+241,(0x20U),32);
    bufp->fullIData(oldp+242,(0x32U),32);
    bufp->fullIData(oldp+243,(4U),32);
    bufp->fullIData(oldp+244,(0U),32);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->top__DOT__clk_div1));
    bufp->fullBit(oldp+2,((7U == (IData)(vlSelf->top__DOT__power_on_reset__DOT__q))));
    bufp->fullBit(oldp+3,((1U & (~ (IData)((7U == (IData)(vlSelf->top__DOT__power_on_reset__DOT__q)))))));
    bufp->fullCData(oldp+4,(vlSelf->top__DOT__power_on_reset__DOT__q),3);
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__regs__DOT__rf[0]),32);
    bufp->fullIData(oldp+6,(vlSelf->top__DOT__regs__DOT__rf[1]),32);
    bufp->fullIData(oldp+7,(vlSelf->top__DOT__regs__DOT__rf[2]),32);
    bufp->fullIData(oldp+8,(vlSelf->top__DOT__regs__DOT__rf[3]),32);
    bufp->fullIData(oldp+9,(vlSelf->top__DOT__regs__DOT__rf[4]),32);
    bufp->fullIData(oldp+10,(vlSelf->top__DOT__regs__DOT__rf[5]),32);
    bufp->fullIData(oldp+11,(vlSelf->top__DOT__regs__DOT__rf[6]),32);
    bufp->fullIData(oldp+12,(vlSelf->top__DOT__regs__DOT__rf[7]),32);
    bufp->fullIData(oldp+13,(vlSelf->top__DOT__regs__DOT__rf[8]),32);
    bufp->fullIData(oldp+14,(vlSelf->top__DOT__regs__DOT__rf[9]),32);
    bufp->fullIData(oldp+15,(vlSelf->top__DOT__regs__DOT__rf[10]),32);
    bufp->fullIData(oldp+16,(vlSelf->top__DOT__regs__DOT__rf[11]),32);
    bufp->fullIData(oldp+17,(vlSelf->top__DOT__regs__DOT__rf[12]),32);
    bufp->fullIData(oldp+18,(vlSelf->top__DOT__regs__DOT__rf[13]),32);
    bufp->fullIData(oldp+19,(vlSelf->top__DOT__regs__DOT__rf[14]),32);
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__regs__DOT__rf[15]),32);
    bufp->fullIData(oldp+21,(vlSelf->top__DOT__regs__DOT__rf[16]),32);
    bufp->fullIData(oldp+22,(vlSelf->top__DOT__regs__DOT__rf[17]),32);
    bufp->fullIData(oldp+23,(vlSelf->top__DOT__regs__DOT__rf[18]),32);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__regs__DOT__rf[19]),32);
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__regs__DOT__rf[20]),32);
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__regs__DOT__rf[21]),32);
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__regs__DOT__rf[22]),32);
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__regs__DOT__rf[23]),32);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__regs__DOT__rf[24]),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__regs__DOT__rf[25]),32);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__regs__DOT__rf[26]),32);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__regs__DOT__rf[27]),32);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__regs__DOT__rf[28]),32);
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__regs__DOT__rf[29]),32);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__regs__DOT__rf[30]),32);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__regs__DOT__rf[31]),32);
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__write_data),32);
    bufp->fullBit(oldp+38,(vlSelf->top__DOT__mem_write));
    bufp->fullCData(oldp+39,(vlSelf->top__DOT__byte_enable),4);
    bufp->fullCData(oldp+40,(vlSelf->top__DOT__RS1),5);
    bufp->fullCData(oldp+41,(vlSelf->top__DOT__RS2),5);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__RS1),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__RS2),32);
    bufp->fullCData(oldp+44,(((IData)(vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_he778bdb7__0)
                               ? (0xfU & (IData)(vlSelf->top__DOT__franken_riscv__DOT__rs1))
                               : 0U)),4);
    bufp->fullCData(oldp+45,(((IData)(vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_he778bdb7__0) 
                              & ((IData)(vlSelf->top__DOT__franken_riscv__DOT__rs1) 
                                 >> 4U))),4);
    bufp->fullCData(oldp+46,(((IData)(vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_hf167f6a7__0)
                               ? (0xfU & (IData)(vlSelf->top__DOT__franken_riscv__DOT__rs2))
                               : 0U)),4);
    bufp->fullCData(oldp+47,(((IData)(vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_hf167f6a7__0) 
                              & ((IData)(vlSelf->top__DOT__franken_riscv__DOT__rs2) 
                                 >> 4U))),4);
    bufp->fullBit(oldp+48,(vlSelf->top__DOT__franken_riscv__DOT__mem_read_Mem));
    bufp->fullBit(oldp+49,(vlSelf->top__DOT__franken_riscv__DOT__reg_write_Mem));
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__franken_riscv__DOT__alu_result_Mem),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__franken_riscv__DOT__data_load),32);
    bufp->fullCData(oldp+52,(vlSelf->top__DOT__franken_riscv__DOT__RD_Mem),5);
    bufp->fullCData(oldp+53,(vlSelf->top__DOT__franken_riscv__DOT__funct7_),7);
    bufp->fullCData(oldp+54,(vlSelf->top__DOT__franken_riscv__DOT__opcode),7);
    bufp->fullCData(oldp+55,(vlSelf->top__DOT__franken_riscv__DOT__rd_),5);
    bufp->fullCData(oldp+56,(vlSelf->top__DOT__franken_riscv__DOT__rs1),5);
    bufp->fullCData(oldp+57,(vlSelf->top__DOT__franken_riscv__DOT__rs2),5);
    bufp->fullCData(oldp+58,(vlSelf->top__DOT__franken_riscv__DOT__funct3_),3);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__franken_riscv__DOT__imm),32);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__franken_riscv__DOT__pc_dec),32);
    bufp->fullCData(oldp+61,(vlSelf->top__DOT__franken_riscv__DOT__Fwd_A),2);
    bufp->fullCData(oldp+62,(vlSelf->top__DOT__franken_riscv__DOT__Fwd_B),2);
    bufp->fullBit(oldp+63,(vlSelf->top__DOT__franken_riscv__DOT__stall_Exec));
    bufp->fullBit(oldp+64,(vlSelf->top__DOT__franken_riscv__DOT__stall_WB));
    bufp->fullBit(oldp+65,((0x33U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode))));
    bufp->fullBit(oldp+66,(((IData)(vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_h154cd026__0) 
                            & (0U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7)))));
    bufp->fullBit(oldp+67,(((IData)(vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_h154cd026__0) 
                            & (0x20U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7)))));
    bufp->fullBit(oldp+68,(((0x33U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
                            & ((4U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                               & (0U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7))))));
    bufp->fullBit(oldp+69,(((0x33U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
                            & ((6U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                               & (0U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7))))));
    bufp->fullBit(oldp+70,(((0x33U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
                            & ((7U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                               & (0U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7))))));
    bufp->fullBit(oldp+71,(((0x33U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
                            & ((3U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                               & (0U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7))))));
    bufp->fullBit(oldp+72,(((0x33U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
                            & ((1U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                               & (0U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7))))));
    bufp->fullBit(oldp+73,(((0x33U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
                            & ((2U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                               & (0U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7))))));
    bufp->fullBit(oldp+74,(((IData)(vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_he89c683e__0) 
                            & (0U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7)))));
    bufp->fullBit(oldp+75,(((IData)(vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_he89c683e__0) 
                            & (0x20U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7)))));
    bufp->fullBit(oldp+76,(vlSelf->top__DOT__franken_riscv__DOT__is_mul));
    bufp->fullBit(oldp+77,(vlSelf->top__DOT__franken_riscv__DOT__is_mulh));
    bufp->fullBit(oldp+78,(vlSelf->top__DOT__franken_riscv__DOT__is_mulhsu));
    bufp->fullBit(oldp+79,(vlSelf->top__DOT__franken_riscv__DOT__is_mulhu));
    bufp->fullBit(oldp+80,(((0x33U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
                            & ((4U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                               & (1U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7))))));
    bufp->fullBit(oldp+81,(((0x33U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
                            & ((5U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                               & (1U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7))))));
    bufp->fullBit(oldp+82,(((0x33U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
                            & ((6U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                               & (1U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7))))));
    bufp->fullBit(oldp+83,(((0x33U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
                            & ((7U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                               & (1U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7))))));
    bufp->fullBit(oldp+84,(((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_mul) 
                            | ((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_mulh) 
                               | ((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_mulhsu) 
                                  | (IData)(vlSelf->top__DOT__franken_riscv__DOT__is_mulhu))))));
    bufp->fullBit(oldp+85,(vlSelf->top__DOT__franken_riscv__DOT__I_type));
    bufp->fullBit(oldp+86,(vlSelf->top__DOT__franken_riscv__DOT__is_jalr));
    bufp->fullBit(oldp+87,(vlSelf->top__DOT__franken_riscv__DOT__is_lb));
    bufp->fullBit(oldp+88,(vlSelf->top__DOT__franken_riscv__DOT__is_lh));
    bufp->fullBit(oldp+89,(vlSelf->top__DOT__franken_riscv__DOT__is_lw));
    bufp->fullBit(oldp+90,(vlSelf->top__DOT__franken_riscv__DOT__is_lbu));
    bufp->fullBit(oldp+91,(vlSelf->top__DOT__franken_riscv__DOT__is_lhu));
    bufp->fullBit(oldp+92,(((0U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                            & (0x13U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)))));
    bufp->fullBit(oldp+93,(((2U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                            & (0x13U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)))));
    bufp->fullBit(oldp+94,(((3U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                            & (0x13U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)))));
    bufp->fullBit(oldp+95,(((4U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                            & (0x13U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)))));
    bufp->fullBit(oldp+96,(((6U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                            & (0x13U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)))));
    bufp->fullBit(oldp+97,(((7U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                            & (0x13U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)))));
    bufp->fullBit(oldp+98,(((1U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                            & (IData)(vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_he18098c8__0))));
    bufp->fullBit(oldp+99,(((5U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                            & (IData)(vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_he18098c8__0))));
    bufp->fullBit(oldp+100,(((5U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                             & ((0x20U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7)) 
                                & (0x13U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode))))));
    bufp->fullBit(oldp+101,((0x23U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode))));
    bufp->fullBit(oldp+102,(((0x23U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
                             & (2U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)))));
    bufp->fullBit(oldp+103,(vlSelf->top__DOT__franken_riscv__DOT__is_sb));
    bufp->fullBit(oldp+104,(vlSelf->top__DOT__franken_riscv__DOT__is_sh));
    bufp->fullBit(oldp+105,((0x63U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode))));
    bufp->fullBit(oldp+106,(vlSelf->top__DOT__franken_riscv__DOT__is_bge));
    bufp->fullBit(oldp+107,(vlSelf->top__DOT__franken_riscv__DOT__is_beq));
    bufp->fullBit(oldp+108,(vlSelf->top__DOT__franken_riscv__DOT__is_blt));
    bufp->fullBit(oldp+109,(vlSelf->top__DOT__franken_riscv__DOT__is_bne));
    bufp->fullBit(oldp+110,(((0x63U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
                             & (6U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)))));
    bufp->fullBit(oldp+111,(vlSelf->top__DOT__franken_riscv__DOT__is_bgeu));
    bufp->fullBit(oldp+112,(vlSelf->top__DOT__franken_riscv__DOT__U_type));
    bufp->fullBit(oldp+113,((0x17U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode))));
    bufp->fullBit(oldp+114,((0x37U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode))));
    bufp->fullBit(oldp+115,((0x6fU == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode))));
    bufp->fullBit(oldp+116,(((0xfU == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
                             & (0U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)))));
    bufp->fullCData(oldp+117,(vlSelf->top__DOT__franken_riscv__DOT__RD_Dec),5);
    bufp->fullCData(oldp+118,(vlSelf->top__DOT__franken_riscv__DOT__funct3),3);
    bufp->fullCData(oldp+119,(vlSelf->top__DOT__franken_riscv__DOT__funct7),7);
    bufp->fullBit(oldp+120,(vlSelf->top__DOT__franken_riscv__DOT__is_conditional_jump_Dec));
    bufp->fullBit(oldp+121,(vlSelf->top__DOT__franken_riscv__DOT__mem_read_Dec));
    bufp->fullBit(oldp+122,((((IData)(vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_hf167f6a7__0) 
                              | ((IData)(vlSelf->top__DOT__franken_riscv__DOT__I_type) 
                                 | (IData)(vlSelf->top__DOT__franken_riscv__DOT__U_type))) 
                             & (0U != (IData)(vlSelf->top__DOT__franken_riscv__DOT__RD_Dec)))));
    bufp->fullWData(oldp+123,(vlSelf->top__DOT__out_decoder1),128);
    bufp->fullWData(oldp+127,(vlSelf->top__DOT__out_decoder2),128);
    bufp->fullWData(oldp+131,(vlSelf->top__DOT__out_decoder3),128);
    bufp->fullWData(oldp+135,(vlSelf->top__DOT__out_decoder4),128);
    bufp->fullIData(oldp+139,(vlSelf->top__DOT__pc),32);
    bufp->fullIData(oldp+140,(vlSelf->top__DOT__instruction),32);
    bufp->fullIData(oldp+141,(vlSelf->top__DOT__write_reg),32);
    bufp->fullBit(oldp+142,(vlSelf->top__DOT__reg_write));
    bufp->fullCData(oldp+143,(vlSelf->top__DOT__RD),5);
    bufp->fullWData(oldp+144,(vlSelf->top__DOT__alu_decoder__DOT__hex_code),128);
    bufp->fullQData(oldp+148,(vlSelf->top__DOT__alu_decoder__DOT__RD_),64);
    bufp->fullQData(oldp+150,((((QData)((IData)(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder3_8____pinNumber2)) 
                                << 0x38U) | (((QData)((IData)(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder3_7____pinNumber2)) 
                                              << 0x30U) 
                                             | (((QData)((IData)(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder3_6____pinNumber2)) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder3_5____pinNumber2)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder3_4____pinNumber2) 
                                                                       << 0x18U) 
                                                                      | (((IData)(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder3_3____pinNumber2) 
                                                                          << 0x10U) 
                                                                         | (((IData)(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder3_2____pinNumber2) 
                                                                             << 8U) 
                                                                            | (IData)(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder3_1____pinNumber2))))))))))),64);
    bufp->fullCData(oldp+152,((0x7fU & vlSelf->top__DOT__instruction)),7);
    bufp->fullCData(oldp+153,((0x1fU & (vlSelf->top__DOT__instruction 
                                        >> 7U))),5);
    bufp->fullCData(oldp+154,((7U & (vlSelf->top__DOT__instruction 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+155,((0x1fU & (vlSelf->top__DOT__instruction 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+156,((0x1fU & (vlSelf->top__DOT__instruction 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+157,((vlSelf->top__DOT__instruction 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+158,(vlSelf->top__DOT__alu_decoder__DOT__funct3),3);
    bufp->fullCData(oldp+159,(vlSelf->top__DOT__alu_decoder__DOT__funct7),7);
    bufp->fullBit(oldp+160,((0x33U == (0x7fU & vlSelf->top__DOT__instruction))));
    bufp->fullBit(oldp+161,(vlSelf->top__DOT__alu_decoder__DOT__I_type));
    bufp->fullBit(oldp+162,((0x23U == (0x7fU & vlSelf->top__DOT__instruction))));
    bufp->fullBit(oldp+163,((0x63U == (0x7fU & vlSelf->top__DOT__instruction))));
    bufp->fullBit(oldp+164,(vlSelf->top__DOT__alu_decoder__DOT__U_type));
    bufp->fullBit(oldp+165,((0x6fU == (0x7fU & vlSelf->top__DOT__instruction))));
    bufp->fullIData(oldp+166,(vlSelf->top__DOT__alu_decoder__DOT__imm),32);
    bufp->fullBit(oldp+167,(vlSelf->top__DOT__alu_decoder__DOT__is_jalr));
    bufp->fullCData(oldp+168,((0xfU & vlSelf->top__DOT__alu_decoder__DOT__imm)),4);
    bufp->fullCData(oldp+169,(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder3_1____pinNumber2),8);
    bufp->fullCData(oldp+170,((0xfU & (vlSelf->top__DOT__alu_decoder__DOT__imm 
                                       >> 4U))),4);
    bufp->fullCData(oldp+171,(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder3_2____pinNumber2),8);
    bufp->fullCData(oldp+172,((0xfU & (vlSelf->top__DOT__alu_decoder__DOT__imm 
                                       >> 8U))),4);
    bufp->fullCData(oldp+173,(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder3_3____pinNumber2),8);
    bufp->fullCData(oldp+174,((0xfU & (vlSelf->top__DOT__alu_decoder__DOT__imm 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+175,(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder3_4____pinNumber2),8);
    bufp->fullCData(oldp+176,((0xfU & (vlSelf->top__DOT__alu_decoder__DOT__imm 
                                       >> 0x10U))),4);
    bufp->fullCData(oldp+177,(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder3_5____pinNumber2),8);
    bufp->fullCData(oldp+178,((0xfU & (vlSelf->top__DOT__alu_decoder__DOT__imm 
                                       >> 0x14U))),4);
    bufp->fullCData(oldp+179,(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder3_6____pinNumber2),8);
    bufp->fullCData(oldp+180,((0xfU & (vlSelf->top__DOT__alu_decoder__DOT__imm 
                                       >> 0x18U))),4);
    bufp->fullCData(oldp+181,(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder3_7____pinNumber2),8);
    bufp->fullCData(oldp+182,((vlSelf->top__DOT__alu_decoder__DOT__imm 
                               >> 0x1cU)),4);
    bufp->fullCData(oldp+183,(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder3_8____pinNumber2),8);
    bufp->fullCData(oldp+184,((0xfU & vlSelf->top__DOT__write_reg)),4);
    bufp->fullCData(oldp+185,(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder4_1____pinNumber2),8);
    bufp->fullCData(oldp+186,((0xfU & (vlSelf->top__DOT__write_reg 
                                       >> 4U))),4);
    bufp->fullCData(oldp+187,(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder4_2____pinNumber2),8);
    bufp->fullCData(oldp+188,((0xfU & (vlSelf->top__DOT__write_reg 
                                       >> 8U))),4);
    bufp->fullCData(oldp+189,(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder4_3____pinNumber2),8);
    bufp->fullCData(oldp+190,((0xfU & (vlSelf->top__DOT__write_reg 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+191,(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder4_4____pinNumber2),8);
    bufp->fullCData(oldp+192,((0xfU & (vlSelf->top__DOT__write_reg 
                                       >> 0x10U))),4);
    bufp->fullCData(oldp+193,(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder4_5____pinNumber2),8);
    bufp->fullCData(oldp+194,((0xfU & (vlSelf->top__DOT__write_reg 
                                       >> 0x14U))),4);
    bufp->fullCData(oldp+195,(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder4_6____pinNumber2),8);
    bufp->fullCData(oldp+196,((0xfU & (vlSelf->top__DOT__write_reg 
                                       >> 0x18U))),4);
    bufp->fullCData(oldp+197,(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder4_7____pinNumber2),8);
    bufp->fullCData(oldp+198,((vlSelf->top__DOT__write_reg 
                               >> 0x1cU)),4);
    bufp->fullCData(oldp+199,(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder4_8____pinNumber2),8);
    bufp->fullBit(oldp+200,(vlSelf->top__DOT__franken_riscv__DOT__is_conditional_jump_Exec));
    bufp->fullBit(oldp+201,(vlSelf->top__DOT__franken_riscv__DOT__mem_write_Exec));
    bufp->fullBit(oldp+202,(vlSelf->top__DOT__franken_riscv__DOT__mem_read_Exec));
    bufp->fullBit(oldp+203,(vlSelf->top__DOT__franken_riscv__DOT__reg_write_Exec));
    bufp->fullCData(oldp+204,(vlSelf->top__DOT__franken_riscv__DOT__RD_Exec),5);
    bufp->fullIData(oldp+205,(vlSelf->top__DOT__franken_riscv__DOT__src2_Exec),32);
    bufp->fullBit(oldp+206,(vlSelf->top__DOT__franken_riscv__DOT__stall_Mem));
    bufp->fullQData(oldp+207,((0x3030303000000000ULL 
                               | (QData)((IData)((0x30300000U 
                                                  | (((IData)(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder1_2____pinNumber2) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder1_1____pinNumber2))))))),64);
    bufp->fullQData(oldp+209,((0x3030303000000000ULL 
                               | (QData)((IData)((0x30300000U 
                                                  | (((IData)(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder2_2____pinNumber2) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder2_1____pinNumber2))))))),64);
    bufp->fullCData(oldp+211,(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder1_1____pinNumber2),8);
    bufp->fullCData(oldp+212,(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder1_2____pinNumber2),8);
    bufp->fullCData(oldp+213,(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder2_1____pinNumber2),8);
    bufp->fullCData(oldp+214,(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder2_2____pinNumber2),8);
    bufp->fullBit(oldp+215,(vlSelf->clk));
    bufp->fullIData(oldp+216,(vlSelf->top__DOT__blockram__DOT__data_reg),32);
    bufp->fullIData(oldp+217,(vlSelf->top__DOT__alu_result),32);
    bufp->fullIData(oldp+218,(vlSelf->top__DOT__src1),32);
    bufp->fullIData(oldp+219,(vlSelf->top__DOT__src2),32);
    bufp->fullBit(oldp+220,(vlSelf->top__DOT__clk_div2));
    bufp->fullBit(oldp+221,(vlSelf->top__DOT__clk_div3));
    bufp->fullBit(oldp+222,(vlSelf->top__DOT__clk_div4));
    bufp->fullIData(oldp+223,(vlSelf->top__DOT__franken_riscv__DOT__jump_add_Exec),32);
    bufp->fullIData(oldp+224,(((7U == (IData)(vlSelf->top__DOT__power_on_reset__DOT__q))
                                ? ((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_conditional_jump_Dec)
                                    ? vlSelf->top__DOT__franken_riscv__DOT__jump_add_Exec
                                    : ((IData)(vlSelf->top__DOT__franken_riscv__DOT__stall_Exec)
                                        ? vlSelf->top__DOT__pc
                                        : ((IData)(4U) 
                                           + vlSelf->top__DOT__pc)))
                                : 0U)),32);
    bufp->fullIData(oldp+225,(vlSelf->top__DOT__franken_riscv__DOT__src1_forward),32);
    bufp->fullIData(oldp+226,(vlSelf->top__DOT__franken_riscv__DOT__src2_forward),32);
    bufp->fullBit(oldp+227,(((0U != (IData)(vlSelf->top__DOT__RS1)) 
                             & ((vlSelf->__VdfgTmp_hc9ae597d__0 
                                 >> 0x1fU) & (IData)(vlSelf->top__DOT__franken_riscv__DOT__is_mulh)))));
    bufp->fullBit(oldp+228,(((0U != (IData)(vlSelf->top__DOT__RS2)) 
                             & ((vlSelf->__VdfgTmp_hcd850c4e__0 
                                 >> 0x1fU) & ((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_mulh) 
                                              | (IData)(vlSelf->top__DOT__franken_riscv__DOT__is_mulhsu))))));
    bufp->fullQData(oldp+229,((((QData)((IData)(((0U 
                                                  != (IData)(vlSelf->top__DOT__RS1)) 
                                                 & ((vlSelf->__VdfgTmp_hc9ae597d__0 
                                                     >> 0x1fU) 
                                                    & (IData)(vlSelf->top__DOT__franken_riscv__DOT__is_mulh))))) 
                                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__src1)))),33);
    bufp->fullQData(oldp+231,((((QData)((IData)(((0U 
                                                  != (IData)(vlSelf->top__DOT__RS2)) 
                                                 & ((vlSelf->__VdfgTmp_hcd850c4e__0 
                                                     >> 0x1fU) 
                                                    & ((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_mulh) 
                                                       | (IData)(vlSelf->top__DOT__franken_riscv__DOT__is_mulhsu)))))) 
                                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__src2)))),33);
    bufp->fullQData(oldp+233,(vlSelf->top__DOT__franken_riscv__DOT__result_mul),64);
    bufp->fullBit(oldp+235,((1U & (~ (IData)(vlSelf->clk)))));
}
