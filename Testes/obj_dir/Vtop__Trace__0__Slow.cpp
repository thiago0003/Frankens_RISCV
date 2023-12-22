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
    tracep->declBit(c+150,0,"sck1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"sda1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"cs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"dc1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"res1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+150,0,"sck1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"sda1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"cs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"dc1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"res1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"w_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"w_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"w_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"w_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"w_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"w_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"w_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+8,0,"w_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"w_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+10,0,"w_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"w_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+12,0,"w_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"w_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+14,0,"w_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+15,0,"w_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+16,0,"w_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17,0,"w_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"w_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+19,0,"w_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declArray(c+20,0,"w_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+24,0,"w_27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"w_28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+26,0,"w_29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+27,0,"w_30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+28,0,"w_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("blk107_39", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+156,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+155,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+157,0,"TICKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->popPrefix();
    tracep->pushPrefix("blk125_36", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+155,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"sinalA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+158,0,"sinalB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+158,0,"sinalC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+158,0,"sinalD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+28,0,"select",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+27,0,"muxOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("blk128_26", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+155,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"mudar",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+20,0,"strng",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+25,0,"sbyte",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+30,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+31,0,"verificao",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("blk132_38", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+26,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+28,0,"out_45",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("blk216_5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+159,0,"BYTE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+160,0,"ADDRESS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+161,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+162,0,"BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+160,0,"DATA_WIDTH_R",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"be",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+11,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+8,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"data_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("blk217_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+155,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"resetn",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("blk218_40", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+7,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"instr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("blk219_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+155,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"reg_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"reg_addr1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+14,0,"reg_addr2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+15,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+16,0,"write_reg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"rd1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"rd2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("rf", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+33+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("blk220_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+155,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+8,0,"mem_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"byte_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+10,0,"alu_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"write_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"read_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+12,0,"reg_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"RS1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+14,0,"RS2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+15,0,"RD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+16,0,"write_reg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"src1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"src2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"data_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+66,0,"is_conditional_jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"jump_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+70,0,"rd_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+71,0,"funct3_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+72,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+73,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+74,0,"funct7_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+75,0,"R_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"is_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"is_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"is_xor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"is_or",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"is_and",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"is_sltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"is_sll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"is_slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"is_srl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"is_sra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"I_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"is_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"is_lb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"is_lh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"is_lw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"is_lbu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"is_lhu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"is_addi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"is_slti",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"is_sltiu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"is_xori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"is_ori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"is_andi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"is_slli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"is_srli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"is_srai",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"S_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
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
    tracep->declBit(c+117,0,"ecall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"ebreak",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+119,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+120,0,"funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+121,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+122,0,"is_mem_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+163,0,"FETCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+164,0,"DECODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+165,0,"MEMADR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+166,0,"MEMRD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+167,0,"MEMWB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+168,0,"MEMWR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+169,0,"RTYPEEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+170,0,"ITYPEEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+171,0,"JEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+172,0,"ALUWB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+173,0,"BEQX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+123,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+124,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("blk221_25", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+155,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"RD1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"RD2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+20,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+125,0,"hex_code",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+69,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+70,0,"rd_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+71,0,"funct3_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+72,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+73,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+74,0,"funct7_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+129,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+120,0,"funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+75,0,"R_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"I_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"S_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"B_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"U_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"J_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("blk28_27", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+26,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+24,0,"out_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"out_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"out_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"out_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"out_4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"out_5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"out_6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"out_7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("blk5_21", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+17,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("blk85_7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+175,0,"STARTUP_WAIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+155,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"ioSclk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"ioSdin",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"ioCs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"ioDc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"ioReset",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"pixelAddress",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+18,0,"pixelData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+176,0,"STATE_INIT_POWER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+177,0,"STATE_LOAD_INIT_CMD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+178,0,"STATE_SEND",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+179,0,"STATE_CHECK_FINISHED_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+180,0,"STATE_LOAD_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+181,0,"STATE_START",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+135,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+137,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+138,0,"dc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"sclk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"sdin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"cs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+143,0,"dataToSend",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+144,0,"bitNumber",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+19,0,"pixelCounter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+182,0,"SETUP_INSTRUCTIONS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+183,0,"startupCommands",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 183,0);
    tracep->declBus(c+145,0,"commandIndex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("blk86_28", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+155,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"pixelAddress",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+27,0,"charOutput",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+18,0,"pixelData",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+146,0,"charAddress",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+147,0,"columnAddress",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+148,0,"topRow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"outputBuffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+149,0,"chosenChar",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
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
    VlWide<6>/*191:0*/ __Vtemp_1;
    // Body
    bufp->fullIData(oldp+156,(0x1f4U),32);
    bufp->fullIData(oldp+157,(0x66ff30U),32);
    bufp->fullCData(oldp+158,(0x20U),8);
    bufp->fullIData(oldp+159,(8U),32);
    bufp->fullIData(oldp+160,(0x20U),32);
    bufp->fullIData(oldp+161,(0x4b0U),32);
    bufp->fullIData(oldp+162,(4U),32);
    bufp->fullCData(oldp+163,(0U),4);
    bufp->fullCData(oldp+164,(1U),4);
    bufp->fullCData(oldp+165,(2U),4);
    bufp->fullCData(oldp+166,(3U),4);
    bufp->fullCData(oldp+167,(4U),4);
    bufp->fullCData(oldp+168,(5U),4);
    bufp->fullCData(oldp+169,(6U),4);
    bufp->fullCData(oldp+170,(7U),4);
    bufp->fullCData(oldp+171,(8U),4);
    bufp->fullCData(oldp+172,(9U),4);
    bufp->fullCData(oldp+173,(0xaU),4);
    bufp->fullBit(oldp+174,(0U));
    bufp->fullIData(oldp+175,(0x989680U),32);
    bufp->fullCData(oldp+176,(0U),3);
    bufp->fullCData(oldp+177,(1U),3);
    bufp->fullCData(oldp+178,(2U),3);
    bufp->fullCData(oldp+179,(3U),3);
    bufp->fullCData(oldp+180,(4U),3);
    bufp->fullCData(oldp+181,(7U),3);
    bufp->fullIData(oldp+182,(0x17U),32);
    __Vtemp_1[0U] = 0x8d14a4afU;
    __Vtemp_1[1U] = 0xd922db20U;
    __Vtemp_1[2U] = 0xd300d580U;
    __Vtemp_1[3U] = 0x40a1a83fU;
    __Vtemp_1[4U] = 0xa62000c8U;
    __Vtemp_1[5U] = 0xae817fU;
    bufp->fullWData(oldp+183,(__Vtemp_1),184);
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
    bufp->fullBit(oldp+1,(vlSelf->top__DOT__w_1));
    bufp->fullBit(oldp+2,((1U & (~ (IData)((7U == (IData)(vlSelf->top__DOT__blk217_4__DOT__q)))))));
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__w_3),32);
    bufp->fullIData(oldp+4,(vlSelf->top__DOT__blk216_5__DOT__data_reg),32);
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__w_5),32);
    bufp->fullIData(oldp+6,(vlSelf->top__DOT__w_6),32);
    bufp->fullIData(oldp+7,(vlSelf->top__DOT__w_7),32);
    bufp->fullBit(oldp+8,((0x23U == (0x7fU & vlSelf->top__DOT__w_3))));
    bufp->fullCData(oldp+9,(vlSelf->top__DOT__w_9),4);
    bufp->fullIData(oldp+10,(vlSelf->top__DOT__w_10),32);
    bufp->fullIData(oldp+11,(vlSelf->top__DOT__w_11),32);
    bufp->fullBit(oldp+12,((((IData)(vlSelf->top__DOT__blk220_1__DOT____VdfgTmp_hd86a4e63__0) 
                             | ((IData)(vlSelf->top__DOT__blk220_1__DOT__I_type) 
                                | (IData)(vlSelf->top__DOT__blk220_1__DOT__U_type))) 
                            & (0U != (IData)(vlSelf->top__DOT__w_15)))));
    bufp->fullCData(oldp+13,(vlSelf->top__DOT__w_13),5);
    bufp->fullCData(oldp+14,(vlSelf->top__DOT__w_14),5);
    bufp->fullCData(oldp+15,(vlSelf->top__DOT__w_15),5);
    bufp->fullIData(oldp+16,((((IData)(vlSelf->top__DOT__blk220_1__DOT__is_lw) 
                               | ((IData)(vlSelf->top__DOT__blk220_1__DOT__is_lbu) 
                                  | ((IData)(vlSelf->top__DOT__blk220_1__DOT__is_lb) 
                                     | ((IData)(vlSelf->top__DOT__blk220_1__DOT__is_lh) 
                                        | (IData)(vlSelf->top__DOT__blk220_1__DOT__is_lhu)))))
                               ? ((IData)(vlSelf->top__DOT__blk220_1__DOT__is_lbu)
                                   ? vlSelf->top__DOT__blk220_1__DOT____VdfgTmp_hecc7b86e__0
                                   : ((IData)(vlSelf->top__DOT__blk220_1__DOT__is_lb)
                                       ? vlSelf->top__DOT__blk220_1__DOT____VdfgTmp_hecc7b86e__0
                                       : ((IData)(vlSelf->top__DOT__blk220_1__DOT__is_lh)
                                           ? ((2U == 
                                               (3U 
                                                & vlSelf->top__DOT__w_10))
                                               ? ((
                                                   (- (IData)(
                                                              (vlSelf->top__DOT__blk216_5__DOT__data_reg 
                                                               >> 0x1fU))) 
                                                   << 0x10U) 
                                                  | (vlSelf->top__DOT__blk216_5__DOT__data_reg 
                                                     >> 0x10U))
                                               : ((
                                                   (- (IData)(
                                                              (vlSelf->top__DOT__blk216_5__DOT__data_reg 
                                                               >> 0x1fU))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & vlSelf->top__DOT__blk216_5__DOT__data_reg)))
                                           : ((IData)(vlSelf->top__DOT__blk220_1__DOT__is_lhu)
                                               ? ((2U 
                                                   == 
                                                   (3U 
                                                    & vlSelf->top__DOT__w_10))
                                                   ? 
                                                  VL_SHIFTR_III(32,32,32, vlSelf->top__DOT__blk216_5__DOT__data_reg, 0x10U)
                                                   : 
                                                  (0xffffU 
                                                   & vlSelf->top__DOT__blk216_5__DOT__data_reg))
                                               : vlSelf->top__DOT__blk216_5__DOT__data_reg))))
                               : vlSelf->top__DOT__w_10)),32);
    bufp->fullBit(oldp+17,((7U == (IData)(vlSelf->top__DOT__blk217_4__DOT__q))));
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__blk86_28__DOT__outputBuffer),8);
    bufp->fullSData(oldp+19,(vlSelf->top__DOT__blk85_7__DOT__pixelCounter),10);
    bufp->fullWData(oldp+20,(vlSelf->top__DOT__w_26),128);
    bufp->fullBit(oldp+24,((1U & ((IData)(vlSelf->top__DOT__blk85_7__DOT__pixelCounter) 
                                  >> 3U))));
    bufp->fullCData(oldp+25,(vlSelf->top__DOT__w_28),8);
    bufp->fullCData(oldp+26,(((0x30U & ((IData)(vlSelf->top__DOT__blk85_7__DOT__pixelCounter) 
                                        >> 4U)) | (0xfU 
                                                   & ((IData)(vlSelf->top__DOT__blk85_7__DOT__pixelCounter) 
                                                      >> 3U)))),8);
    bufp->fullCData(oldp+27,(vlSelf->top__DOT__w_30),8);
    bufp->fullCData(oldp+28,((3U & ((IData)(vlSelf->top__DOT__blk85_7__DOT__pixelCounter) 
                                    >> 8U))),2);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__blk107_39__DOT__counter),27);
    bufp->fullCData(oldp+30,(vlSelf->top__DOT__blk128_26__DOT__count),4);
    bufp->fullBit(oldp+31,(vlSelf->top__DOT__blk128_26__DOT__verificao));
    bufp->fullCData(oldp+32,(vlSelf->top__DOT__blk217_4__DOT__q),3);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__blk219_2__DOT__rf[0]),32);
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__blk219_2__DOT__rf[1]),32);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__blk219_2__DOT__rf[2]),32);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__blk219_2__DOT__rf[3]),32);
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__blk219_2__DOT__rf[4]),32);
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__blk219_2__DOT__rf[5]),32);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__blk219_2__DOT__rf[6]),32);
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__blk219_2__DOT__rf[7]),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__blk219_2__DOT__rf[8]),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__blk219_2__DOT__rf[9]),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__blk219_2__DOT__rf[10]),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__blk219_2__DOT__rf[11]),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__blk219_2__DOT__rf[12]),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__blk219_2__DOT__rf[13]),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__blk219_2__DOT__rf[14]),32);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__blk219_2__DOT__rf[15]),32);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__blk219_2__DOT__rf[16]),32);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__blk219_2__DOT__rf[17]),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__blk219_2__DOT__rf[18]),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__blk219_2__DOT__rf[19]),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__blk219_2__DOT__rf[20]),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__blk219_2__DOT__rf[21]),32);
    bufp->fullIData(oldp+55,(vlSelf->top__DOT__blk219_2__DOT__rf[22]),32);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__blk219_2__DOT__rf[23]),32);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__blk219_2__DOT__rf[24]),32);
    bufp->fullIData(oldp+58,(vlSelf->top__DOT__blk219_2__DOT__rf[25]),32);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__blk219_2__DOT__rf[26]),32);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__blk219_2__DOT__rf[27]),32);
    bufp->fullIData(oldp+61,(vlSelf->top__DOT__blk219_2__DOT__rf[28]),32);
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__blk219_2__DOT__rf[29]),32);
    bufp->fullIData(oldp+63,(vlSelf->top__DOT__blk219_2__DOT__rf[30]),32);
    bufp->fullIData(oldp+64,(vlSelf->top__DOT__blk219_2__DOT__rf[31]),32);
    bufp->fullIData(oldp+65,(((IData)(vlSelf->top__DOT__blk220_1__DOT__is_lbu)
                               ? vlSelf->top__DOT__blk220_1__DOT____VdfgTmp_hecc7b86e__0
                               : ((IData)(vlSelf->top__DOT__blk220_1__DOT__is_lb)
                                   ? vlSelf->top__DOT__blk220_1__DOT____VdfgTmp_hecc7b86e__0
                                   : ((IData)(vlSelf->top__DOT__blk220_1__DOT__is_lh)
                                       ? ((2U == (3U 
                                                  & vlSelf->top__DOT__w_10))
                                           ? (((- (IData)(
                                                          (vlSelf->top__DOT__blk216_5__DOT__data_reg 
                                                           >> 0x1fU))) 
                                               << 0x10U) 
                                              | (vlSelf->top__DOT__blk216_5__DOT__data_reg 
                                                 >> 0x10U))
                                           : (((- (IData)(
                                                          (vlSelf->top__DOT__blk216_5__DOT__data_reg 
                                                           >> 0x1fU))) 
                                               << 0x10U) 
                                              | (0xffffU 
                                                 & vlSelf->top__DOT__blk216_5__DOT__data_reg)))
                                       : ((IData)(vlSelf->top__DOT__blk220_1__DOT__is_lhu)
                                           ? ((2U == 
                                               (3U 
                                                & vlSelf->top__DOT__w_10))
                                               ? VL_SHIFTR_III(32,32,32, vlSelf->top__DOT__blk216_5__DOT__data_reg, 0x10U)
                                               : (0xffffU 
                                                  & vlSelf->top__DOT__blk216_5__DOT__data_reg))
                                           : vlSelf->top__DOT__blk216_5__DOT__data_reg))))),32);
    bufp->fullBit(oldp+66,(((IData)(vlSelf->top__DOT__blk220_1__DOT__is_beq) 
                            | ((IData)(vlSelf->top__DOT__blk220_1__DOT__is_bne) 
                               | ((IData)(vlSelf->top__DOT__blk220_1__DOT__is_blt) 
                                  | ((IData)(vlSelf->top__DOT__blk220_1__DOT__is_bge) 
                                     | ((0x6fU == (0x7fU 
                                                   & vlSelf->top__DOT__w_3)) 
                                        | (IData)(vlSelf->top__DOT__blk220_1__DOT__is_jalr))))))));
    bufp->fullIData(oldp+67,(vlSelf->top__DOT__blk220_1__DOT__jump_add),32);
    bufp->fullIData(oldp+68,(((7U == (IData)(vlSelf->top__DOT__blk217_4__DOT__q))
                               ? (((IData)(vlSelf->top__DOT__blk220_1__DOT__is_beq) 
                                   | ((IData)(vlSelf->top__DOT__blk220_1__DOT__is_bne) 
                                      | ((IData)(vlSelf->top__DOT__blk220_1__DOT__is_blt) 
                                         | ((IData)(vlSelf->top__DOT__blk220_1__DOT__is_bge) 
                                            | ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->top__DOT__w_3)) 
                                               | (IData)(vlSelf->top__DOT__blk220_1__DOT__is_jalr))))))
                                   ? vlSelf->top__DOT__blk220_1__DOT__jump_add
                                   : ((IData)(4U) + vlSelf->top__DOT__w_7))
                               : 0U)),32);
    bufp->fullCData(oldp+69,((0x7fU & vlSelf->top__DOT__w_3)),7);
    bufp->fullCData(oldp+70,((0x1fU & (vlSelf->top__DOT__w_3 
                                       >> 7U))),5);
    bufp->fullCData(oldp+71,((7U & (vlSelf->top__DOT__w_3 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+72,((0x1fU & (vlSelf->top__DOT__w_3 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+73,((0x1fU & (vlSelf->top__DOT__w_3 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+74,((vlSelf->top__DOT__w_3 
                              >> 0x19U)),7);
    bufp->fullBit(oldp+75,((0x33U == (0x7fU & vlSelf->top__DOT__w_3))));
    bufp->fullBit(oldp+76,(((IData)(vlSelf->top__DOT__blk220_1__DOT____VdfgTmp_h897b9696__0) 
                            & (0U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct7)))));
    bufp->fullBit(oldp+77,(((IData)(vlSelf->top__DOT__blk220_1__DOT____VdfgTmp_h897b9696__0) 
                            & (0x20U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct7)))));
    bufp->fullBit(oldp+78,(((0x33U == (0x7fU & vlSelf->top__DOT__w_3)) 
                            & ((4U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)) 
                               & (0U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct7))))));
    bufp->fullBit(oldp+79,(((0x33U == (0x7fU & vlSelf->top__DOT__w_3)) 
                            & ((6U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)) 
                               & (0U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct7))))));
    bufp->fullBit(oldp+80,(((0x33U == (0x7fU & vlSelf->top__DOT__w_3)) 
                            & ((7U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)) 
                               & (0U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct7))))));
    bufp->fullBit(oldp+81,(((0x33U == (0x7fU & vlSelf->top__DOT__w_3)) 
                            & ((3U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)) 
                               & (0U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct7))))));
    bufp->fullBit(oldp+82,(((0x33U == (0x7fU & vlSelf->top__DOT__w_3)) 
                            & ((1U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)) 
                               & (0U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct7))))));
    bufp->fullBit(oldp+83,(((0x33U == (0x7fU & vlSelf->top__DOT__w_3)) 
                            & ((2U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)) 
                               & (0U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct7))))));
    bufp->fullBit(oldp+84,(((IData)(vlSelf->top__DOT__blk220_1__DOT____VdfgTmp_h4304dc3a__0) 
                            & (0U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct7)))));
    bufp->fullBit(oldp+85,(((IData)(vlSelf->top__DOT__blk220_1__DOT____VdfgTmp_h4304dc3a__0) 
                            & (0x20U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct7)))));
    bufp->fullBit(oldp+86,(vlSelf->top__DOT__blk220_1__DOT__I_type));
    bufp->fullBit(oldp+87,(vlSelf->top__DOT__blk220_1__DOT__is_jalr));
    bufp->fullBit(oldp+88,(vlSelf->top__DOT__blk220_1__DOT__is_lb));
    bufp->fullBit(oldp+89,(vlSelf->top__DOT__blk220_1__DOT__is_lh));
    bufp->fullBit(oldp+90,(vlSelf->top__DOT__blk220_1__DOT__is_lw));
    bufp->fullBit(oldp+91,(vlSelf->top__DOT__blk220_1__DOT__is_lbu));
    bufp->fullBit(oldp+92,(vlSelf->top__DOT__blk220_1__DOT__is_lhu));
    bufp->fullBit(oldp+93,(((0U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)) 
                            & (0x13U == (0x7fU & vlSelf->top__DOT__w_3)))));
    bufp->fullBit(oldp+94,(((2U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)) 
                            & (0x13U == (0x7fU & vlSelf->top__DOT__w_3)))));
    bufp->fullBit(oldp+95,(((3U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)) 
                            & (0x13U == (0x7fU & vlSelf->top__DOT__w_3)))));
    bufp->fullBit(oldp+96,(((4U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)) 
                            & (0x13U == (0x7fU & vlSelf->top__DOT__w_3)))));
    bufp->fullBit(oldp+97,(((6U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)) 
                            & (0x13U == (0x7fU & vlSelf->top__DOT__w_3)))));
    bufp->fullBit(oldp+98,(((7U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)) 
                            & (0x13U == (0x7fU & vlSelf->top__DOT__w_3)))));
    bufp->fullBit(oldp+99,(((1U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)) 
                            & (IData)(vlSelf->top__DOT__blk221_25__DOT____VdfgTmp_hdf511576__0))));
    bufp->fullBit(oldp+100,(((5U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)) 
                             & (IData)(vlSelf->top__DOT__blk221_25__DOT____VdfgTmp_hdf511576__0))));
    bufp->fullBit(oldp+101,(((5U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)) 
                             & (IData)(vlSelf->__VdfgTmp_hb17978b1__0))));
    bufp->fullBit(oldp+102,(vlSelf->top__DOT__blk220_1__DOT__is_sw));
    bufp->fullBit(oldp+103,(vlSelf->top__DOT__blk220_1__DOT__is_sb));
    bufp->fullBit(oldp+104,(vlSelf->top__DOT__blk220_1__DOT__is_sh));
    bufp->fullBit(oldp+105,((0x63U == (0x7fU & vlSelf->top__DOT__w_3))));
    bufp->fullBit(oldp+106,(vlSelf->top__DOT__blk220_1__DOT__is_bge));
    bufp->fullBit(oldp+107,(vlSelf->top__DOT__blk220_1__DOT__is_beq));
    bufp->fullBit(oldp+108,(vlSelf->top__DOT__blk220_1__DOT__is_blt));
    bufp->fullBit(oldp+109,(vlSelf->top__DOT__blk220_1__DOT__is_bne));
    bufp->fullBit(oldp+110,(((0x63U == (0x7fU & vlSelf->top__DOT__w_3)) 
                             & (6U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)))));
    bufp->fullBit(oldp+111,(((0x63U == (0x7fU & vlSelf->top__DOT__w_3)) 
                             & (7U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)))));
    bufp->fullBit(oldp+112,(vlSelf->top__DOT__blk220_1__DOT__U_type));
    bufp->fullBit(oldp+113,((0x17U == (0x7fU & vlSelf->top__DOT__w_3))));
    bufp->fullBit(oldp+114,((0x37U == (0x7fU & vlSelf->top__DOT__w_3))));
    bufp->fullBit(oldp+115,((0x6fU == (0x7fU & vlSelf->top__DOT__w_3))));
    bufp->fullBit(oldp+116,(((0xfU == (0x7fU & vlSelf->top__DOT__w_3)) 
                             & (0U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)))));
    bufp->fullBit(oldp+117,(((IData)(vlSelf->top__DOT__blk220_1__DOT____VdfgTmp_h760cc816__0) 
                             & (0U == (vlSelf->top__DOT__w_3 
                                       >> 0x19U)))));
    bufp->fullBit(oldp+118,(((IData)(vlSelf->top__DOT__blk220_1__DOT____VdfgTmp_h760cc816__0) 
                             & (1U == (vlSelf->top__DOT__w_3 
                                       >> 0x19U)))));
    bufp->fullCData(oldp+119,(vlSelf->top__DOT__blk220_1__DOT__funct3),3);
    bufp->fullCData(oldp+120,(vlSelf->top__DOT__blk220_1__DOT__funct7),7);
    bufp->fullIData(oldp+121,(vlSelf->top__DOT__blk220_1__DOT__imm),32);
    bufp->fullBit(oldp+122,(((IData)(vlSelf->top__DOT__blk220_1__DOT__is_lw) 
                             | ((IData)(vlSelf->top__DOT__blk220_1__DOT__is_lbu) 
                                | ((IData)(vlSelf->top__DOT__blk220_1__DOT__is_lb) 
                                   | ((IData)(vlSelf->top__DOT__blk220_1__DOT__is_lh) 
                                      | (IData)(vlSelf->top__DOT__blk220_1__DOT__is_lhu)))))));
    bufp->fullCData(oldp+123,(vlSelf->top__DOT__blk220_1__DOT__current_state),4);
    bufp->fullCData(oldp+124,(((0U == (IData)(vlSelf->top__DOT__blk220_1__DOT__current_state))
                                ? 1U : ((((IData)(vlSelf->top__DOT__blk220_1__DOT__is_lw) 
                                          | (IData)(vlSelf->top__DOT__blk220_1__DOT__is_sw)) 
                                         & (1U == (IData)(vlSelf->top__DOT__blk220_1__DOT__current_state)))
                                         ? 2U : (((0x33U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->top__DOT__w_3)) 
                                                  & (1U 
                                                     == (IData)(vlSelf->top__DOT__blk220_1__DOT__current_state)))
                                                  ? 6U
                                                  : 
                                                 (((IData)(vlSelf->top__DOT__blk220_1__DOT__I_type) 
                                                   & (1U 
                                                      == (IData)(vlSelf->top__DOT__blk220_1__DOT__current_state)))
                                                   ? 7U
                                                   : 0U))))),4);
    bufp->fullWData(oldp+125,(vlSelf->top__DOT__blk221_25__DOT__hex_code),128);
    bufp->fullCData(oldp+129,(vlSelf->top__DOT__blk221_25__DOT__funct3),3);
    bufp->fullBit(oldp+130,((1U & ((IData)(vlSelf->top__DOT__blk85_7__DOT__pixelCounter) 
                                   >> 4U))));
    bufp->fullBit(oldp+131,((1U & ((IData)(vlSelf->top__DOT__blk85_7__DOT__pixelCounter) 
                                   >> 5U))));
    bufp->fullBit(oldp+132,((1U & ((IData)(vlSelf->top__DOT__blk85_7__DOT__pixelCounter) 
                                   >> 6U))));
    bufp->fullBit(oldp+133,((1U & ((IData)(vlSelf->top__DOT__blk85_7__DOT__pixelCounter) 
                                   >> 8U))));
    bufp->fullBit(oldp+134,((1U & ((IData)(vlSelf->top__DOT__blk85_7__DOT__pixelCounter) 
                                   >> 9U))));
    bufp->fullQData(oldp+135,(vlSelf->top__DOT__blk85_7__DOT__counter),33);
    bufp->fullCData(oldp+137,(vlSelf->top__DOT__blk85_7__DOT__state),3);
    bufp->fullBit(oldp+138,(vlSelf->top__DOT__blk85_7__DOT__dc));
    bufp->fullBit(oldp+139,(vlSelf->top__DOT__blk85_7__DOT__sclk));
    bufp->fullBit(oldp+140,(vlSelf->top__DOT__blk85_7__DOT__sdin));
    bufp->fullBit(oldp+141,(vlSelf->top__DOT__blk85_7__DOT__reset));
    bufp->fullBit(oldp+142,(vlSelf->top__DOT__blk85_7__DOT__cs));
    bufp->fullCData(oldp+143,(vlSelf->top__DOT__blk85_7__DOT__dataToSend),8);
    bufp->fullCData(oldp+144,(vlSelf->top__DOT__blk85_7__DOT__bitNumber),3);
    bufp->fullCData(oldp+145,(vlSelf->top__DOT__blk85_7__DOT__commandIndex),8);
    bufp->fullCData(oldp+146,(((0x30U & ((IData)(vlSelf->top__DOT__blk85_7__DOT__pixelCounter) 
                                         >> 4U)) | 
                               (0xfU & ((IData)(vlSelf->top__DOT__blk85_7__DOT__pixelCounter) 
                                        >> 3U)))),6);
    bufp->fullCData(oldp+147,((7U & (IData)(vlSelf->top__DOT__blk85_7__DOT__pixelCounter))),3);
    bufp->fullBit(oldp+148,((1U & (~ ((IData)(vlSelf->top__DOT__blk85_7__DOT__pixelCounter) 
                                      >> 7U)))));
    bufp->fullCData(oldp+149,(vlSelf->top__DOT__blk86_28__DOT__chosenChar),8);
    bufp->fullBit(oldp+150,(vlSelf->sck1));
    bufp->fullBit(oldp+151,(vlSelf->sda1));
    bufp->fullBit(oldp+152,(vlSelf->cs1));
    bufp->fullBit(oldp+153,(vlSelf->dc1));
    bufp->fullBit(oldp+154,(vlSelf->res1));
    bufp->fullBit(oldp+155,(vlSelf->clk));
}
