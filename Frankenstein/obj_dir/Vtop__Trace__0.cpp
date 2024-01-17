// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->top__DOT__clk_div1));
        bufp->chgBit(oldp+1,((7U == (IData)(vlSelf->top__DOT__power_on_reset__DOT__q))));
        bufp->chgBit(oldp+2,((1U & (~ (IData)((7U == (IData)(vlSelf->top__DOT__power_on_reset__DOT__q)))))));
        bufp->chgCData(oldp+3,(vlSelf->top__DOT__power_on_reset__DOT__q),3);
        bufp->chgIData(oldp+4,(vlSelf->top__DOT__regs__DOT__rf[0]),32);
        bufp->chgIData(oldp+5,(vlSelf->top__DOT__regs__DOT__rf[1]),32);
        bufp->chgIData(oldp+6,(vlSelf->top__DOT__regs__DOT__rf[2]),32);
        bufp->chgIData(oldp+7,(vlSelf->top__DOT__regs__DOT__rf[3]),32);
        bufp->chgIData(oldp+8,(vlSelf->top__DOT__regs__DOT__rf[4]),32);
        bufp->chgIData(oldp+9,(vlSelf->top__DOT__regs__DOT__rf[5]),32);
        bufp->chgIData(oldp+10,(vlSelf->top__DOT__regs__DOT__rf[6]),32);
        bufp->chgIData(oldp+11,(vlSelf->top__DOT__regs__DOT__rf[7]),32);
        bufp->chgIData(oldp+12,(vlSelf->top__DOT__regs__DOT__rf[8]),32);
        bufp->chgIData(oldp+13,(vlSelf->top__DOT__regs__DOT__rf[9]),32);
        bufp->chgIData(oldp+14,(vlSelf->top__DOT__regs__DOT__rf[10]),32);
        bufp->chgIData(oldp+15,(vlSelf->top__DOT__regs__DOT__rf[11]),32);
        bufp->chgIData(oldp+16,(vlSelf->top__DOT__regs__DOT__rf[12]),32);
        bufp->chgIData(oldp+17,(vlSelf->top__DOT__regs__DOT__rf[13]),32);
        bufp->chgIData(oldp+18,(vlSelf->top__DOT__regs__DOT__rf[14]),32);
        bufp->chgIData(oldp+19,(vlSelf->top__DOT__regs__DOT__rf[15]),32);
        bufp->chgIData(oldp+20,(vlSelf->top__DOT__regs__DOT__rf[16]),32);
        bufp->chgIData(oldp+21,(vlSelf->top__DOT__regs__DOT__rf[17]),32);
        bufp->chgIData(oldp+22,(vlSelf->top__DOT__regs__DOT__rf[18]),32);
        bufp->chgIData(oldp+23,(vlSelf->top__DOT__regs__DOT__rf[19]),32);
        bufp->chgIData(oldp+24,(vlSelf->top__DOT__regs__DOT__rf[20]),32);
        bufp->chgIData(oldp+25,(vlSelf->top__DOT__regs__DOT__rf[21]),32);
        bufp->chgIData(oldp+26,(vlSelf->top__DOT__regs__DOT__rf[22]),32);
        bufp->chgIData(oldp+27,(vlSelf->top__DOT__regs__DOT__rf[23]),32);
        bufp->chgIData(oldp+28,(vlSelf->top__DOT__regs__DOT__rf[24]),32);
        bufp->chgIData(oldp+29,(vlSelf->top__DOT__regs__DOT__rf[25]),32);
        bufp->chgIData(oldp+30,(vlSelf->top__DOT__regs__DOT__rf[26]),32);
        bufp->chgIData(oldp+31,(vlSelf->top__DOT__regs__DOT__rf[27]),32);
        bufp->chgIData(oldp+32,(vlSelf->top__DOT__regs__DOT__rf[28]),32);
        bufp->chgIData(oldp+33,(vlSelf->top__DOT__regs__DOT__rf[29]),32);
        bufp->chgIData(oldp+34,(vlSelf->top__DOT__regs__DOT__rf[30]),32);
        bufp->chgIData(oldp+35,(vlSelf->top__DOT__regs__DOT__rf[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+36,(vlSelf->top__DOT__write_data),32);
        bufp->chgBit(oldp+37,(vlSelf->top__DOT__mem_write));
        bufp->chgCData(oldp+38,(vlSelf->top__DOT__byte_enable),4);
        bufp->chgCData(oldp+39,(vlSelf->top__DOT__RS1),5);
        bufp->chgCData(oldp+40,(vlSelf->top__DOT__RS2),5);
        bufp->chgIData(oldp+41,(vlSelf->top__DOT__RS1),32);
        bufp->chgIData(oldp+42,(vlSelf->top__DOT__RS2),32);
        bufp->chgCData(oldp+43,(((IData)(vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_he778bdb7__0)
                                  ? (0xfU & (IData)(vlSelf->top__DOT__franken_riscv__DOT__rs1))
                                  : 0U)),4);
        bufp->chgCData(oldp+44,(((IData)(vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_he778bdb7__0) 
                                 & ((IData)(vlSelf->top__DOT__franken_riscv__DOT__rs1) 
                                    >> 4U))),4);
        bufp->chgCData(oldp+45,(((IData)(vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_hf167f6a7__0)
                                  ? (0xfU & (IData)(vlSelf->top__DOT__franken_riscv__DOT__rs2))
                                  : 0U)),4);
        bufp->chgCData(oldp+46,(((IData)(vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_hf167f6a7__0) 
                                 & ((IData)(vlSelf->top__DOT__franken_riscv__DOT__rs2) 
                                    >> 4U))),4);
        bufp->chgBit(oldp+47,(vlSelf->top__DOT__franken_riscv__DOT__mem_read_Mem));
        bufp->chgBit(oldp+48,(vlSelf->top__DOT__franken_riscv__DOT__reg_write_Mem));
        bufp->chgIData(oldp+49,(vlSelf->top__DOT__franken_riscv__DOT__alu_result_Mem),32);
        bufp->chgIData(oldp+50,(vlSelf->top__DOT__franken_riscv__DOT__data_load),32);
        bufp->chgCData(oldp+51,(vlSelf->top__DOT__franken_riscv__DOT__RD_Mem),5);
        bufp->chgCData(oldp+52,(vlSelf->top__DOT__franken_riscv__DOT__funct7_),7);
        bufp->chgCData(oldp+53,(vlSelf->top__DOT__franken_riscv__DOT__opcode),7);
        bufp->chgCData(oldp+54,(vlSelf->top__DOT__franken_riscv__DOT__rd_),5);
        bufp->chgCData(oldp+55,(vlSelf->top__DOT__franken_riscv__DOT__rs1),5);
        bufp->chgCData(oldp+56,(vlSelf->top__DOT__franken_riscv__DOT__rs2),5);
        bufp->chgCData(oldp+57,(vlSelf->top__DOT__franken_riscv__DOT__funct3_),3);
        bufp->chgIData(oldp+58,(vlSelf->top__DOT__franken_riscv__DOT__imm),32);
        bufp->chgIData(oldp+59,(vlSelf->top__DOT__franken_riscv__DOT__pc_dec),32);
        bufp->chgCData(oldp+60,(vlSelf->top__DOT__franken_riscv__DOT__Fwd_A),2);
        bufp->chgCData(oldp+61,(vlSelf->top__DOT__franken_riscv__DOT__Fwd_B),2);
        bufp->chgBit(oldp+62,(vlSelf->top__DOT__franken_riscv__DOT__stall_Exec));
        bufp->chgBit(oldp+63,(vlSelf->top__DOT__franken_riscv__DOT__stall_WB));
        bufp->chgBit(oldp+64,((0x33U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode))));
        bufp->chgBit(oldp+65,(((IData)(vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_h154cd026__0) 
                               & (0U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7)))));
        bufp->chgBit(oldp+66,(((IData)(vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_h154cd026__0) 
                               & (0x20U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7)))));
        bufp->chgBit(oldp+67,(((0x33U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
                               & ((4U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                                  & (0U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7))))));
        bufp->chgBit(oldp+68,(((0x33U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
                               & ((6U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                                  & (0U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7))))));
        bufp->chgBit(oldp+69,(((0x33U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
                               & ((7U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                                  & (0U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7))))));
        bufp->chgBit(oldp+70,(((0x33U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
                               & ((3U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                                  & (0U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7))))));
        bufp->chgBit(oldp+71,(((0x33U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
                               & ((1U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                                  & (0U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7))))));
        bufp->chgBit(oldp+72,(((0x33U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
                               & ((2U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                                  & (0U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7))))));
        bufp->chgBit(oldp+73,(((IData)(vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_he89c683e__0) 
                               & (0U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7)))));
        bufp->chgBit(oldp+74,(((IData)(vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_he89c683e__0) 
                               & (0x20U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7)))));
        bufp->chgBit(oldp+75,(vlSelf->top__DOT__franken_riscv__DOT__is_mul));
        bufp->chgBit(oldp+76,(vlSelf->top__DOT__franken_riscv__DOT__is_mulh));
        bufp->chgBit(oldp+77,(vlSelf->top__DOT__franken_riscv__DOT__is_mulhsu));
        bufp->chgBit(oldp+78,(vlSelf->top__DOT__franken_riscv__DOT__is_mulhu));
        bufp->chgBit(oldp+79,(((0x33U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
                               & ((4U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                                  & (1U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7))))));
        bufp->chgBit(oldp+80,(((0x33U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
                               & ((5U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                                  & (1U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7))))));
        bufp->chgBit(oldp+81,(((0x33U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
                               & ((6U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                                  & (1U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7))))));
        bufp->chgBit(oldp+82,(((0x33U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
                               & ((7U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                                  & (1U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7))))));
        bufp->chgBit(oldp+83,(((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_mul) 
                               | ((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_mulh) 
                                  | ((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_mulhsu) 
                                     | (IData)(vlSelf->top__DOT__franken_riscv__DOT__is_mulhu))))));
        bufp->chgBit(oldp+84,(vlSelf->top__DOT__franken_riscv__DOT__I_type));
        bufp->chgBit(oldp+85,(vlSelf->top__DOT__franken_riscv__DOT__is_jalr));
        bufp->chgBit(oldp+86,(vlSelf->top__DOT__franken_riscv__DOT__is_lb));
        bufp->chgBit(oldp+87,(vlSelf->top__DOT__franken_riscv__DOT__is_lh));
        bufp->chgBit(oldp+88,(vlSelf->top__DOT__franken_riscv__DOT__is_lw));
        bufp->chgBit(oldp+89,(vlSelf->top__DOT__franken_riscv__DOT__is_lbu));
        bufp->chgBit(oldp+90,(vlSelf->top__DOT__franken_riscv__DOT__is_lhu));
        bufp->chgBit(oldp+91,(((0U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                               & (0x13U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)))));
        bufp->chgBit(oldp+92,(((2U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                               & (0x13U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)))));
        bufp->chgBit(oldp+93,(((3U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                               & (0x13U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)))));
        bufp->chgBit(oldp+94,(((4U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                               & (0x13U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)))));
        bufp->chgBit(oldp+95,(((6U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                               & (0x13U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)))));
        bufp->chgBit(oldp+96,(((7U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                               & (0x13U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)))));
        bufp->chgBit(oldp+97,(((1U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                               & (IData)(vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_he18098c8__0))));
        bufp->chgBit(oldp+98,(((5U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                               & (IData)(vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_he18098c8__0))));
        bufp->chgBit(oldp+99,(((5U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                               & ((0x20U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7)) 
                                  & (0x13U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode))))));
        bufp->chgBit(oldp+100,((0x23U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode))));
        bufp->chgBit(oldp+101,(((0x23U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
                                & (2U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)))));
        bufp->chgBit(oldp+102,(vlSelf->top__DOT__franken_riscv__DOT__is_sb));
        bufp->chgBit(oldp+103,(vlSelf->top__DOT__franken_riscv__DOT__is_sh));
        bufp->chgBit(oldp+104,((0x63U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode))));
        bufp->chgBit(oldp+105,(vlSelf->top__DOT__franken_riscv__DOT__is_bge));
        bufp->chgBit(oldp+106,(vlSelf->top__DOT__franken_riscv__DOT__is_beq));
        bufp->chgBit(oldp+107,(vlSelf->top__DOT__franken_riscv__DOT__is_blt));
        bufp->chgBit(oldp+108,(vlSelf->top__DOT__franken_riscv__DOT__is_bne));
        bufp->chgBit(oldp+109,(((0x63U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
                                & (6U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)))));
        bufp->chgBit(oldp+110,(vlSelf->top__DOT__franken_riscv__DOT__is_bgeu));
        bufp->chgBit(oldp+111,(vlSelf->top__DOT__franken_riscv__DOT__U_type));
        bufp->chgBit(oldp+112,((0x17U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode))));
        bufp->chgBit(oldp+113,((0x37U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode))));
        bufp->chgBit(oldp+114,((0x6fU == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode))));
        bufp->chgBit(oldp+115,(((0xfU == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
                                & (0U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)))));
        bufp->chgCData(oldp+116,(vlSelf->top__DOT__franken_riscv__DOT__RD_Dec),5);
        bufp->chgCData(oldp+117,(vlSelf->top__DOT__franken_riscv__DOT__funct3),3);
        bufp->chgCData(oldp+118,(vlSelf->top__DOT__franken_riscv__DOT__funct7),7);
        bufp->chgBit(oldp+119,(vlSelf->top__DOT__franken_riscv__DOT__is_conditional_jump_Dec));
        bufp->chgBit(oldp+120,(vlSelf->top__DOT__franken_riscv__DOT__mem_read_Dec));
        bufp->chgBit(oldp+121,((((IData)(vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_hf167f6a7__0) 
                                 | ((IData)(vlSelf->top__DOT__franken_riscv__DOT__I_type) 
                                    | (IData)(vlSelf->top__DOT__franken_riscv__DOT__U_type))) 
                                & (0U != (IData)(vlSelf->top__DOT__franken_riscv__DOT__RD_Dec)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgWData(oldp+122,(vlSelf->top__DOT__out_decoder1),128);
        bufp->chgWData(oldp+126,(vlSelf->top__DOT__out_decoder2),128);
        bufp->chgWData(oldp+130,(vlSelf->top__DOT__out_decoder3),128);
        bufp->chgWData(oldp+134,(vlSelf->top__DOT__out_decoder4),128);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+138,(vlSelf->top__DOT__pc),32);
        bufp->chgIData(oldp+139,(vlSelf->top__DOT__instruction),32);
        bufp->chgIData(oldp+140,(vlSelf->top__DOT__write_reg),32);
        bufp->chgBit(oldp+141,(vlSelf->top__DOT__reg_write));
        bufp->chgCData(oldp+142,(vlSelf->top__DOT__RD),5);
        bufp->chgWData(oldp+143,(vlSelf->top__DOT__alu_decoder__DOT__hex_code),128);
        bufp->chgQData(oldp+147,(vlSelf->top__DOT__alu_decoder__DOT__RD_),64);
        bufp->chgQData(oldp+149,((((QData)((IData)(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder3_8____pinNumber2)) 
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
        bufp->chgCData(oldp+151,((0x7fU & vlSelf->top__DOT__instruction)),7);
        bufp->chgCData(oldp+152,((0x1fU & (vlSelf->top__DOT__instruction 
                                           >> 7U))),5);
        bufp->chgCData(oldp+153,((7U & (vlSelf->top__DOT__instruction 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+154,((0x1fU & (vlSelf->top__DOT__instruction 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+155,((0x1fU & (vlSelf->top__DOT__instruction 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+156,((vlSelf->top__DOT__instruction 
                                  >> 0x19U)),7);
        bufp->chgCData(oldp+157,(vlSelf->top__DOT__alu_decoder__DOT__funct3),3);
        bufp->chgCData(oldp+158,(vlSelf->top__DOT__alu_decoder__DOT__funct7),7);
        bufp->chgBit(oldp+159,((0x33U == (0x7fU & vlSelf->top__DOT__instruction))));
        bufp->chgBit(oldp+160,(vlSelf->top__DOT__alu_decoder__DOT__I_type));
        bufp->chgBit(oldp+161,((0x23U == (0x7fU & vlSelf->top__DOT__instruction))));
        bufp->chgBit(oldp+162,((0x63U == (0x7fU & vlSelf->top__DOT__instruction))));
        bufp->chgBit(oldp+163,(vlSelf->top__DOT__alu_decoder__DOT__U_type));
        bufp->chgBit(oldp+164,((0x6fU == (0x7fU & vlSelf->top__DOT__instruction))));
        bufp->chgIData(oldp+165,(vlSelf->top__DOT__alu_decoder__DOT__imm),32);
        bufp->chgBit(oldp+166,(vlSelf->top__DOT__alu_decoder__DOT__is_jalr));
        bufp->chgCData(oldp+167,((0xfU & vlSelf->top__DOT__alu_decoder__DOT__imm)),4);
        bufp->chgCData(oldp+168,(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder3_1____pinNumber2),8);
        bufp->chgCData(oldp+169,((0xfU & (vlSelf->top__DOT__alu_decoder__DOT__imm 
                                          >> 4U))),4);
        bufp->chgCData(oldp+170,(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder3_2____pinNumber2),8);
        bufp->chgCData(oldp+171,((0xfU & (vlSelf->top__DOT__alu_decoder__DOT__imm 
                                          >> 8U))),4);
        bufp->chgCData(oldp+172,(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder3_3____pinNumber2),8);
        bufp->chgCData(oldp+173,((0xfU & (vlSelf->top__DOT__alu_decoder__DOT__imm 
                                          >> 0xcU))),4);
        bufp->chgCData(oldp+174,(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder3_4____pinNumber2),8);
        bufp->chgCData(oldp+175,((0xfU & (vlSelf->top__DOT__alu_decoder__DOT__imm 
                                          >> 0x10U))),4);
        bufp->chgCData(oldp+176,(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder3_5____pinNumber2),8);
        bufp->chgCData(oldp+177,((0xfU & (vlSelf->top__DOT__alu_decoder__DOT__imm 
                                          >> 0x14U))),4);
        bufp->chgCData(oldp+178,(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder3_6____pinNumber2),8);
        bufp->chgCData(oldp+179,((0xfU & (vlSelf->top__DOT__alu_decoder__DOT__imm 
                                          >> 0x18U))),4);
        bufp->chgCData(oldp+180,(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder3_7____pinNumber2),8);
        bufp->chgCData(oldp+181,((vlSelf->top__DOT__alu_decoder__DOT__imm 
                                  >> 0x1cU)),4);
        bufp->chgCData(oldp+182,(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder3_8____pinNumber2),8);
        bufp->chgCData(oldp+183,((0xfU & vlSelf->top__DOT__write_reg)),4);
        bufp->chgCData(oldp+184,(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder4_1____pinNumber2),8);
        bufp->chgCData(oldp+185,((0xfU & (vlSelf->top__DOT__write_reg 
                                          >> 4U))),4);
        bufp->chgCData(oldp+186,(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder4_2____pinNumber2),8);
        bufp->chgCData(oldp+187,((0xfU & (vlSelf->top__DOT__write_reg 
                                          >> 8U))),4);
        bufp->chgCData(oldp+188,(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder4_3____pinNumber2),8);
        bufp->chgCData(oldp+189,((0xfU & (vlSelf->top__DOT__write_reg 
                                          >> 0xcU))),4);
        bufp->chgCData(oldp+190,(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder4_4____pinNumber2),8);
        bufp->chgCData(oldp+191,((0xfU & (vlSelf->top__DOT__write_reg 
                                          >> 0x10U))),4);
        bufp->chgCData(oldp+192,(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder4_5____pinNumber2),8);
        bufp->chgCData(oldp+193,((0xfU & (vlSelf->top__DOT__write_reg 
                                          >> 0x14U))),4);
        bufp->chgCData(oldp+194,(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder4_6____pinNumber2),8);
        bufp->chgCData(oldp+195,((0xfU & (vlSelf->top__DOT__write_reg 
                                          >> 0x18U))),4);
        bufp->chgCData(oldp+196,(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder4_7____pinNumber2),8);
        bufp->chgCData(oldp+197,((vlSelf->top__DOT__write_reg 
                                  >> 0x1cU)),4);
        bufp->chgCData(oldp+198,(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder4_8____pinNumber2),8);
        bufp->chgBit(oldp+199,(vlSelf->top__DOT__franken_riscv__DOT__is_conditional_jump_Exec));
        bufp->chgBit(oldp+200,(vlSelf->top__DOT__franken_riscv__DOT__mem_write_Exec));
        bufp->chgBit(oldp+201,(vlSelf->top__DOT__franken_riscv__DOT__mem_read_Exec));
        bufp->chgBit(oldp+202,(vlSelf->top__DOT__franken_riscv__DOT__reg_write_Exec));
        bufp->chgCData(oldp+203,(vlSelf->top__DOT__franken_riscv__DOT__RD_Exec),5);
        bufp->chgIData(oldp+204,(vlSelf->top__DOT__franken_riscv__DOT__src2_Exec),32);
        bufp->chgBit(oldp+205,(vlSelf->top__DOT__franken_riscv__DOT__stall_Mem));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgQData(oldp+206,((0x3030303000000000ULL 
                                  | (QData)((IData)(
                                                    (0x30300000U 
                                                     | (((IData)(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder1_2____pinNumber2) 
                                                         << 8U) 
                                                        | (IData)(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder1_1____pinNumber2))))))),64);
        bufp->chgQData(oldp+208,((0x3030303000000000ULL 
                                  | (QData)((IData)(
                                                    (0x30300000U 
                                                     | (((IData)(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder2_2____pinNumber2) 
                                                         << 8U) 
                                                        | (IData)(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder2_1____pinNumber2))))))),64);
        bufp->chgCData(oldp+210,(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder1_1____pinNumber2),8);
        bufp->chgCData(oldp+211,(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder1_2____pinNumber2),8);
        bufp->chgCData(oldp+212,(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder2_1____pinNumber2),8);
        bufp->chgCData(oldp+213,(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder2_2____pinNumber2),8);
    }
    bufp->chgBit(oldp+214,(vlSelf->clk));
    bufp->chgIData(oldp+215,(vlSelf->top__DOT__blockram__DOT__data_reg),32);
    bufp->chgIData(oldp+216,(vlSelf->top__DOT__alu_result),32);
    bufp->chgIData(oldp+217,(vlSelf->top__DOT__src1),32);
    bufp->chgIData(oldp+218,(vlSelf->top__DOT__src2),32);
    bufp->chgBit(oldp+219,(vlSelf->top__DOT__clk_div2));
    bufp->chgBit(oldp+220,(vlSelf->top__DOT__clk_div3));
    bufp->chgBit(oldp+221,(vlSelf->top__DOT__clk_div4));
    bufp->chgIData(oldp+222,(vlSelf->top__DOT__franken_riscv__DOT__jump_add_Exec),32);
    bufp->chgIData(oldp+223,(((7U == (IData)(vlSelf->top__DOT__power_on_reset__DOT__q))
                               ? ((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_conditional_jump_Dec)
                                   ? vlSelf->top__DOT__franken_riscv__DOT__jump_add_Exec
                                   : ((IData)(vlSelf->top__DOT__franken_riscv__DOT__stall_Exec)
                                       ? vlSelf->top__DOT__pc
                                       : ((IData)(4U) 
                                          + vlSelf->top__DOT__pc)))
                               : 0U)),32);
    bufp->chgIData(oldp+224,(vlSelf->top__DOT__franken_riscv__DOT__src1_forward),32);
    bufp->chgIData(oldp+225,(vlSelf->top__DOT__franken_riscv__DOT__src2_forward),32);
    bufp->chgBit(oldp+226,(((0U != (IData)(vlSelf->top__DOT__RS1)) 
                            & ((vlSelf->__VdfgTmp_hc9ae597d__0 
                                >> 0x1fU) & (IData)(vlSelf->top__DOT__franken_riscv__DOT__is_mulh)))));
    bufp->chgBit(oldp+227,(((0U != (IData)(vlSelf->top__DOT__RS2)) 
                            & ((vlSelf->__VdfgTmp_hcd850c4e__0 
                                >> 0x1fU) & ((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_mulh) 
                                             | (IData)(vlSelf->top__DOT__franken_riscv__DOT__is_mulhsu))))));
    bufp->chgQData(oldp+228,((((QData)((IData)(((0U 
                                                 != (IData)(vlSelf->top__DOT__RS1)) 
                                                & ((vlSelf->__VdfgTmp_hc9ae597d__0 
                                                    >> 0x1fU) 
                                                   & (IData)(vlSelf->top__DOT__franken_riscv__DOT__is_mulh))))) 
                               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__src1)))),33);
    bufp->chgQData(oldp+230,((((QData)((IData)(((0U 
                                                 != (IData)(vlSelf->top__DOT__RS2)) 
                                                & ((vlSelf->__VdfgTmp_hcd850c4e__0 
                                                    >> 0x1fU) 
                                                   & ((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_mulh) 
                                                      | (IData)(vlSelf->top__DOT__franken_riscv__DOT__is_mulhsu)))))) 
                               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__src2)))),33);
    bufp->chgQData(oldp+232,(vlSelf->top__DOT__franken_riscv__DOT__result_mul),64);
    bufp->chgBit(oldp+234,((1U & (~ (IData)(vlSelf->clk)))));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
