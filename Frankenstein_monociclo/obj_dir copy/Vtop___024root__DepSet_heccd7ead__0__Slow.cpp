// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    // Body
    Vtop___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->top__DOT__video__DOT__CounterX = 0U;
    vlSelf->top__DOT__video__DOT__CounterY = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__CLOCK_50__0 = vlSelf->CLOCK_50;
    vlSelf->__Vtrigprevexpr___TOP__VGA_CLK__0 = vlSelf->VGA_CLK;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT____Vcellinp__dmem____pinNumber1__0 
        = vlSelf->top__DOT____Vcellinp__dmem____pinNumber1;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->VGA_BLANK_N = 1U;
    vlSelf->VGA_SYNC_N = 0U;
    VL_READMEM_N(true, 32, 64, 0, std::string{"mem.txt"}
                 ,  &(vlSelf->top__DOT__imem__DOT__RAM)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 32, 512, 0, std::string{"mem.txt"}
                 ,  &(vlSelf->top__DOT__dmem__DOT__RAM)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("top.v", 10, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ top__DOT__franken_riscv__DOT____VdfgTmp_h9eaf8be5__0;
    top__DOT__franken_riscv__DOT____VdfgTmp_h9eaf8be5__0 = 0;
    CData/*7:0*/ top__DOT__franken_riscv__DOT____VdfgTmp_hb90c054a__0;
    top__DOT__franken_riscv__DOT____VdfgTmp_hb90c054a__0 = 0;
    CData/*0:0*/ top__DOT__franken_riscv__DOT____VdfgTmp_hcb1e93f3__0;
    top__DOT__franken_riscv__DOT____VdfgTmp_hcb1e93f3__0 = 0;
    CData/*0:0*/ top__DOT__franken_riscv__DOT____VdfgTmp_he41587d0__0;
    top__DOT__franken_riscv__DOT____VdfgTmp_he41587d0__0 = 0;
    CData/*0:0*/ top__DOT__franken_riscv__DOT____VdfgTmp_h75ed175f__0;
    top__DOT__franken_riscv__DOT____VdfgTmp_h75ed175f__0 = 0;
    IData/*31:0*/ __VdfgTmp_hb3962318__0;
    __VdfgTmp_hb3962318__0 = 0;
    // Body
    vlSelf->top__DOT__video__DOT__CounterXmaxed = (0x320U 
                                                   == (IData)(vlSelf->top__DOT__video__DOT__CounterX));
    vlSelf->top__DOT__video__DOT__CounterYmaxed = (0x20dU 
                                                   == (IData)(vlSelf->top__DOT__video__DOT__CounterY));
    vlSelf->top__DOT__addr_vga = (VL_SHIFTR_III(32,32,32, (IData)(vlSelf->top__DOT__video__DOT__CounterX), 4U) 
                                  + ((0xffffffe0U & 
                                      VL_SHIFTL_III(32,32,32, (IData)(vlSelf->top__DOT__video__DOT__CounterY), 1U)) 
                                     + (0x7ffffff8U 
                                        & VL_SHIFTR_III(32,32,32, (IData)(vlSelf->top__DOT__video__DOT__CounterY), 1U))));
    vlSelf->VGA_R = ((IData)(vlSelf->top__DOT__video__DOT__inDisplayArea)
                      ? (0xffU & (- (IData)((1U & (
                                                   (0x20U 
                                                    & (IData)(vlSelf->top__DOT__video__DOT__CounterX))
                                                    ? 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->top__DOT__video__DOT__CounterX))
                                                     ? 
                                                    (vlSelf->top__DOT__read_data_vga 
                                                     >> 0x18U)
                                                     : 
                                                    (vlSelf->top__DOT__read_data_vga 
                                                     >> 0x10U))
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->top__DOT__video__DOT__CounterX))
                                                     ? 
                                                    (vlSelf->top__DOT__read_data_vga 
                                                     >> 8U)
                                                     : vlSelf->top__DOT__read_data_vga))))))
                      : 0U);
    vlSelf->top__DOT__instruction = vlSelf->top__DOT__imem__DOT__RAM
        [(0x3fU & (vlSelf->top__DOT__pc >> 2U))];
    vlSelf->VGA_G = vlSelf->VGA_R;
    vlSelf->VGA_B = vlSelf->VGA_R;
    vlSelf->top__DOT__franken_riscv__DOT__funct7 = 
        ((0x33U == (0x7fU & vlSelf->top__DOT__instruction))
          ? (vlSelf->top__DOT__instruction >> 0x19U)
          : 0U);
    vlSelf->top__DOT__franken_riscv__DOT__U_type = 
        ((0x37U == (0x7fU & vlSelf->top__DOT__instruction)) 
         | (0x17U == (0x7fU & vlSelf->top__DOT__instruction)));
    vlSelf->top__DOT__franken_riscv__DOT__I_type = 
        ((0x67U == (0x7fU & vlSelf->top__DOT__instruction)) 
         | ((3U == (0x7fU & vlSelf->top__DOT__instruction)) 
            | (0x13U == (0x7fU & vlSelf->top__DOT__instruction))));
    top__DOT__franken_riscv__DOT____VdfgTmp_h75ed175f__0 
        = ((0x23U == (0x7fU & vlSelf->top__DOT__instruction)) 
           | (0x63U == (0x7fU & vlSelf->top__DOT__instruction)));
    vlSelf->top__DOT__franken_riscv__DOT__imm = ((IData)(vlSelf->top__DOT__franken_riscv__DOT__I_type)
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSelf->top__DOT__instruction 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | (vlSelf->top__DOT__instruction 
                                                     >> 0x14U))
                                                  : 
                                                 ((0x23U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->top__DOT__instruction))
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelf->top__DOT__instruction 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | ((0xfe0U 
                                                       & (vlSelf->top__DOT__instruction 
                                                          >> 0x14U)) 
                                                      | (0x1fU 
                                                         & (vlSelf->top__DOT__instruction 
                                                            >> 7U))))
                                                   : 
                                                  ((0x63U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->top__DOT__instruction))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->top__DOT__instruction 
                                                                 >> 0x1fU))) 
                                                     << 0xdU) 
                                                    | ((0x1000U 
                                                        & (vlSelf->top__DOT__instruction 
                                                           >> 0x13U)) 
                                                       | ((0x800U 
                                                           & (vlSelf->top__DOT__instruction 
                                                              << 4U)) 
                                                          | ((0x7e0U 
                                                              & (vlSelf->top__DOT__instruction 
                                                                 >> 0x14U)) 
                                                             | (0x1eU 
                                                                & (vlSelf->top__DOT__instruction 
                                                                   >> 7U))))))
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__franken_riscv__DOT__U_type)
                                                     ? 
                                                    (0xfffff000U 
                                                     & vlSelf->top__DOT__instruction)
                                                     : 
                                                    ((0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->top__DOT__instruction))
                                                      ? 
                                                     (((- (IData)(
                                                                  (vlSelf->top__DOT__instruction 
                                                                   >> 0x1fU))) 
                                                       << 0x15U) 
                                                      | ((0x100000U 
                                                          & (vlSelf->top__DOT__instruction 
                                                             >> 0xbU)) 
                                                         | ((0xff000U 
                                                             & vlSelf->top__DOT__instruction) 
                                                            | ((0x800U 
                                                                & (vlSelf->top__DOT__instruction 
                                                                   >> 9U)) 
                                                               | (0x7feU 
                                                                  & (vlSelf->top__DOT__instruction 
                                                                     >> 0x14U))))))
                                                      : 0U)))));
    top__DOT__franken_riscv__DOT____VdfgTmp_he41587d0__0 
        = ((0x33U == (0x7fU & vlSelf->top__DOT__instruction)) 
           | (IData)(vlSelf->top__DOT__franken_riscv__DOT__I_type));
    vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_hd86a4e63__0 
        = ((0x33U == (0x7fU & vlSelf->top__DOT__instruction)) 
           | (IData)(top__DOT__franken_riscv__DOT____VdfgTmp_h75ed175f__0));
    vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_hbc0fc7ad__0 
        = (vlSelf->top__DOT__pc + vlSelf->top__DOT__franken_riscv__DOT__imm);
    vlSelf->top__DOT__franken_riscv__DOT__RD = (((IData)(top__DOT__franken_riscv__DOT____VdfgTmp_he41587d0__0) 
                                                 | ((IData)(vlSelf->top__DOT__franken_riscv__DOT__U_type) 
                                                    | (0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->top__DOT__instruction))))
                                                 ? 
                                                (0x1fU 
                                                 & (vlSelf->top__DOT__instruction 
                                                    >> 7U))
                                                 : 0U);
    top__DOT__franken_riscv__DOT____VdfgTmp_hcb1e93f3__0 
        = ((IData)(top__DOT__franken_riscv__DOT____VdfgTmp_he41587d0__0) 
           | (IData)(top__DOT__franken_riscv__DOT____VdfgTmp_h75ed175f__0));
    vlSelf->top__DOT__franken_riscv__DOT__RS2 = ((IData)(vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_hd86a4e63__0)
                                                  ? 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__instruction 
                                                     >> 0x14U))
                                                  : 0U);
    if (top__DOT__franken_riscv__DOT____VdfgTmp_hcb1e93f3__0) {
        vlSelf->top__DOT__franken_riscv__DOT__RS1 = 
            (0x1fU & (vlSelf->top__DOT__instruction 
                      >> 0xfU));
        vlSelf->top__DOT__franken_riscv__DOT__funct3 
            = (7U & (vlSelf->top__DOT__instruction 
                     >> 0xcU));
    } else {
        vlSelf->top__DOT__franken_riscv__DOT__RS1 = 0U;
        vlSelf->top__DOT__franken_riscv__DOT__funct3 = 0U;
    }
    __VdfgTmp_hb3962318__0 = vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf
        [vlSelf->top__DOT__franken_riscv__DOT__RS2];
    vlSelf->top__DOT__franken_riscv__DOT__src1 = ((0U 
                                                   == (IData)(vlSelf->top__DOT__franken_riscv__DOT__RS1))
                                                   ? 0U
                                                   : 
                                                  vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf
                                                  [vlSelf->top__DOT__franken_riscv__DOT__RS1]);
    vlSelf->top__DOT__franken_riscv__DOT__is_sb = (
                                                   (0x23U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->top__DOT__instruction)) 
                                                   & (0U 
                                                      == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)));
    vlSelf->top__DOT__franken_riscv__DOT__is_lw = (
                                                   (3U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->top__DOT__instruction)) 
                                                   & (2U 
                                                      == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)));
    vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_h897b9696__0 
        = ((0x33U == (0x7fU & vlSelf->top__DOT__instruction)) 
           & (0U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)));
    vlSelf->top__DOT__franken_riscv__DOT__is_lbu = 
        ((3U == (0x7fU & vlSelf->top__DOT__instruction)) 
         & (4U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)));
    vlSelf->top__DOT__franken_riscv__DOT__is_sw = (
                                                   (0x23U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->top__DOT__instruction)) 
                                                   & (2U 
                                                      == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)));
    vlSelf->top__DOT__franken_riscv__DOT__is_beq = 
        ((0x63U == (0x7fU & vlSelf->top__DOT__instruction)) 
         & (0U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)));
    vlSelf->top__DOT__franken_riscv__DOT__is_bne = 
        ((0x63U == (0x7fU & vlSelf->top__DOT__instruction)) 
         & (1U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)));
    vlSelf->top__DOT__franken_riscv__DOT__is_blt = 
        ((0x63U == (0x7fU & vlSelf->top__DOT__instruction)) 
         & (4U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)));
    vlSelf->top__DOT__franken_riscv__DOT__is_bge = 
        ((0x63U == (0x7fU & vlSelf->top__DOT__instruction)) 
         & (5U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)));
    vlSelf->top__DOT__franken_riscv__DOT__is_jalr = 
        ((0x67U == (0x7fU & vlSelf->top__DOT__instruction)) 
         & (0U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)));
    if ((0U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__RS2))) {
        top__DOT__franken_riscv__DOT____VdfgTmp_hb90c054a__0 = 0U;
        vlSelf->top__DOT__franken_riscv__DOT__src2 = 0U;
    } else {
        top__DOT__franken_riscv__DOT____VdfgTmp_hb90c054a__0 
            = (0xffU & __VdfgTmp_hb3962318__0);
        vlSelf->top__DOT__franken_riscv__DOT__src2 
            = __VdfgTmp_hb3962318__0;
    }
    top__DOT__franken_riscv__DOT____VdfgTmp_h9eaf8be5__0 
        = (vlSelf->top__DOT__franken_riscv__DOT__src1 
           + vlSelf->top__DOT__franken_riscv__DOT__imm);
    vlSelf->top__DOT__franken_riscv__DOT__jump_add 
        = ((0x6fU == (0x7fU & vlSelf->top__DOT__instruction))
            ? vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_hbc0fc7ad__0
            : ((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_jalr)
                ? top__DOT__franken_riscv__DOT____VdfgTmp_h9eaf8be5__0
                : (((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_beq) 
                    & (vlSelf->top__DOT__franken_riscv__DOT__src1 
                       == vlSelf->top__DOT__franken_riscv__DOT__src2))
                    ? vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_hbc0fc7ad__0
                    : (((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_bne) 
                        & (vlSelf->top__DOT__franken_riscv__DOT__src1 
                           != vlSelf->top__DOT__franken_riscv__DOT__src2))
                        ? vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_hbc0fc7ad__0
                        : (((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_blt) 
                            & VL_LTS_III(32, vlSelf->top__DOT__franken_riscv__DOT__src1, vlSelf->top__DOT__franken_riscv__DOT__src2))
                            ? vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_hbc0fc7ad__0
                            : (((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_bge) 
                                & VL_GTES_III(32, vlSelf->top__DOT__franken_riscv__DOT__src1, vlSelf->top__DOT__franken_riscv__DOT__src2))
                                ? vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_hbc0fc7ad__0
                                : ((IData)(4U) + vlSelf->top__DOT__pc)))))));
    vlSelf->top__DOT__franken_riscv__DOT__next_pc = 
        ((7U == (IData)(vlSelf->top__DOT__power_on_reset__DOT__q))
          ? (((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_beq) 
              | ((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_bne) 
                 | ((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_blt) 
                    | ((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_bge) 
                       | ((0x6fU == (0x7fU & vlSelf->top__DOT__instruction)) 
                          | (IData)(vlSelf->top__DOT__franken_riscv__DOT__is_jalr))))))
              ? vlSelf->top__DOT__franken_riscv__DOT__jump_add
              : ((IData)(4U) + vlSelf->top__DOT__pc))
          : 0U);
    vlSelf->top__DOT__alu_result = (((IData)(vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_h897b9696__0) 
                                     & (0U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7)))
                                     ? (vlSelf->top__DOT__franken_riscv__DOT__src1 
                                        + vlSelf->top__DOT__franken_riscv__DOT__src2)
                                     : (((0x13U == 
                                          (0x7fU & vlSelf->top__DOT__instruction)) 
                                         & (0U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)))
                                         ? top__DOT__franken_riscv__DOT____VdfgTmp_h9eaf8be5__0
                                         : (((IData)(vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_h897b9696__0) 
                                             & (0x20U 
                                                == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7)))
                                             ? (vlSelf->top__DOT__franken_riscv__DOT__src1 
                                                - vlSelf->top__DOT__franken_riscv__DOT__src2)
                                             : (((0x13U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->top__DOT__instruction)) 
                                                 & (7U 
                                                    == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)))
                                                 ? 
                                                (vlSelf->top__DOT__franken_riscv__DOT__src1 
                                                 & vlSelf->top__DOT__franken_riscv__DOT__imm)
                                                 : 
                                                (((0x33U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->top__DOT__instruction)) 
                                                  & ((6U 
                                                      == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                                                     & (0U 
                                                        == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7))))
                                                  ? 
                                                 (vlSelf->top__DOT__franken_riscv__DOT__src1 
                                                  | vlSelf->top__DOT__franken_riscv__DOT__src2)
                                                  : 
                                                 (((0x13U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->top__DOT__instruction)) 
                                                   & ((1U 
                                                       == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                                                      & (0U 
                                                         == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7))))
                                                   ? 
                                                  (vlSelf->top__DOT__franken_riscv__DOT__src1 
                                                   << 
                                                   (0x1fU 
                                                    & vlSelf->top__DOT__franken_riscv__DOT__imm))
                                                   : 
                                                  (((0x13U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->top__DOT__instruction)) 
                                                    & ((5U 
                                                        == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                                                       & (0U 
                                                          == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7))))
                                                    ? 
                                                   (vlSelf->top__DOT__franken_riscv__DOT__src1 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->top__DOT__franken_riscv__DOT__imm))
                                                    : 
                                                   ((0x17U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->top__DOT__instruction))
                                                     ? vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_hbc0fc7ad__0
                                                     : 
                                                    ((0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->top__DOT__instruction))
                                                      ? vlSelf->top__DOT__franken_riscv__DOT__jump_add
                                                      : 
                                                     ((0x23U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->top__DOT__instruction))
                                                       ? top__DOT__franken_riscv__DOT____VdfgTmp_h9eaf8be5__0
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_lw)
                                                        ? top__DOT__franken_riscv__DOT____VdfgTmp_h9eaf8be5__0
                                                        : 
                                                       ((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_sw)
                                                         ? top__DOT__franken_riscv__DOT____VdfgTmp_h9eaf8be5__0
                                                         : 
                                                        ((0x37U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->top__DOT__instruction))
                                                          ? vlSelf->top__DOT__franken_riscv__DOT__imm
                                                          : 
                                                         (((0x33U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->top__DOT__instruction)) 
                                                           & ((4U 
                                                               == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                                                              & (0U 
                                                                 == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7))))
                                                           ? 
                                                          (vlSelf->top__DOT__franken_riscv__DOT__src1 
                                                           ^ vlSelf->top__DOT__franken_riscv__DOT__src2)
                                                           : 
                                                          ((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_lbu)
                                                            ? top__DOT__franken_riscv__DOT____VdfgTmp_h9eaf8be5__0
                                                            : 0U)))))))))))))));
    vlSelf->top__DOT____Vcellinp__dmem____pinNumber1 
        = (1U & vlSelf->top__DOT__alu_result);
    vlSelf->top__DOT__byte_enable = (((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_lbu) 
                                      | (IData)(vlSelf->top__DOT__franken_riscv__DOT__is_sb))
                                      ? ((3U == (3U 
                                                 & vlSelf->top__DOT__alu_result))
                                          ? 8U : ((2U 
                                                   == 
                                                   (3U 
                                                    & vlSelf->top__DOT__alu_result))
                                                   ? 4U
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->top__DOT__alu_result))
                                                    ? 2U
                                                    : 1U)))
                                      : 0xfU);
    vlSelf->top__DOT__write_data = ((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_sw)
                                     ? vlSelf->top__DOT__franken_riscv__DOT__src2
                                     : ((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_sb)
                                         ? ((3U == 
                                             (3U & vlSelf->top__DOT__alu_result))
                                             ? VL_SHIFTL_III(32,32,32, vlSelf->top__DOT__franken_riscv__DOT__src2, 0x18U)
                                             : ((2U 
                                                 == 
                                                 (3U 
                                                  & vlSelf->top__DOT__alu_result))
                                                 ? 
                                                ((IData)(top__DOT__franken_riscv__DOT____VdfgTmp_hb90c054a__0) 
                                                 << 0x10U)
                                                 : 
                                                ((1U 
                                                  == 
                                                  (3U 
                                                   & vlSelf->top__DOT__alu_result))
                                                  ? 
                                                 ((IData)(top__DOT__franken_riscv__DOT____VdfgTmp_hb90c054a__0) 
                                                  << 8U)
                                                  : (IData)(top__DOT__franken_riscv__DOT____VdfgTmp_hb90c054a__0))))
                                         : 0U));
    vlSelf->top__DOT__read_data = ((1U & vlSelf->top__DOT__addr_vga)
                                    ? (IData)(vlSelf->CLOCK_50)
                                    : vlSelf->top__DOT__dmem__DOT__RAM
                                   [(0x1ffU & (vlSelf->top__DOT__write_data 
                                               >> 2U))]);
}

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge CLOCK_50)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge VGA_CLK)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge CLOCK_50)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge top.__Vcellinp__dmem____pinNumber1)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge CLOCK_50)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge VGA_CLK)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge CLOCK_50)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge top.__Vcellinp__dmem____pinNumber1)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->CLOCK_50 = VL_RAND_RESET_I(1);
    vlSelf->VGA_R = VL_RAND_RESET_I(8);
    vlSelf->VGA_G = VL_RAND_RESET_I(8);
    vlSelf->VGA_B = VL_RAND_RESET_I(8);
    vlSelf->VGA_HS = VL_RAND_RESET_I(1);
    vlSelf->VGA_VS = VL_RAND_RESET_I(1);
    vlSelf->VGA_CLK = VL_RAND_RESET_I(1);
    vlSelf->VGA_BLANK_N = VL_RAND_RESET_I(1);
    vlSelf->VGA_SYNC_N = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__addr_vga = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__instruction = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__read_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__read_data_vga = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__write_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__byte_enable = VL_RAND_RESET_I(4);
    vlSelf->top__DOT____Vcellinp__dmem____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__power_on_reset__DOT__q = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__franken_riscv__DOT__src1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__franken_riscv__DOT__src2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__franken_riscv__DOT__jump_add = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__franken_riscv__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__franken_riscv__DOT__I_type = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__franken_riscv__DOT__U_type = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__franken_riscv__DOT__RS1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__franken_riscv__DOT__RS2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__franken_riscv__DOT__RD = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__franken_riscv__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__franken_riscv__DOT__funct7 = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__franken_riscv__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__franken_riscv__DOT__is_jalr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__franken_riscv__DOT__is_bge = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__franken_riscv__DOT__is_beq = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__franken_riscv__DOT__is_blt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__franken_riscv__DOT__is_bne = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__franken_riscv__DOT__is_sw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__franken_riscv__DOT__is_lw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__franken_riscv__DOT__is_sb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__franken_riscv__DOT__is_lbu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_hbc0fc7ad__0 = 0;
    vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_hd86a4e63__0 = 0;
    vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_h897b9696__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->top__DOT__imem__DOT__RAM[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->top__DOT__dmem__DOT__RAM[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__video__DOT__CounterX = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__video__DOT__CounterY = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__video__DOT__inDisplayArea = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__video__DOT__inDisplayAreaPrev = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__video__DOT__vga_HS = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__video__DOT__vga_VS = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__video__DOT__CounterXmaxed = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__video__DOT__CounterYmaxed = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CLOCK_50__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__VGA_CLK__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT____Vcellinp__dmem____pinNumber1__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
