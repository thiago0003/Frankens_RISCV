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
    tracep->declBit(c+95,0,"CLOCK_50",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+96,0,"VGA_R",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+97,0,"VGA_G",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+98,0,"VGA_B",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+99,0,"VGA_HS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"VGA_VS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"VGA_CLK",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"VGA_BLANK_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"VGA_SYNC_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+117,0,"VGA_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+95,0,"CLOCK_50",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+96,0,"VGA_R",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+96,0,"VGA_G",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+96,0,"VGA_B",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+99,0,"VGA_HS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"VGA_VS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"VGA_CLK",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"VGA_BLANK_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"VGA_SYNC_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+104,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"addr_vga",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,0,"read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,0,"read_data_vga",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+88,0,"write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+47,0,"mem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+90,0,"byte_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1,0,"resetn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dmem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+91,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"mem_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+90,0,"byte_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+88,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"vaddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+109,0,"write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,0,"read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,0,"vdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"vdata_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("franken_riscv", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+95,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+104,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+47,0,"mem_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+90,0,"byte_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+89,0,"alu_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+88,0,"write_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,0,"read_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+92,0,"src1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"src2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"data_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+49,0,"is_conditional_jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+94,0,"jump_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+51,0,"rd_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+52,0,"funct3_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+53,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+54,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+55,0,"funct7_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+56,0,"R_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"I_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"S_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"B_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"U_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"J_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"RS1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+62,0,"RS2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+63,0,"RD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+64,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+65,0,"funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+66,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+67,0,"is_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"is_addi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"is_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"is_xor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"is_or",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"is_andi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"is_slli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"is_srli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"is_auipc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"is_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"is_lui",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"is_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"is_bge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"is_beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"is_blt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"is_bne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"is_sw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"is_lw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"is_sb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"is_lbu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"is_mem_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"reg_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("regs", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+113,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"reg_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"reg_addr1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+62,0,"reg_addr2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+63,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+114,0,"write_reg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+92,0,"rd1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"rd2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("rf", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+14+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("imem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+115,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+46,0,"instr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("power_on_reset", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+101,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"resetn",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("video", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+117,0,"VGA_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+101,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+107,0,"vdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"VGA_R",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+96,0,"VGA_G",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+96,0,"VGA_B",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+99,0,"VGA_HS_O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"VGA_VS_O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+105,0,"vaddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"CounterX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+5,0,"CounterY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+6,0,"inDisplayArea",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"inDisplayAreaPrev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"vga_HS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"vga_VS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"col",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,0,"vbyte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+12,0,"CounterXmaxed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"CounterYmaxed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
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
    bufp->fullIData(oldp+117,(8U),32);
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
    bufp->fullBit(oldp+1,((7U == (IData)(vlSelf->top__DOT__power_on_reset__DOT__q))));
    bufp->fullBit(oldp+2,((1U & (~ (IData)((7U == (IData)(vlSelf->top__DOT__power_on_reset__DOT__q)))))));
    bufp->fullCData(oldp+3,(vlSelf->top__DOT__power_on_reset__DOT__q),3);
    bufp->fullSData(oldp+4,(vlSelf->top__DOT__video__DOT__CounterX),10);
    bufp->fullSData(oldp+5,(vlSelf->top__DOT__video__DOT__CounterY),10);
    bufp->fullBit(oldp+6,(vlSelf->top__DOT__video__DOT__inDisplayArea));
    bufp->fullBit(oldp+7,(vlSelf->top__DOT__video__DOT__inDisplayAreaPrev));
    bufp->fullBit(oldp+8,(vlSelf->top__DOT__video__DOT__vga_HS));
    bufp->fullBit(oldp+9,(vlSelf->top__DOT__video__DOT__vga_VS));
    bufp->fullIData(oldp+10,(VL_SHIFTR_III(32,32,32, (IData)(vlSelf->top__DOT__video__DOT__CounterY), 4U)),32);
    bufp->fullIData(oldp+11,(VL_SHIFTR_III(32,32,32, (IData)(vlSelf->top__DOT__video__DOT__CounterX), 4U)),32);
    bufp->fullBit(oldp+12,((0x320U == (IData)(vlSelf->top__DOT__video__DOT__CounterX))));
    bufp->fullBit(oldp+13,((0x20dU == (IData)(vlSelf->top__DOT__video__DOT__CounterY))));
    bufp->fullIData(oldp+14,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[0]),32);
    bufp->fullIData(oldp+15,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[1]),32);
    bufp->fullIData(oldp+16,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[2]),32);
    bufp->fullIData(oldp+17,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[3]),32);
    bufp->fullIData(oldp+18,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[4]),32);
    bufp->fullIData(oldp+19,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[5]),32);
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[6]),32);
    bufp->fullIData(oldp+21,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[7]),32);
    bufp->fullIData(oldp+22,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[8]),32);
    bufp->fullIData(oldp+23,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[9]),32);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[10]),32);
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[11]),32);
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[12]),32);
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[13]),32);
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[14]),32);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[15]),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[16]),32);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[17]),32);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[18]),32);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[19]),32);
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[20]),32);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[21]),32);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[22]),32);
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[23]),32);
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[24]),32);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[25]),32);
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[26]),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[27]),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[28]),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[29]),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[30]),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[31]),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__instruction),32);
    bufp->fullBit(oldp+47,((0x23U == (0x7fU & vlSelf->top__DOT__instruction))));
    bufp->fullSData(oldp+48,((0x23U == (0x7fU & vlSelf->top__DOT__instruction))),9);
    bufp->fullBit(oldp+49,(((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_beq) 
                            | ((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_bne) 
                               | ((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_blt) 
                                  | ((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_bge) 
                                     | ((0x6fU == (0x7fU 
                                                   & vlSelf->top__DOT__instruction)) 
                                        | (IData)(vlSelf->top__DOT__franken_riscv__DOT__is_jalr))))))));
    bufp->fullCData(oldp+50,((0x7fU & vlSelf->top__DOT__instruction)),7);
    bufp->fullCData(oldp+51,((0x1fU & (vlSelf->top__DOT__instruction 
                                       >> 7U))),5);
    bufp->fullCData(oldp+52,((7U & (vlSelf->top__DOT__instruction 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+53,((0x1fU & (vlSelf->top__DOT__instruction 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+54,((0x1fU & (vlSelf->top__DOT__instruction 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+55,((vlSelf->top__DOT__instruction 
                              >> 0x19U)),7);
    bufp->fullBit(oldp+56,((0x33U == (0x7fU & vlSelf->top__DOT__instruction))));
    bufp->fullBit(oldp+57,(vlSelf->top__DOT__franken_riscv__DOT__I_type));
    bufp->fullBit(oldp+58,((0x63U == (0x7fU & vlSelf->top__DOT__instruction))));
    bufp->fullBit(oldp+59,(vlSelf->top__DOT__franken_riscv__DOT__U_type));
    bufp->fullBit(oldp+60,((0x6fU == (0x7fU & vlSelf->top__DOT__instruction))));
    bufp->fullCData(oldp+61,(vlSelf->top__DOT__franken_riscv__DOT__RS1),5);
    bufp->fullCData(oldp+62,(vlSelf->top__DOT__franken_riscv__DOT__RS2),5);
    bufp->fullCData(oldp+63,(vlSelf->top__DOT__franken_riscv__DOT__RD),5);
    bufp->fullCData(oldp+64,(vlSelf->top__DOT__franken_riscv__DOT__funct3),3);
    bufp->fullCData(oldp+65,(vlSelf->top__DOT__franken_riscv__DOT__funct7),7);
    bufp->fullIData(oldp+66,(vlSelf->top__DOT__franken_riscv__DOT__imm),32);
    bufp->fullBit(oldp+67,(((IData)(vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_h897b9696__0) 
                            & (0U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7)))));
    bufp->fullBit(oldp+68,(((0x13U == (0x7fU & vlSelf->top__DOT__instruction)) 
                            & (0U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)))));
    bufp->fullBit(oldp+69,(((IData)(vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_h897b9696__0) 
                            & (0x20U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7)))));
    bufp->fullBit(oldp+70,(((0x33U == (0x7fU & vlSelf->top__DOT__instruction)) 
                            & ((4U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                               & (0U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7))))));
    bufp->fullBit(oldp+71,(((0x33U == (0x7fU & vlSelf->top__DOT__instruction)) 
                            & ((6U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                               & (0U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7))))));
    bufp->fullBit(oldp+72,(((0x13U == (0x7fU & vlSelf->top__DOT__instruction)) 
                            & (7U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)))));
    bufp->fullBit(oldp+73,(((0x13U == (0x7fU & vlSelf->top__DOT__instruction)) 
                            & ((1U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                               & (0U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7))))));
    bufp->fullBit(oldp+74,(((0x13U == (0x7fU & vlSelf->top__DOT__instruction)) 
                            & ((5U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                               & (0U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7))))));
    bufp->fullBit(oldp+75,((0x17U == (0x7fU & vlSelf->top__DOT__instruction))));
    bufp->fullBit(oldp+76,((0x37U == (0x7fU & vlSelf->top__DOT__instruction))));
    bufp->fullBit(oldp+77,(vlSelf->top__DOT__franken_riscv__DOT__is_jalr));
    bufp->fullBit(oldp+78,(vlSelf->top__DOT__franken_riscv__DOT__is_bge));
    bufp->fullBit(oldp+79,(vlSelf->top__DOT__franken_riscv__DOT__is_beq));
    bufp->fullBit(oldp+80,(vlSelf->top__DOT__franken_riscv__DOT__is_blt));
    bufp->fullBit(oldp+81,(vlSelf->top__DOT__franken_riscv__DOT__is_bne));
    bufp->fullBit(oldp+82,(vlSelf->top__DOT__franken_riscv__DOT__is_sw));
    bufp->fullBit(oldp+83,(vlSelf->top__DOT__franken_riscv__DOT__is_lw));
    bufp->fullBit(oldp+84,(vlSelf->top__DOT__franken_riscv__DOT__is_sb));
    bufp->fullBit(oldp+85,(vlSelf->top__DOT__franken_riscv__DOT__is_lbu));
    bufp->fullBit(oldp+86,(((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_lw) 
                            | (IData)(vlSelf->top__DOT__franken_riscv__DOT__is_lbu))));
    bufp->fullBit(oldp+87,((((IData)(vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_hd86a4e63__0) 
                             | ((IData)(vlSelf->top__DOT__franken_riscv__DOT__I_type) 
                                | (IData)(vlSelf->top__DOT__franken_riscv__DOT__U_type))) 
                            & (0U != (IData)(vlSelf->top__DOT__franken_riscv__DOT__RD)))));
    bufp->fullIData(oldp+88,(vlSelf->top__DOT__write_data),32);
    bufp->fullIData(oldp+89,(vlSelf->top__DOT__alu_result),32);
    bufp->fullCData(oldp+90,(vlSelf->top__DOT__byte_enable),4);
    bufp->fullBit(oldp+91,(vlSelf->top__DOT____Vcellinp__dmem____pinNumber1));
    bufp->fullIData(oldp+92,(vlSelf->top__DOT__franken_riscv__DOT__src1),32);
    bufp->fullIData(oldp+93,(vlSelf->top__DOT__franken_riscv__DOT__src2),32);
    bufp->fullIData(oldp+94,(vlSelf->top__DOT__franken_riscv__DOT__jump_add),32);
    bufp->fullBit(oldp+95,(vlSelf->CLOCK_50));
    bufp->fullCData(oldp+96,(vlSelf->VGA_R),8);
    bufp->fullCData(oldp+97,(vlSelf->VGA_G),8);
    bufp->fullCData(oldp+98,(vlSelf->VGA_B),8);
    bufp->fullBit(oldp+99,(vlSelf->VGA_HS));
    bufp->fullBit(oldp+100,(vlSelf->VGA_VS));
    bufp->fullBit(oldp+101,(vlSelf->VGA_CLK));
    bufp->fullBit(oldp+102,(vlSelf->VGA_BLANK_N));
    bufp->fullBit(oldp+103,(vlSelf->VGA_SYNC_N));
    bufp->fullIData(oldp+104,(vlSelf->top__DOT__pc),32);
    bufp->fullIData(oldp+105,(vlSelf->top__DOT__addr_vga),32);
    bufp->fullIData(oldp+106,(vlSelf->top__DOT__read_data),32);
    bufp->fullIData(oldp+107,(vlSelf->top__DOT__read_data_vga),32);
    bufp->fullBit(oldp+108,((1U & vlSelf->top__DOT__addr_vga)));
    bufp->fullIData(oldp+109,(vlSelf->CLOCK_50),32);
    bufp->fullIData(oldp+110,((((0x23U == (0x7fU & vlSelf->top__DOT__instruction)) 
                                == (0x1ffU & vlSelf->top__DOT__write_data))
                                ? vlSelf->top__DOT__read_data
                                : vlSelf->top__DOT__dmem__DOT__RAM
                               [(0x1ffU & VL_SHIFTR_III(9,9,32, 
                                                        (0x23U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->top__DOT__instruction)), 2U))])),32);
    bufp->fullIData(oldp+111,(((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_lbu)
                                ? ((3U == (3U & vlSelf->top__DOT__alu_result))
                                    ? VL_SHIFTR_III(32,32,32, vlSelf->top__DOT__read_data, 0x18U)
                                    : ((2U == (3U & vlSelf->top__DOT__alu_result))
                                        ? (0xffU & 
                                           (vlSelf->top__DOT__read_data 
                                            >> 0x10U))
                                        : ((1U == (3U 
                                                   & vlSelf->top__DOT__alu_result))
                                            ? (0xffU 
                                               & (vlSelf->top__DOT__read_data 
                                                  >> 8U))
                                            : (0xffU 
                                               & vlSelf->top__DOT__read_data))))
                                : vlSelf->top__DOT__read_data)),32);
    bufp->fullIData(oldp+112,(((7U == (IData)(vlSelf->top__DOT__power_on_reset__DOT__q))
                                ? (((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_beq) 
                                    | ((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_bne) 
                                       | ((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_blt) 
                                          | ((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_bge) 
                                             | ((0x6fU 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->top__DOT__instruction)) 
                                                | (IData)(vlSelf->top__DOT__franken_riscv__DOT__is_jalr))))))
                                    ? vlSelf->top__DOT__franken_riscv__DOT__jump_add
                                    : ((IData)(4U) 
                                       + vlSelf->top__DOT__pc))
                                : 0U)),32);
    bufp->fullBit(oldp+113,((1U & (~ (IData)(vlSelf->CLOCK_50)))));
    bufp->fullIData(oldp+114,((((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_lw) 
                                | (IData)(vlSelf->top__DOT__franken_riscv__DOT__is_lbu))
                                ? ((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_lbu)
                                    ? ((3U == (3U & vlSelf->top__DOT__alu_result))
                                        ? VL_SHIFTR_III(32,32,32, vlSelf->top__DOT__read_data, 0x18U)
                                        : ((2U == (3U 
                                                   & vlSelf->top__DOT__alu_result))
                                            ? (0xffU 
                                               & (vlSelf->top__DOT__read_data 
                                                  >> 0x10U))
                                            : ((1U 
                                                == 
                                                (3U 
                                                 & vlSelf->top__DOT__alu_result))
                                                ? (0xffU 
                                                   & (vlSelf->top__DOT__read_data 
                                                      >> 8U))
                                                : (0xffU 
                                                   & vlSelf->top__DOT__read_data))))
                                    : vlSelf->top__DOT__read_data)
                                : vlSelf->top__DOT__alu_result)),32);
    bufp->fullSData(oldp+115,((0x1ffU & vlSelf->top__DOT__pc)),9);
    bufp->fullCData(oldp+116,((0xffU & ((0x20U & (IData)(vlSelf->top__DOT__video__DOT__CounterX))
                                         ? ((0x10U 
                                             & (IData)(vlSelf->top__DOT__video__DOT__CounterX))
                                             ? (vlSelf->top__DOT__read_data_vga 
                                                >> 0x18U)
                                             : (vlSelf->top__DOT__read_data_vga 
                                                >> 0x10U))
                                         : ((0x10U 
                                             & (IData)(vlSelf->top__DOT__video__DOT__CounterX))
                                             ? (vlSelf->top__DOT__read_data_vga 
                                                >> 8U)
                                             : vlSelf->top__DOT__read_data_vga)))),8);
}
