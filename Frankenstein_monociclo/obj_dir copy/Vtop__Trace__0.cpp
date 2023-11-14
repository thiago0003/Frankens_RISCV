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
        bufp->chgBit(oldp+0,((7U == (IData)(vlSelf->top__DOT__power_on_reset__DOT__q))));
        bufp->chgBit(oldp+1,((1U & (~ (IData)((7U == (IData)(vlSelf->top__DOT__power_on_reset__DOT__q)))))));
        bufp->chgCData(oldp+2,(vlSelf->top__DOT__power_on_reset__DOT__q),3);
        bufp->chgSData(oldp+3,(vlSelf->top__DOT__video__DOT__CounterX),10);
        bufp->chgSData(oldp+4,(vlSelf->top__DOT__video__DOT__CounterY),10);
        bufp->chgBit(oldp+5,(vlSelf->top__DOT__video__DOT__inDisplayArea));
        bufp->chgBit(oldp+6,(vlSelf->top__DOT__video__DOT__inDisplayAreaPrev));
        bufp->chgBit(oldp+7,(vlSelf->top__DOT__video__DOT__vga_HS));
        bufp->chgBit(oldp+8,(vlSelf->top__DOT__video__DOT__vga_VS));
        bufp->chgIData(oldp+9,(VL_SHIFTR_III(32,32,32, (IData)(vlSelf->top__DOT__video__DOT__CounterY), 4U)),32);
        bufp->chgIData(oldp+10,(VL_SHIFTR_III(32,32,32, (IData)(vlSelf->top__DOT__video__DOT__CounterX), 4U)),32);
        bufp->chgBit(oldp+11,((0x320U == (IData)(vlSelf->top__DOT__video__DOT__CounterX))));
        bufp->chgBit(oldp+12,((0x20dU == (IData)(vlSelf->top__DOT__video__DOT__CounterY))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+13,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[0]),32);
        bufp->chgIData(oldp+14,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[1]),32);
        bufp->chgIData(oldp+15,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[2]),32);
        bufp->chgIData(oldp+16,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[3]),32);
        bufp->chgIData(oldp+17,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[4]),32);
        bufp->chgIData(oldp+18,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[5]),32);
        bufp->chgIData(oldp+19,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[6]),32);
        bufp->chgIData(oldp+20,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[7]),32);
        bufp->chgIData(oldp+21,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[8]),32);
        bufp->chgIData(oldp+22,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[9]),32);
        bufp->chgIData(oldp+23,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[10]),32);
        bufp->chgIData(oldp+24,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[11]),32);
        bufp->chgIData(oldp+25,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[12]),32);
        bufp->chgIData(oldp+26,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[13]),32);
        bufp->chgIData(oldp+27,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[14]),32);
        bufp->chgIData(oldp+28,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[15]),32);
        bufp->chgIData(oldp+29,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[16]),32);
        bufp->chgIData(oldp+30,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[17]),32);
        bufp->chgIData(oldp+31,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[18]),32);
        bufp->chgIData(oldp+32,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[19]),32);
        bufp->chgIData(oldp+33,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[20]),32);
        bufp->chgIData(oldp+34,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[21]),32);
        bufp->chgIData(oldp+35,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[22]),32);
        bufp->chgIData(oldp+36,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[23]),32);
        bufp->chgIData(oldp+37,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[24]),32);
        bufp->chgIData(oldp+38,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[25]),32);
        bufp->chgIData(oldp+39,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[26]),32);
        bufp->chgIData(oldp+40,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[27]),32);
        bufp->chgIData(oldp+41,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[28]),32);
        bufp->chgIData(oldp+42,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[29]),32);
        bufp->chgIData(oldp+43,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[30]),32);
        bufp->chgIData(oldp+44,(vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+45,(vlSelf->top__DOT__instruction),32);
        bufp->chgBit(oldp+46,((0x23U == (0x7fU & vlSelf->top__DOT__instruction))));
        bufp->chgSData(oldp+47,((0x23U == (0x7fU & vlSelf->top__DOT__instruction))),9);
        bufp->chgBit(oldp+48,(((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_beq) 
                               | ((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_bne) 
                                  | ((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_blt) 
                                     | ((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_bge) 
                                        | ((0x6fU == 
                                            (0x7fU 
                                             & vlSelf->top__DOT__instruction)) 
                                           | (IData)(vlSelf->top__DOT__franken_riscv__DOT__is_jalr))))))));
        bufp->chgCData(oldp+49,((0x7fU & vlSelf->top__DOT__instruction)),7);
        bufp->chgCData(oldp+50,((0x1fU & (vlSelf->top__DOT__instruction 
                                          >> 7U))),5);
        bufp->chgCData(oldp+51,((7U & (vlSelf->top__DOT__instruction 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+52,((0x1fU & (vlSelf->top__DOT__instruction 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+53,((0x1fU & (vlSelf->top__DOT__instruction 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+54,((vlSelf->top__DOT__instruction 
                                 >> 0x19U)),7);
        bufp->chgBit(oldp+55,((0x33U == (0x7fU & vlSelf->top__DOT__instruction))));
        bufp->chgBit(oldp+56,(vlSelf->top__DOT__franken_riscv__DOT__I_type));
        bufp->chgBit(oldp+57,((0x63U == (0x7fU & vlSelf->top__DOT__instruction))));
        bufp->chgBit(oldp+58,(vlSelf->top__DOT__franken_riscv__DOT__U_type));
        bufp->chgBit(oldp+59,((0x6fU == (0x7fU & vlSelf->top__DOT__instruction))));
        bufp->chgCData(oldp+60,(vlSelf->top__DOT__franken_riscv__DOT__RS1),5);
        bufp->chgCData(oldp+61,(vlSelf->top__DOT__franken_riscv__DOT__RS2),5);
        bufp->chgCData(oldp+62,(vlSelf->top__DOT__franken_riscv__DOT__RD),5);
        bufp->chgCData(oldp+63,(vlSelf->top__DOT__franken_riscv__DOT__funct3),3);
        bufp->chgCData(oldp+64,(vlSelf->top__DOT__franken_riscv__DOT__funct7),7);
        bufp->chgIData(oldp+65,(vlSelf->top__DOT__franken_riscv__DOT__imm),32);
        bufp->chgBit(oldp+66,(((IData)(vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_h897b9696__0) 
                               & (0U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7)))));
        bufp->chgBit(oldp+67,(((0x13U == (0x7fU & vlSelf->top__DOT__instruction)) 
                               & (0U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)))));
        bufp->chgBit(oldp+68,(((IData)(vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_h897b9696__0) 
                               & (0x20U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7)))));
        bufp->chgBit(oldp+69,(((0x33U == (0x7fU & vlSelf->top__DOT__instruction)) 
                               & ((4U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                                  & (0U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7))))));
        bufp->chgBit(oldp+70,(((0x33U == (0x7fU & vlSelf->top__DOT__instruction)) 
                               & ((6U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                                  & (0U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7))))));
        bufp->chgBit(oldp+71,(((0x13U == (0x7fU & vlSelf->top__DOT__instruction)) 
                               & (7U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)))));
        bufp->chgBit(oldp+72,(((0x13U == (0x7fU & vlSelf->top__DOT__instruction)) 
                               & ((1U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                                  & (0U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7))))));
        bufp->chgBit(oldp+73,(((0x13U == (0x7fU & vlSelf->top__DOT__instruction)) 
                               & ((5U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                                  & (0U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7))))));
        bufp->chgBit(oldp+74,((0x17U == (0x7fU & vlSelf->top__DOT__instruction))));
        bufp->chgBit(oldp+75,((0x37U == (0x7fU & vlSelf->top__DOT__instruction))));
        bufp->chgBit(oldp+76,(vlSelf->top__DOT__franken_riscv__DOT__is_jalr));
        bufp->chgBit(oldp+77,(vlSelf->top__DOT__franken_riscv__DOT__is_bge));
        bufp->chgBit(oldp+78,(vlSelf->top__DOT__franken_riscv__DOT__is_beq));
        bufp->chgBit(oldp+79,(vlSelf->top__DOT__franken_riscv__DOT__is_blt));
        bufp->chgBit(oldp+80,(vlSelf->top__DOT__franken_riscv__DOT__is_bne));
        bufp->chgBit(oldp+81,(vlSelf->top__DOT__franken_riscv__DOT__is_sw));
        bufp->chgBit(oldp+82,(vlSelf->top__DOT__franken_riscv__DOT__is_lw));
        bufp->chgBit(oldp+83,(vlSelf->top__DOT__franken_riscv__DOT__is_sb));
        bufp->chgBit(oldp+84,(vlSelf->top__DOT__franken_riscv__DOT__is_lbu));
        bufp->chgBit(oldp+85,(((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_lw) 
                               | (IData)(vlSelf->top__DOT__franken_riscv__DOT__is_lbu))));
        bufp->chgBit(oldp+86,((((IData)(vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_hd86a4e63__0) 
                                | ((IData)(vlSelf->top__DOT__franken_riscv__DOT__I_type) 
                                   | (IData)(vlSelf->top__DOT__franken_riscv__DOT__U_type))) 
                               & (0U != (IData)(vlSelf->top__DOT__franken_riscv__DOT__RD)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+87,(vlSelf->top__DOT__write_data),32);
        bufp->chgIData(oldp+88,(vlSelf->top__DOT__alu_result),32);
        bufp->chgCData(oldp+89,(vlSelf->top__DOT__byte_enable),4);
        bufp->chgBit(oldp+90,(vlSelf->top__DOT____Vcellinp__dmem____pinNumber1));
        bufp->chgIData(oldp+91,(vlSelf->top__DOT__franken_riscv__DOT__src1),32);
        bufp->chgIData(oldp+92,(vlSelf->top__DOT__franken_riscv__DOT__src2),32);
        bufp->chgIData(oldp+93,(vlSelf->top__DOT__franken_riscv__DOT__jump_add),32);
    }
    bufp->chgBit(oldp+94,(vlSelf->CLOCK_50));
    bufp->chgCData(oldp+95,(vlSelf->VGA_R),8);
    bufp->chgCData(oldp+96,(vlSelf->VGA_G),8);
    bufp->chgCData(oldp+97,(vlSelf->VGA_B),8);
    bufp->chgBit(oldp+98,(vlSelf->VGA_HS));
    bufp->chgBit(oldp+99,(vlSelf->VGA_VS));
    bufp->chgBit(oldp+100,(vlSelf->VGA_CLK));
    bufp->chgBit(oldp+101,(vlSelf->VGA_BLANK_N));
    bufp->chgBit(oldp+102,(vlSelf->VGA_SYNC_N));
    bufp->chgIData(oldp+103,(vlSelf->top__DOT__pc),32);
    bufp->chgIData(oldp+104,(vlSelf->top__DOT__addr_vga),32);
    bufp->chgIData(oldp+105,(vlSelf->top__DOT__read_data),32);
    bufp->chgIData(oldp+106,(vlSelf->top__DOT__read_data_vga),32);
    bufp->chgBit(oldp+107,((1U & vlSelf->top__DOT__addr_vga)));
    bufp->chgIData(oldp+108,(vlSelf->CLOCK_50),32);
    bufp->chgIData(oldp+109,((((0x23U == (0x7fU & vlSelf->top__DOT__instruction)) 
                               == (0x1ffU & vlSelf->top__DOT__write_data))
                               ? vlSelf->top__DOT__read_data
                               : vlSelf->top__DOT__dmem__DOT__RAM
                              [(0x1ffU & VL_SHIFTR_III(9,9,32, 
                                                       (0x23U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->top__DOT__instruction)), 2U))])),32);
    bufp->chgIData(oldp+110,(((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_lbu)
                               ? ((3U == (3U & vlSelf->top__DOT__alu_result))
                                   ? VL_SHIFTR_III(32,32,32, vlSelf->top__DOT__read_data, 0x18U)
                                   : ((2U == (3U & vlSelf->top__DOT__alu_result))
                                       ? (0xffU & (vlSelf->top__DOT__read_data 
                                                   >> 0x10U))
                                       : ((1U == (3U 
                                                  & vlSelf->top__DOT__alu_result))
                                           ? (0xffU 
                                              & (vlSelf->top__DOT__read_data 
                                                 >> 8U))
                                           : (0xffU 
                                              & vlSelf->top__DOT__read_data))))
                               : vlSelf->top__DOT__read_data)),32);
    bufp->chgIData(oldp+111,(((7U == (IData)(vlSelf->top__DOT__power_on_reset__DOT__q))
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
                                   : ((IData)(4U) + vlSelf->top__DOT__pc))
                               : 0U)),32);
    bufp->chgBit(oldp+112,((1U & (~ (IData)(vlSelf->CLOCK_50)))));
    bufp->chgIData(oldp+113,((((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_lw) 
                               | (IData)(vlSelf->top__DOT__franken_riscv__DOT__is_lbu))
                               ? ((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_lbu)
                                   ? ((3U == (3U & vlSelf->top__DOT__alu_result))
                                       ? VL_SHIFTR_III(32,32,32, vlSelf->top__DOT__read_data, 0x18U)
                                       : ((2U == (3U 
                                                  & vlSelf->top__DOT__alu_result))
                                           ? (0xffU 
                                              & (vlSelf->top__DOT__read_data 
                                                 >> 0x10U))
                                           : ((1U == 
                                               (3U 
                                                & vlSelf->top__DOT__alu_result))
                                               ? (0xffU 
                                                  & (vlSelf->top__DOT__read_data 
                                                     >> 8U))
                                               : (0xffU 
                                                  & vlSelf->top__DOT__read_data))))
                                   : vlSelf->top__DOT__read_data)
                               : vlSelf->top__DOT__alu_result)),32);
    bufp->chgSData(oldp+114,((0x1ffU & vlSelf->top__DOT__pc)),9);
    bufp->chgCData(oldp+115,((0xffU & ((0x20U & (IData)(vlSelf->top__DOT__video__DOT__CounterX))
                                        ? ((0x10U & (IData)(vlSelf->top__DOT__video__DOT__CounterX))
                                            ? (vlSelf->top__DOT__read_data_vga 
                                               >> 0x18U)
                                            : (vlSelf->top__DOT__read_data_vga 
                                               >> 0x10U))
                                        : ((0x10U & (IData)(vlSelf->top__DOT__video__DOT__CounterX))
                                            ? (vlSelf->top__DOT__read_data_vga 
                                               >> 8U)
                                            : vlSelf->top__DOT__read_data_vga)))),8);
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
}
