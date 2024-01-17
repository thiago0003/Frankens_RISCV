// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__clk_div1__0 
        = vlSelf->top__DOT__clk_div1;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__clk_div2__0 
        = vlSelf->top__DOT__clk_div2;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__clk_div3__0 
        = vlSelf->top__DOT__clk_div3;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__clk_div4__0 
        = vlSelf->top__DOT__clk_div4;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->top__DOT__imem__DOT__ram[1U] = 0x13U;
    vlSelf->top__DOT__imem__DOT__ram[2U] = 0x7b7U;
    vlSelf->top__DOT__imem__DOT__ram[3U] = 0x78793U;
    vlSelf->top__DOT__imem__DOT__ram[4U] = 0x300713U;
    vlSelf->top__DOT__imem__DOT__ram[5U] = 0xe78023U;
    vlSelf->top__DOT__imem__DOT__ram[6U] = 0x7b7U;
    vlSelf->top__DOT__imem__DOT__ram[7U] = 0x78793U;
    vlSelf->top__DOT__imem__DOT__ram[8U] = 0x7c703U;
    vlSelf->top__DOT__imem__DOT__ram[9U] = 0x7b7U;
    vlSelf->top__DOT__imem__DOT__ram[0xaU] = 0x78793U;
    vlSelf->top__DOT__imem__DOT__ram[0xbU] = 0x7c783U;
    vlSelf->top__DOT__imem__DOT__ram[0xcU] = 0x2f707b3U;
    vlSelf->top__DOT__imem__DOT__ram[0xdU] = 0xff7f713U;
    vlSelf->top__DOT__imem__DOT__ram[0xeU] = 0x7b7U;
    vlSelf->top__DOT__imem__DOT__ram[0xfU] = 0x78793U;
    vlSelf->top__DOT__imem__DOT__ram[0x10U] = 0xe780a3U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("top.v", 6, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
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

extern const VlUnpacked<CData/*7:0*/, 16> Vtop__ConstPool__TABLE_hae5aad9d_0;

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ top__DOT__franken_riscv__DOT____VdfgTmp_h55d43119__0;
    top__DOT__franken_riscv__DOT____VdfgTmp_h55d43119__0 = 0;
    CData/*0:0*/ top__DOT__franken_riscv__DOT____VdfgTmp_hb41df7b8__0;
    top__DOT__franken_riscv__DOT____VdfgTmp_hb41df7b8__0 = 0;
    CData/*0:0*/ top__DOT__alu_decoder__DOT____VdfgTmp_h9b725a6a__0;
    top__DOT__alu_decoder__DOT____VdfgTmp_h9b725a6a__0 = 0;
    CData/*0:0*/ top__DOT__alu_decoder__DOT____VdfgTmp_haa71103e__0;
    top__DOT__alu_decoder__DOT____VdfgTmp_haa71103e__0 = 0;
    CData/*0:0*/ top__DOT__alu_decoder__DOT____VdfgTmp_hdf511576__0;
    top__DOT__alu_decoder__DOT____VdfgTmp_hdf511576__0 = 0;
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*3:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*3:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*3:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*3:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*3:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*3:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    CData/*3:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    CData/*3:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    CData/*3:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    CData/*3:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    CData/*3:0*/ __Vtableidx13;
    __Vtableidx13 = 0;
    CData/*3:0*/ __Vtableidx14;
    __Vtableidx14 = 0;
    CData/*3:0*/ __Vtableidx15;
    __Vtableidx15 = 0;
    CData/*3:0*/ __Vtableidx16;
    __Vtableidx16 = 0;
    CData/*3:0*/ __Vtableidx17;
    __Vtableidx17 = 0;
    CData/*3:0*/ __Vtableidx18;
    __Vtableidx18 = 0;
    CData/*3:0*/ __Vtableidx19;
    __Vtableidx19 = 0;
    CData/*3:0*/ __Vtableidx20;
    __Vtableidx20 = 0;
    VlWide<4>/*127:0*/ __Vtemp_54;
    VlWide<4>/*127:0*/ __Vtemp_68;
    VlWide<4>/*127:0*/ __Vtemp_82;
    VlWide<4>/*127:0*/ __Vtemp_97;
    VlWide<4>/*127:0*/ __Vtemp_107;
    // Body
    vlSelf->top__DOT__franken_riscv__DOT__U_type = 
        ((0x37U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
         | (0x17U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)));
    __Vtableidx13 = (0xfU & vlSelf->top__DOT__write_reg);
    vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder4_1____pinNumber2 
        = Vtop__ConstPool__TABLE_hae5aad9d_0[__Vtableidx13];
    __Vtableidx14 = (0xfU & (vlSelf->top__DOT__write_reg 
                             >> 4U));
    vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder4_2____pinNumber2 
        = Vtop__ConstPool__TABLE_hae5aad9d_0[__Vtableidx14];
    __Vtableidx15 = (0xfU & (vlSelf->top__DOT__write_reg 
                             >> 8U));
    vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder4_3____pinNumber2 
        = Vtop__ConstPool__TABLE_hae5aad9d_0[__Vtableidx15];
    __Vtableidx16 = (0xfU & (vlSelf->top__DOT__write_reg 
                             >> 0xcU));
    vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder4_4____pinNumber2 
        = Vtop__ConstPool__TABLE_hae5aad9d_0[__Vtableidx16];
    __Vtableidx17 = (0xfU & (vlSelf->top__DOT__write_reg 
                             >> 0x10U));
    vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder4_5____pinNumber2 
        = Vtop__ConstPool__TABLE_hae5aad9d_0[__Vtableidx17];
    __Vtableidx18 = (0xfU & (vlSelf->top__DOT__write_reg 
                             >> 0x14U));
    vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder4_6____pinNumber2 
        = Vtop__ConstPool__TABLE_hae5aad9d_0[__Vtableidx18];
    __Vtableidx19 = (0xfU & (vlSelf->top__DOT__write_reg 
                             >> 0x18U));
    vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder4_7____pinNumber2 
        = Vtop__ConstPool__TABLE_hae5aad9d_0[__Vtableidx19];
    __Vtableidx20 = (vlSelf->top__DOT__write_reg >> 0x1cU);
    vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder4_8____pinNumber2 
        = Vtop__ConstPool__TABLE_hae5aad9d_0[__Vtableidx20];
    vlSelf->top__DOT__franken_riscv__DOT__funct7 = 
        ((0x33U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode))
          ? (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7_)
          : 0U);
    vlSelf->top__DOT__franken_riscv__DOT__I_type = 
        ((0x67U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
         | ((3U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
            | (0x13U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode))));
    vlSelf->top__DOT__instruction = vlSelf->top__DOT__imem__DOT__ram
        [(0x7fU & (vlSelf->top__DOT__pc >> 2U))];
    top__DOT__franken_riscv__DOT____VdfgTmp_hb41df7b8__0 
        = ((0x23U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
           | (0x63U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)));
    vlSelf->top__DOT__alu_decoder__DOT__RD_ = (((QData)((IData)(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder4_8____pinNumber2)) 
                                                << 0x38U) 
                                               | (((QData)((IData)(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder4_7____pinNumber2)) 
                                                   << 0x30U) 
                                                  | (((QData)((IData)(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder4_6____pinNumber2)) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder4_5____pinNumber2)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          (((IData)(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder4_4____pinNumber2) 
                                                                            << 0x18U) 
                                                                           | (((IData)(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder4_3____pinNumber2) 
                                                                               << 0x10U) 
                                                                              | (((IData)(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder4_2____pinNumber2) 
                                                                                << 8U) 
                                                                                | (IData)(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder4_1____pinNumber2))))))))));
    vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_he18098c8__0 
        = ((0U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7)) 
           & (0x13U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)));
    top__DOT__franken_riscv__DOT____VdfgTmp_h55d43119__0 
        = ((0x33U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
           | (IData)(vlSelf->top__DOT__franken_riscv__DOT__I_type));
    vlSelf->top__DOT__alu_decoder__DOT__funct7 = ((0x33U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->top__DOT__instruction))
                                                   ? 
                                                  (vlSelf->top__DOT__instruction 
                                                   >> 0x19U)
                                                   : 0U);
    vlSelf->top__DOT__alu_decoder__DOT__U_type = ((0x37U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->top__DOT__instruction)) 
                                                  | (0x17U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->top__DOT__instruction)));
    vlSelf->top__DOT__alu_decoder__DOT__I_type = ((0x67U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->top__DOT__instruction)) 
                                                  | ((3U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->top__DOT__instruction)) 
                                                     | (0x13U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->top__DOT__instruction))));
    vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_hf167f6a7__0 
        = ((0x33U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
           | (IData)(top__DOT__franken_riscv__DOT____VdfgTmp_hb41df7b8__0));
    vlSelf->top__DOT__franken_riscv__DOT__RD_Dec = 
        (((IData)(top__DOT__franken_riscv__DOT____VdfgTmp_h55d43119__0) 
          | ((IData)(vlSelf->top__DOT__franken_riscv__DOT__U_type) 
             | (0x6fU == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode))))
          ? (IData)(vlSelf->top__DOT__franken_riscv__DOT__rd_)
          : 0U);
    vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_he778bdb7__0 
        = ((IData)(top__DOT__franken_riscv__DOT____VdfgTmp_h55d43119__0) 
           | (IData)(top__DOT__franken_riscv__DOT____VdfgTmp_hb41df7b8__0));
    top__DOT__alu_decoder__DOT____VdfgTmp_hdf511576__0 
        = ((0U == (IData)(vlSelf->top__DOT__alu_decoder__DOT__funct7)) 
           & (0x13U == (0x7fU & vlSelf->top__DOT__instruction)));
    vlSelf->top__DOT__alu_decoder__DOT__funct3 = ((
                                                   (0x33U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->top__DOT__instruction)) 
                                                   | ((IData)(vlSelf->top__DOT__alu_decoder__DOT__I_type) 
                                                      | ((0x23U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->top__DOT__instruction)) 
                                                         | (0x63U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->top__DOT__instruction)))))
                                                   ? 
                                                  (7U 
                                                   & (vlSelf->top__DOT__instruction 
                                                      >> 0xcU))
                                                   : 0U);
    vlSelf->top__DOT__alu_decoder__DOT__imm = ((IData)(vlSelf->top__DOT__alu_decoder__DOT__I_type)
                                                ? (
                                                   ((- (IData)(
                                                               (vlSelf->top__DOT__instruction 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelf->top__DOT__instruction 
                                                      >> 0x14U))
                                                : (
                                                   (0x23U 
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
                                                    ((IData)(vlSelf->top__DOT__alu_decoder__DOT__U_type)
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
    if (vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_hf167f6a7__0) {
        __Vtableidx3 = (0xfU & (IData)(vlSelf->top__DOT__franken_riscv__DOT__rs2));
        vlSelf->top__DOT__RS2 = vlSelf->top__DOT__franken_riscv__DOT__rs2;
    } else {
        __Vtableidx3 = 0U;
        vlSelf->top__DOT__RS2 = 0U;
    }
    vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder2_1____pinNumber2 
        = Vtop__ConstPool__TABLE_hae5aad9d_0[__Vtableidx3];
    __Vtableidx4 = ((IData)(vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_hf167f6a7__0) 
                    & ((IData)(vlSelf->top__DOT__franken_riscv__DOT__rs2) 
                       >> 4U));
    vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder2_2____pinNumber2 
        = Vtop__ConstPool__TABLE_hae5aad9d_0[__Vtableidx4];
    if (vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_he778bdb7__0) {
        __Vtableidx1 = (0xfU & (IData)(vlSelf->top__DOT__franken_riscv__DOT__rs1));
        vlSelf->top__DOT__RS1 = vlSelf->top__DOT__franken_riscv__DOT__rs1;
        vlSelf->top__DOT__franken_riscv__DOT__funct3 
            = vlSelf->top__DOT__franken_riscv__DOT__funct3_;
    } else {
        __Vtableidx1 = 0U;
        vlSelf->top__DOT__RS1 = 0U;
        vlSelf->top__DOT__franken_riscv__DOT__funct3 = 0U;
    }
    vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder1_1____pinNumber2 
        = Vtop__ConstPool__TABLE_hae5aad9d_0[__Vtableidx1];
    __Vtableidx2 = ((IData)(vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_he778bdb7__0) 
                    & ((IData)(vlSelf->top__DOT__franken_riscv__DOT__rs1) 
                       >> 4U));
    vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder1_2____pinNumber2 
        = Vtop__ConstPool__TABLE_hae5aad9d_0[__Vtableidx2];
    vlSelf->top__DOT__alu_decoder__DOT__is_jalr = (
                                                   (0U 
                                                    == (IData)(vlSelf->top__DOT__alu_decoder__DOT__funct3)) 
                                                   & (0x67U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->top__DOT__instruction)));
    top__DOT__alu_decoder__DOT____VdfgTmp_h9b725a6a__0 
        = ((0x33U == (0x7fU & vlSelf->top__DOT__instruction)) 
           & (0U == (IData)(vlSelf->top__DOT__alu_decoder__DOT__funct3)));
    top__DOT__alu_decoder__DOT____VdfgTmp_haa71103e__0 
        = ((0x33U == (0x7fU & vlSelf->top__DOT__instruction)) 
           & (5U == (IData)(vlSelf->top__DOT__alu_decoder__DOT__funct3)));
    __Vtableidx5 = (0xfU & vlSelf->top__DOT__alu_decoder__DOT__imm);
    vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder3_1____pinNumber2 
        = Vtop__ConstPool__TABLE_hae5aad9d_0[__Vtableidx5];
    __Vtableidx6 = (0xfU & (vlSelf->top__DOT__alu_decoder__DOT__imm 
                            >> 4U));
    vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder3_2____pinNumber2 
        = Vtop__ConstPool__TABLE_hae5aad9d_0[__Vtableidx6];
    __Vtableidx7 = (0xfU & (vlSelf->top__DOT__alu_decoder__DOT__imm 
                            >> 8U));
    vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder3_3____pinNumber2 
        = Vtop__ConstPool__TABLE_hae5aad9d_0[__Vtableidx7];
    __Vtableidx8 = (0xfU & (vlSelf->top__DOT__alu_decoder__DOT__imm 
                            >> 0xcU));
    vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder3_4____pinNumber2 
        = Vtop__ConstPool__TABLE_hae5aad9d_0[__Vtableidx8];
    __Vtableidx9 = (0xfU & (vlSelf->top__DOT__alu_decoder__DOT__imm 
                            >> 0x10U));
    vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder3_5____pinNumber2 
        = Vtop__ConstPool__TABLE_hae5aad9d_0[__Vtableidx9];
    __Vtableidx10 = (0xfU & (vlSelf->top__DOT__alu_decoder__DOT__imm 
                             >> 0x14U));
    vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder3_6____pinNumber2 
        = Vtop__ConstPool__TABLE_hae5aad9d_0[__Vtableidx10];
    __Vtableidx11 = (0xfU & (vlSelf->top__DOT__alu_decoder__DOT__imm 
                             >> 0x18U));
    vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder3_7____pinNumber2 
        = Vtop__ConstPool__TABLE_hae5aad9d_0[__Vtableidx11];
    __Vtableidx12 = (vlSelf->top__DOT__alu_decoder__DOT__imm 
                     >> 0x1cU);
    vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder3_8____pinNumber2 
        = Vtop__ConstPool__TABLE_hae5aad9d_0[__Vtableidx12];
    vlSelf->__VdfgTmp_hcd850c4e__0 = vlSelf->top__DOT__regs__DOT__rf
        [vlSelf->top__DOT__RS2];
    vlSelf->__VdfgTmp_hc9ae597d__0 = vlSelf->top__DOT__regs__DOT__rf
        [vlSelf->top__DOT__RS1];
    vlSelf->top__DOT__franken_riscv__DOT__is_sb = (
                                                   (0x23U 
                                                    == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
                                                   & (0U 
                                                      == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)));
    vlSelf->top__DOT__franken_riscv__DOT__is_sh = (
                                                   (0x23U 
                                                    == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
                                                   & (1U 
                                                      == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)));
    vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_h154cd026__0 
        = ((0x33U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
           & (0U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)));
    vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_he89c683e__0 
        = ((0x33U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
           & (5U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)));
    vlSelf->top__DOT__franken_riscv__DOT__is_mul = 
        ((0x33U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
         & ((0U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
            & (1U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7))));
    vlSelf->top__DOT__franken_riscv__DOT__is_mulhu 
        = ((0x33U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
           & ((3U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
              & (1U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7))));
    vlSelf->top__DOT__franken_riscv__DOT__is_lb = (
                                                   (0U 
                                                    == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                                                   & (3U 
                                                      == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)));
    vlSelf->top__DOT__franken_riscv__DOT__is_lbu = 
        ((4U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
         & (3U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)));
    vlSelf->top__DOT__franken_riscv__DOT__is_lh = (
                                                   (1U 
                                                    == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                                                   & (3U 
                                                      == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)));
    vlSelf->top__DOT__franken_riscv__DOT__is_lhu = 
        ((5U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
         & (3U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)));
    vlSelf->top__DOT__franken_riscv__DOT__is_lw = (
                                                   (2U 
                                                    == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                                                   & (3U 
                                                      == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)));
    vlSelf->top__DOT__franken_riscv__DOT__is_mulh = 
        ((0x33U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
         & ((1U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
            & (1U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7))));
    vlSelf->top__DOT__franken_riscv__DOT__is_mulhsu 
        = ((0x33U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
           & ((2U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
              & (1U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7))));
    vlSelf->top__DOT__franken_riscv__DOT__is_jalr = 
        ((0U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
         & (0x67U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)));
    vlSelf->top__DOT__franken_riscv__DOT__is_beq = 
        ((0x63U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
         & (0U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)));
    vlSelf->top__DOT__franken_riscv__DOT__is_bne = 
        ((0x63U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
         & (1U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)));
    vlSelf->top__DOT__franken_riscv__DOT__is_blt = 
        ((0x63U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
         & (4U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)));
    vlSelf->top__DOT__franken_riscv__DOT__is_bge = 
        ((0x63U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
         & (5U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)));
    vlSelf->top__DOT__franken_riscv__DOT__is_bgeu = 
        ((0x63U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
         & (7U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)));
    if (((0x63U == (0x7fU & vlSelf->top__DOT__instruction)) 
         & (0U == (IData)(vlSelf->top__DOT__alu_decoder__DOT__funct3)))) {
        __Vtemp_54[0U] = 0x3d005232U;
        __Vtemp_54[1U] = 0x5231003dU;
        __Vtemp_54[2U] = 0x42455100U;
        __Vtemp_54[3U] = 0U;
    } else if (((0x63U == (0x7fU & vlSelf->top__DOT__instruction)) 
                & (4U == (IData)(vlSelf->top__DOT__alu_decoder__DOT__funct3)))) {
        __Vtemp_54[0U] = 0x3c005232U;
        __Vtemp_54[1U] = 0x523100U;
        __Vtemp_54[2U] = 0x424c54U;
        __Vtemp_54[3U] = 0U;
    } else if (((0x63U == (0x7fU & vlSelf->top__DOT__instruction)) 
                & (1U == (IData)(vlSelf->top__DOT__alu_decoder__DOT__funct3)))) {
        __Vtemp_54[0U] = 0x3d005232U;
        __Vtemp_54[1U] = 0x52310021U;
        __Vtemp_54[2U] = 0x424e4500U;
        __Vtemp_54[3U] = 0U;
    } else if (((0x63U == (0x7fU & vlSelf->top__DOT__instruction)) 
                & (6U == (IData)(vlSelf->top__DOT__alu_decoder__DOT__funct3)))) {
        __Vtemp_54[0U] = 0x2b5232U;
        __Vtemp_54[1U] = 0x5231003cU;
        __Vtemp_54[2U] = 0x5455002bU;
        __Vtemp_54[3U] = 0x424cU;
    } else if (((0x63U == (0x7fU & vlSelf->top__DOT__instruction)) 
                & (7U == (IData)(vlSelf->top__DOT__alu_decoder__DOT__funct3)))) {
        __Vtemp_54[0U] = 0x2b5232U;
        __Vtemp_54[1U] = 0x31003e3dU;
        __Vtemp_54[2U] = 0x55002b52U;
        __Vtemp_54[3U] = 0x424745U;
    } else if ((0x17U == (0x7fU & vlSelf->top__DOT__instruction))) {
        __Vtemp_54[0U] = 0x55495043U;
        __Vtemp_54[1U] = 0x41U;
        __Vtemp_54[2U] = 0U;
        __Vtemp_54[3U] = 0U;
    } else if ((0x37U == (0x7fU & vlSelf->top__DOT__instruction))) {
        __Vtemp_54[0U] = 0x494d4dU;
        __Vtemp_54[1U] = 0x4c5549U;
        __Vtemp_54[2U] = 0U;
        __Vtemp_54[3U] = 0U;
    } else {
        if ((0x6fU == (0x7fU & vlSelf->top__DOT__instruction))) {
            __Vtemp_54[0U] = 0x494d4dU;
            __Vtemp_54[1U] = 0x5043002bU;
            __Vtemp_54[2U] = 0x4a414c00U;
        } else {
            __Vtemp_54[0U] = 0U;
            __Vtemp_54[1U] = 0U;
            __Vtemp_54[2U] = 0U;
        }
        __Vtemp_54[3U] = 0U;
    }
    if (((1U == (IData)(vlSelf->top__DOT__alu_decoder__DOT__funct3)) 
         & (IData)(top__DOT__alu_decoder__DOT____VdfgTmp_hdf511576__0))) {
        __Vtemp_68[0U] = 0x494d4dU;
        __Vtemp_68[1U] = 0x31003c3cU;
        __Vtemp_68[2U] = 0x4c490052U;
        __Vtemp_68[3U] = 0x534cU;
    } else if (((5U == (IData)(vlSelf->top__DOT__alu_decoder__DOT__funct3)) 
                & (IData)(top__DOT__alu_decoder__DOT____VdfgTmp_hdf511576__0))) {
        __Vtemp_68[0U] = 0x494d4dU;
        __Vtemp_68[1U] = 0x31003e3eU;
        __Vtemp_68[2U] = 0x4c490052U;
        __Vtemp_68[3U] = 0x5352U;
    } else if (((5U == (IData)(vlSelf->top__DOT__alu_decoder__DOT__funct3)) 
                & ((0x20U == (IData)(vlSelf->top__DOT__alu_decoder__DOT__funct7)) 
                   & (0x13U == (0x7fU & vlSelf->top__DOT__instruction))))) {
        __Vtemp_68[0U] = 0x494d4dU;
        __Vtemp_68[1U] = 0x3e3e3eU;
        __Vtemp_68[2U] = 0x49005231U;
        __Vtemp_68[3U] = 0x535241U;
    } else if (((0x23U == (0x7fU & vlSelf->top__DOT__instruction)) 
                & (2U == (IData)(vlSelf->top__DOT__alu_decoder__DOT__funct3)))) {
        __Vtemp_68[0U] = 0x62697473U;
        __Vtemp_68[1U] = 0x57003332U;
        __Vtemp_68[2U] = 0x53U;
        __Vtemp_68[3U] = 0U;
    } else if (((0x23U == (0x7fU & vlSelf->top__DOT__instruction)) 
                & (0U == (IData)(vlSelf->top__DOT__alu_decoder__DOT__funct3)))) {
        __Vtemp_68[0U] = 0x62697473U;
        __Vtemp_68[1U] = 0x53420038U;
        __Vtemp_68[2U] = 0U;
        __Vtemp_68[3U] = 0U;
    } else if (((0x23U == (0x7fU & vlSelf->top__DOT__instruction)) 
                & (1U == (IData)(vlSelf->top__DOT__alu_decoder__DOT__funct3)))) {
        __Vtemp_68[0U] = 0x62697473U;
        __Vtemp_68[1U] = 0x48003136U;
        __Vtemp_68[2U] = 0x53U;
        __Vtemp_68[3U] = 0U;
    } else if (((0x63U == (0x7fU & vlSelf->top__DOT__instruction)) 
                & (5U == (IData)(vlSelf->top__DOT__alu_decoder__DOT__funct3)))) {
        __Vtemp_68[0U] = 0x3d005232U;
        __Vtemp_68[1U] = 0x5231003eU;
        __Vtemp_68[2U] = 0x42474500U;
        __Vtemp_68[3U] = 0U;
    } else {
        __Vtemp_68[0U] = __Vtemp_54[0U];
        __Vtemp_68[1U] = __Vtemp_54[1U];
        __Vtemp_68[2U] = __Vtemp_54[2U];
        __Vtemp_68[3U] = __Vtemp_54[3U];
    }
    if (((5U == (IData)(vlSelf->top__DOT__alu_decoder__DOT__funct3)) 
         & (3U == (0x7fU & vlSelf->top__DOT__instruction)))) {
        __Vtemp_82[0U] = 0x62697473U;
        __Vtemp_82[1U] = 0x2b3136U;
        __Vtemp_82[2U] = 0x4c4855U;
        __Vtemp_82[3U] = 0U;
    } else if (((0U == (IData)(vlSelf->top__DOT__alu_decoder__DOT__funct3)) 
                & (0x13U == (0x7fU & vlSelf->top__DOT__instruction)))) {
        __Vtemp_82[0U] = 0x494d4dU;
        __Vtemp_82[1U] = 0x5231002bU;
        __Vtemp_82[2U] = 0x44444900U;
        __Vtemp_82[3U] = 0x41U;
    } else if (((2U == (IData)(vlSelf->top__DOT__alu_decoder__DOT__funct3)) 
                & (0x13U == (0x7fU & vlSelf->top__DOT__instruction)))) {
        __Vtemp_82[0U] = 0x494d4dU;
        __Vtemp_82[1U] = 0x5231003cU;
        __Vtemp_82[2U] = 0x4c544900U;
        __Vtemp_82[3U] = 0x53U;
    } else if (((3U == (IData)(vlSelf->top__DOT__alu_decoder__DOT__funct3)) 
                & (0x13U == (0x7fU & vlSelf->top__DOT__instruction)))) {
        __Vtemp_82[0U] = 0x2b494d4dU;
        __Vtemp_82[1U] = 0x31003c00U;
        __Vtemp_82[2U] = 0x49550052U;
        __Vtemp_82[3U] = 0x534c54U;
    } else if (((4U == (IData)(vlSelf->top__DOT__alu_decoder__DOT__funct3)) 
                & (0x13U == (0x7fU & vlSelf->top__DOT__instruction)))) {
        __Vtemp_82[0U] = 0x494d4dU;
        __Vtemp_82[1U] = 0x5231005eU;
        __Vtemp_82[2U] = 0x4f524900U;
        __Vtemp_82[3U] = 0x58U;
    } else if (((6U == (IData)(vlSelf->top__DOT__alu_decoder__DOT__funct3)) 
                & (0x13U == (0x7fU & vlSelf->top__DOT__instruction)))) {
        __Vtemp_82[0U] = 0x494d4dU;
        __Vtemp_82[1U] = 0x5231007cU;
        __Vtemp_82[2U] = 0x4f524900U;
        __Vtemp_82[3U] = 0U;
    } else if (((7U == (IData)(vlSelf->top__DOT__alu_decoder__DOT__funct3)) 
                & (0x13U == (0x7fU & vlSelf->top__DOT__instruction)))) {
        __Vtemp_82[0U] = 0x494d4dU;
        __Vtemp_82[1U] = 0x52310026U;
        __Vtemp_82[2U] = 0x4e444900U;
        __Vtemp_82[3U] = 0x41U;
    } else {
        __Vtemp_82[0U] = __Vtemp_68[0U];
        __Vtemp_82[1U] = __Vtemp_68[1U];
        __Vtemp_82[2U] = __Vtemp_68[2U];
        __Vtemp_82[3U] = __Vtemp_68[3U];
    }
    if (((0x33U == (0x7fU & vlSelf->top__DOT__instruction)) 
         & ((2U == (IData)(vlSelf->top__DOT__alu_decoder__DOT__funct3)) 
            & (0U == (IData)(vlSelf->top__DOT__alu_decoder__DOT__funct7))))) {
        __Vtemp_97[0U] = 0x3c005232U;
        __Vtemp_97[1U] = 0x523100U;
        __Vtemp_97[2U] = 0x534c54U;
        __Vtemp_97[3U] = 0U;
    } else if (((IData)(top__DOT__alu_decoder__DOT____VdfgTmp_haa71103e__0) 
                & (0U == (IData)(vlSelf->top__DOT__alu_decoder__DOT__funct7)))) {
        __Vtemp_97[0U] = 0x3e005232U;
        __Vtemp_97[1U] = 0x523100U;
        __Vtemp_97[2U] = 0x53524cU;
        __Vtemp_97[3U] = 0U;
    } else if (((IData)(top__DOT__alu_decoder__DOT____VdfgTmp_haa71103e__0) 
                & (0x20U == (IData)(vlSelf->top__DOT__alu_decoder__DOT__funct7)))) {
        __Vtemp_97[0U] = 0x3e005232U;
        __Vtemp_97[1U] = 0x31003e3eU;
        __Vtemp_97[2U] = 0x52410052U;
        __Vtemp_97[3U] = 0x53U;
    } else if (vlSelf->top__DOT__alu_decoder__DOT__is_jalr) {
        __Vtemp_97[0U] = 0x494d4dU;
        __Vtemp_97[1U] = 0x5231002bU;
        __Vtemp_97[2U] = 0x5250432bU;
        __Vtemp_97[3U] = 0x4a414cU;
    } else if (((0U == (IData)(vlSelf->top__DOT__alu_decoder__DOT__funct3)) 
                & (3U == (0x7fU & vlSelf->top__DOT__instruction)))) {
        __Vtemp_97[0U] = 0x62697473U;
        __Vtemp_97[1U] = 0x4c420038U;
        __Vtemp_97[2U] = 0U;
        __Vtemp_97[3U] = 0U;
    } else if (((1U == (IData)(vlSelf->top__DOT__alu_decoder__DOT__funct3)) 
                & (3U == (0x7fU & vlSelf->top__DOT__instruction)))) {
        __Vtemp_97[0U] = 0x62697473U;
        __Vtemp_97[1U] = 0x48003136U;
        __Vtemp_97[2U] = 0x4cU;
        __Vtemp_97[3U] = 0U;
    } else if (((2U == (IData)(vlSelf->top__DOT__alu_decoder__DOT__funct3)) 
                & (3U == (0x7fU & vlSelf->top__DOT__instruction)))) {
        __Vtemp_97[0U] = 0x62697473U;
        __Vtemp_97[1U] = 0x57003332U;
        __Vtemp_97[2U] = 0x4cU;
        __Vtemp_97[3U] = 0U;
    } else if (((4U == (IData)(vlSelf->top__DOT__alu_decoder__DOT__funct3)) 
                & (3U == (0x7fU & vlSelf->top__DOT__instruction)))) {
        __Vtemp_97[0U] = 0x62697473U;
        __Vtemp_97[1U] = 0x55002b38U;
        __Vtemp_97[2U] = 0x4c42U;
        __Vtemp_97[3U] = 0U;
    } else {
        __Vtemp_97[0U] = __Vtemp_82[0U];
        __Vtemp_97[1U] = __Vtemp_82[1U];
        __Vtemp_97[2U] = __Vtemp_82[2U];
        __Vtemp_97[3U] = __Vtemp_82[3U];
    }
    if (((0x33U == (0x7fU & vlSelf->top__DOT__instruction)) 
         & ((4U == (IData)(vlSelf->top__DOT__alu_decoder__DOT__funct3)) 
            & (0U == (IData)(vlSelf->top__DOT__alu_decoder__DOT__funct7))))) {
        __Vtemp_107[0U] = 0x52323aU;
        __Vtemp_107[1U] = 0x5231005eU;
        __Vtemp_107[2U] = 0x584f5200U;
        __Vtemp_107[3U] = 0U;
    } else if (((0x33U == (0x7fU & vlSelf->top__DOT__instruction)) 
                & ((6U == (IData)(vlSelf->top__DOT__alu_decoder__DOT__funct3)) 
                   & (0U == (IData)(vlSelf->top__DOT__alu_decoder__DOT__funct7))))) {
        __Vtemp_107[0U] = 0x52323aU;
        __Vtemp_107[1U] = 0x5231007cU;
        __Vtemp_107[2U] = 0x4f5200U;
        __Vtemp_107[3U] = 0U;
    } else if (((0x33U == (0x7fU & vlSelf->top__DOT__instruction)) 
                & ((7U == (IData)(vlSelf->top__DOT__alu_decoder__DOT__funct3)) 
                   & (0U == (IData)(vlSelf->top__DOT__alu_decoder__DOT__funct7))))) {
        __Vtemp_107[0U] = 0x52323aU;
        __Vtemp_107[1U] = 0x52310026U;
        __Vtemp_107[2U] = 0x414e4400U;
        __Vtemp_107[3U] = 0U;
    } else if (((0x33U == (0x7fU & vlSelf->top__DOT__instruction)) 
                & ((3U == (IData)(vlSelf->top__DOT__alu_decoder__DOT__funct3)) 
                   & (0U == (IData)(vlSelf->top__DOT__alu_decoder__DOT__funct7))))) {
        __Vtemp_107[0U] = 0x2b5232U;
        __Vtemp_107[1U] = 0x5231003cU;
        __Vtemp_107[2U] = 0x4c545500U;
        __Vtemp_107[3U] = 0x53U;
    } else if (((0x33U == (0x7fU & vlSelf->top__DOT__instruction)) 
                & ((1U == (IData)(vlSelf->top__DOT__alu_decoder__DOT__funct3)) 
                   & (0U == (IData)(vlSelf->top__DOT__alu_decoder__DOT__funct7))))) {
        __Vtemp_107[0U] = 0x3c005232U;
        __Vtemp_107[1U] = 0x52313cU;
        __Vtemp_107[2U] = 0x534c4cU;
        __Vtemp_107[3U] = 0U;
    } else {
        __Vtemp_107[0U] = __Vtemp_97[0U];
        __Vtemp_107[1U] = __Vtemp_97[1U];
        __Vtemp_107[2U] = __Vtemp_97[2U];
        __Vtemp_107[3U] = __Vtemp_97[3U];
    }
    if (((IData)(top__DOT__alu_decoder__DOT____VdfgTmp_h9b725a6a__0) 
         & (0U == (IData)(vlSelf->top__DOT__alu_decoder__DOT__funct7)))) {
        vlSelf->top__DOT__alu_decoder__DOT__hex_code[0U] = 0x52323aU;
        vlSelf->top__DOT__alu_decoder__DOT__hex_code[1U] = 0x5231002bU;
        vlSelf->top__DOT__alu_decoder__DOT__hex_code[2U] = 0x41444400U;
        vlSelf->top__DOT__alu_decoder__DOT__hex_code[3U] = 0U;
    } else if (((IData)(top__DOT__alu_decoder__DOT____VdfgTmp_h9b725a6a__0) 
                & (0x20U == (IData)(vlSelf->top__DOT__alu_decoder__DOT__funct7)))) {
        vlSelf->top__DOT__alu_decoder__DOT__hex_code[0U] = 0x52323aU;
        vlSelf->top__DOT__alu_decoder__DOT__hex_code[1U] = 0x5231002dU;
        vlSelf->top__DOT__alu_decoder__DOT__hex_code[2U] = 0x53554200U;
        vlSelf->top__DOT__alu_decoder__DOT__hex_code[3U] = 0U;
    } else {
        vlSelf->top__DOT__alu_decoder__DOT__hex_code[0U] 
            = __Vtemp_107[0U];
        vlSelf->top__DOT__alu_decoder__DOT__hex_code[1U] 
            = __Vtemp_107[1U];
        vlSelf->top__DOT__alu_decoder__DOT__hex_code[2U] 
            = __Vtemp_107[2U];
        vlSelf->top__DOT__alu_decoder__DOT__hex_code[3U] 
            = __Vtemp_107[3U];
    }
    vlSelf->top__DOT__src2 = ((0U == (IData)(vlSelf->top__DOT__RS2))
                               ? 0U : vlSelf->__VdfgTmp_hcd850c4e__0);
    vlSelf->top__DOT__src1 = ((0U == (IData)(vlSelf->top__DOT__RS1))
                               ? 0U : vlSelf->__VdfgTmp_hc9ae597d__0);
    vlSelf->top__DOT__franken_riscv__DOT__mem_read_Dec 
        = ((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_lb) 
           | ((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_lbu) 
              | ((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_lh) 
                 | ((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_lhu) 
                    | (IData)(vlSelf->top__DOT__franken_riscv__DOT__is_lw)))));
    vlSelf->top__DOT__franken_riscv__DOT__is_conditional_jump_Dec 
        = ((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_beq) 
           | ((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_bne) 
              | ((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_blt) 
                 | ((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_bge) 
                    | ((0x6fU == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
                       | ((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_jalr) 
                          | (IData)(vlSelf->top__DOT__franken_riscv__DOT__is_bgeu)))))));
    vlSelf->top__DOT__franken_riscv__DOT__src2_forward 
        = ((2U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__Fwd_B))
            ? vlSelf->top__DOT__franken_riscv__DOT__alu_result_Mem
            : ((1U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__Fwd_B))
                ? vlSelf->top__DOT__write_reg : vlSelf->top__DOT__src2));
    vlSelf->top__DOT__franken_riscv__DOT__src1_forward 
        = ((2U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__Fwd_A))
            ? vlSelf->top__DOT__franken_riscv__DOT__alu_result_Mem
            : ((1U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__Fwd_A))
                ? vlSelf->top__DOT__write_reg : vlSelf->top__DOT__src1));
    vlSelf->top__DOT__franken_riscv__DOT__result_mul 
        = VL_MULS_QQQ(64, VL_EXTENDS_QQ(64,33, (((QData)((IData)(
                                                                 ((0U 
                                                                   != (IData)(vlSelf->top__DOT__RS1)) 
                                                                  & ((vlSelf->__VdfgTmp_hc9ae597d__0 
                                                                      >> 0x1fU) 
                                                                     & (IData)(vlSelf->top__DOT__franken_riscv__DOT__is_mulh))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->top__DOT__src1)))), 
                      VL_EXTENDS_QQ(64,33, (((QData)((IData)(
                                                             ((0U 
                                                               != (IData)(vlSelf->top__DOT__RS2)) 
                                                              & ((vlSelf->__VdfgTmp_hcd850c4e__0 
                                                                  >> 0x1fU) 
                                                                 & ((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_mulh) 
                                                                    | (IData)(vlSelf->top__DOT__franken_riscv__DOT__is_mulhsu)))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->top__DOT__src2)))));
    vlSelf->top__DOT__franken_riscv__DOT__next_pc = 
        ((7U == (IData)(vlSelf->top__DOT__power_on_reset__DOT__q))
          ? ((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_conditional_jump_Dec)
              ? vlSelf->top__DOT__franken_riscv__DOT__jump_add_Exec
              : ((IData)(vlSelf->top__DOT__franken_riscv__DOT__stall_Exec)
                  ? vlSelf->top__DOT__pc : ((IData)(4U) 
                                            + vlSelf->top__DOT__pc)))
          : 0U);
}

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

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
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge top.clk_div1)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge top.clk_div2)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge top.clk_div3)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge top.clk_div4)\n");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(negedge top.clk_div4)\n");
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @([changed] clk)\n");
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
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge top.clk_div1)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge top.clk_div2)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge top.clk_div3)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge top.clk_div4)\n");
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(negedge top.clk_div4)\n");
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @([changed] clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__instruction = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__write_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__write_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__src1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__src2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__reg_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__TXD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__byte_enable = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__RS1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__RS2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__RD = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__out_decoder1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__out_decoder2);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__out_decoder3);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__out_decoder4);
    vlSelf->top__DOT__clk_div1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__clk_div2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__clk_div3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__clk_div4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__power_on_reset__DOT__q = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__franken_riscv__DOT__is_conditional_jump_Exec = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__franken_riscv__DOT__mem_write_Exec = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__franken_riscv__DOT__mem_read_Exec = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__franken_riscv__DOT__reg_write_Exec = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__franken_riscv__DOT__RD_Exec = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__franken_riscv__DOT__jump_add_Exec = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__franken_riscv__DOT__src2_Exec = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__franken_riscv__DOT__mem_read_Mem = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__franken_riscv__DOT__reg_write_Mem = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__franken_riscv__DOT__alu_result_Mem = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__franken_riscv__DOT__data_load = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__franken_riscv__DOT__RD_Mem = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__franken_riscv__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__franken_riscv__DOT__funct7_ = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__franken_riscv__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__franken_riscv__DOT__rd_ = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__franken_riscv__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__franken_riscv__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__franken_riscv__DOT__funct3_ = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__franken_riscv__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__franken_riscv__DOT__pc_dec = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__franken_riscv__DOT__Fwd_A = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__franken_riscv__DOT__Fwd_B = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__franken_riscv__DOT__stall_Exec = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__franken_riscv__DOT__stall_Mem = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__franken_riscv__DOT__stall_WB = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__franken_riscv__DOT__is_mul = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__franken_riscv__DOT__is_mulh = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__franken_riscv__DOT__is_mulhsu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__franken_riscv__DOT__is_mulhu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__franken_riscv__DOT__I_type = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__franken_riscv__DOT__is_jalr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__franken_riscv__DOT__is_lb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__franken_riscv__DOT__is_lh = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__franken_riscv__DOT__is_lw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__franken_riscv__DOT__is_lbu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__franken_riscv__DOT__is_lhu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__franken_riscv__DOT__is_sb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__franken_riscv__DOT__is_sh = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__franken_riscv__DOT__is_bge = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__franken_riscv__DOT__is_beq = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__franken_riscv__DOT__is_blt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__franken_riscv__DOT__is_bne = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__franken_riscv__DOT__is_bgeu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__franken_riscv__DOT__U_type = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__franken_riscv__DOT__RD_Dec = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__franken_riscv__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__franken_riscv__DOT__funct7 = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__franken_riscv__DOT__is_conditional_jump_Dec = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__franken_riscv__DOT__mem_read_Dec = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__franken_riscv__DOT__src1_forward = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__franken_riscv__DOT__src2_forward = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__franken_riscv__DOT__result_mul = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_he778bdb7__0 = 0;
    vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_hf167f6a7__0 = 0;
    vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_h154cd026__0 = 0;
    vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_he89c683e__0 = 0;
    vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_he18098c8__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->top__DOT__imem__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 50; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->top__DOT__blockram__DOT__ram[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    vlSelf->top__DOT__blockram__DOT__data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__blockram__DOT____Vlvbound_h02f7a360__0 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__blockram__DOT____Vlvbound_h02f7a39d__0 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__blockram__DOT____Vlvbound_h02f7a2de__0 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__blockram__DOT____Vlvbound_h02f7a91a__0 = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__regs__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    VL_RAND_RESET_W(128, vlSelf->top__DOT__alu_decoder__DOT__hex_code);
    vlSelf->top__DOT__alu_decoder__DOT__RD_ = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder1_1____pinNumber2 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder1_2____pinNumber2 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder2_1____pinNumber2 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder2_2____pinNumber2 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder3_1____pinNumber2 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder3_2____pinNumber2 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder3_3____pinNumber2 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder3_4____pinNumber2 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder3_5____pinNumber2 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder3_6____pinNumber2 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder3_7____pinNumber2 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder3_8____pinNumber2 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder4_1____pinNumber2 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder4_2____pinNumber2 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder4_3____pinNumber2 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder4_4____pinNumber2 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder4_5____pinNumber2 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder4_6____pinNumber2 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder4_7____pinNumber2 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder4_8____pinNumber2 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__alu_decoder__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__alu_decoder__DOT__funct7 = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__alu_decoder__DOT__I_type = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__alu_decoder__DOT__U_type = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__alu_decoder__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__alu_decoder__DOT__is_jalr = VL_RAND_RESET_I(1);
    vlSelf->__VdfgTmp_hc9ae597d__0 = 0;
    vlSelf->__VdfgTmp_hcd850c4e__0 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__blockram__DOT__ram__v0 = 0;
    vlSelf->__Vdlyvval__top__DOT__blockram__DOT__ram__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__top__DOT__blockram__DOT__ram__v0 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__blockram__DOT__ram__v1 = 0;
    vlSelf->__Vdlyvval__top__DOT__blockram__DOT__ram__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__top__DOT__blockram__DOT__ram__v1 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__blockram__DOT__ram__v2 = 0;
    vlSelf->__Vdlyvval__top__DOT__blockram__DOT__ram__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__top__DOT__blockram__DOT__ram__v2 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__blockram__DOT__ram__v3 = 0;
    vlSelf->__Vdlyvval__top__DOT__blockram__DOT__ram__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__top__DOT__blockram__DOT__ram__v3 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__clk_div1__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__clk_div2__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__clk_div3__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__clk_div4__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
