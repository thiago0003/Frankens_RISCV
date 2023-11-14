// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__read_data = ((1U & vlSelf->top__DOT__addr_vga)
                                    ? (IData)(vlSelf->CLOCK_50)
                                    : vlSelf->top__DOT__dmem__DOT__RAM
                                   [(0x1ffU & (vlSelf->top__DOT__write_data 
                                               >> 2U))]);
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->VGA_CLK = (1U & (~ (IData)(vlSelf->VGA_CLK)));
    vlSelf->top__DOT__pc = vlSelf->top__DOT__franken_riscv__DOT__next_pc;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Init
    SData/*9:0*/ __Vdly__top__DOT__video__DOT__CounterX;
    __Vdly__top__DOT__video__DOT__CounterX = 0;
    SData/*9:0*/ __Vdly__top__DOT__video__DOT__CounterY;
    __Vdly__top__DOT__video__DOT__CounterY = 0;
    // Body
    __Vdly__top__DOT__video__DOT__CounterY = vlSelf->top__DOT__video__DOT__CounterY;
    __Vdly__top__DOT__video__DOT__CounterX = vlSelf->top__DOT__video__DOT__CounterX;
    vlSelf->top__DOT__power_on_reset__DOT__q = (1U 
                                                | (6U 
                                                   & ((IData)(vlSelf->top__DOT__power_on_reset__DOT__q) 
                                                      << 1U)));
    if ((0x320U == (IData)(vlSelf->top__DOT__video__DOT__CounterX))) {
        __Vdly__top__DOT__video__DOT__CounterY = ((IData)(vlSelf->top__DOT__video__DOT__CounterYmaxed)
                                                   ? 0U
                                                   : 
                                                  (0x3ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__video__DOT__CounterY))));
    }
    __Vdly__top__DOT__video__DOT__CounterX = ((IData)(vlSelf->top__DOT__video__DOT__CounterXmaxed)
                                               ? 0U
                                               : (0x3ffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__video__DOT__CounterX))));
    vlSelf->VGA_VS = (1U & (~ (IData)(vlSelf->top__DOT__video__DOT__vga_VS)));
    vlSelf->VGA_HS = (1U & (~ (IData)(vlSelf->top__DOT__video__DOT__vga_HS)));
    vlSelf->top__DOT__video__DOT__inDisplayArea = vlSelf->top__DOT__video__DOT__inDisplayAreaPrev;
    vlSelf->top__DOT__video__DOT__vga_VS = ((0x1eaU 
                                             < (IData)(vlSelf->top__DOT__video__DOT__CounterY)) 
                                            & (0x1ecU 
                                               > (IData)(vlSelf->top__DOT__video__DOT__CounterY)));
    vlSelf->top__DOT__video__DOT__vga_HS = ((0x290U 
                                             < (IData)(vlSelf->top__DOT__video__DOT__CounterX)) 
                                            & (0x2f0U 
                                               > (IData)(vlSelf->top__DOT__video__DOT__CounterX)));
    vlSelf->top__DOT__video__DOT__inDisplayAreaPrev 
        = ((0x280U > (IData)(vlSelf->top__DOT__video__DOT__CounterX)) 
           & (0x1e0U > (IData)(vlSelf->top__DOT__video__DOT__CounterY)));
    vlSelf->top__DOT__video__DOT__CounterY = __Vdly__top__DOT__video__DOT__CounterY;
    vlSelf->top__DOT__video__DOT__CounterX = __Vdly__top__DOT__video__DOT__CounterX;
    vlSelf->top__DOT__video__DOT__CounterYmaxed = (0x20dU 
                                                   == (IData)(vlSelf->top__DOT__video__DOT__CounterY));
    vlSelf->top__DOT__video__DOT__CounterXmaxed = (0x320U 
                                                   == (IData)(vlSelf->top__DOT__video__DOT__CounterX));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    // Init
    SData/*8:0*/ __Vdlyvdim0__top__DOT__dmem__DOT__RAM__v0;
    __Vdlyvdim0__top__DOT__dmem__DOT__RAM__v0 = 0;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__dmem__DOT__RAM__v0;
    __Vdlyvlsb__top__DOT__dmem__DOT__RAM__v0 = 0;
    CData/*7:0*/ __Vdlyvval__top__DOT__dmem__DOT__RAM__v0;
    __Vdlyvval__top__DOT__dmem__DOT__RAM__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__dmem__DOT__RAM__v0;
    __Vdlyvset__top__DOT__dmem__DOT__RAM__v0 = 0;
    SData/*8:0*/ __Vdlyvdim0__top__DOT__dmem__DOT__RAM__v1;
    __Vdlyvdim0__top__DOT__dmem__DOT__RAM__v1 = 0;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__dmem__DOT__RAM__v1;
    __Vdlyvlsb__top__DOT__dmem__DOT__RAM__v1 = 0;
    CData/*7:0*/ __Vdlyvval__top__DOT__dmem__DOT__RAM__v1;
    __Vdlyvval__top__DOT__dmem__DOT__RAM__v1 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__dmem__DOT__RAM__v1;
    __Vdlyvset__top__DOT__dmem__DOT__RAM__v1 = 0;
    SData/*8:0*/ __Vdlyvdim0__top__DOT__dmem__DOT__RAM__v2;
    __Vdlyvdim0__top__DOT__dmem__DOT__RAM__v2 = 0;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__dmem__DOT__RAM__v2;
    __Vdlyvlsb__top__DOT__dmem__DOT__RAM__v2 = 0;
    CData/*7:0*/ __Vdlyvval__top__DOT__dmem__DOT__RAM__v2;
    __Vdlyvval__top__DOT__dmem__DOT__RAM__v2 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__dmem__DOT__RAM__v2;
    __Vdlyvset__top__DOT__dmem__DOT__RAM__v2 = 0;
    SData/*8:0*/ __Vdlyvdim0__top__DOT__dmem__DOT__RAM__v3;
    __Vdlyvdim0__top__DOT__dmem__DOT__RAM__v3 = 0;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__dmem__DOT__RAM__v3;
    __Vdlyvlsb__top__DOT__dmem__DOT__RAM__v3 = 0;
    CData/*7:0*/ __Vdlyvval__top__DOT__dmem__DOT__RAM__v3;
    __Vdlyvval__top__DOT__dmem__DOT__RAM__v3 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__dmem__DOT__RAM__v3;
    __Vdlyvset__top__DOT__dmem__DOT__RAM__v3 = 0;
    // Body
    __Vdlyvset__top__DOT__dmem__DOT__RAM__v0 = 0U;
    __Vdlyvset__top__DOT__dmem__DOT__RAM__v1 = 0U;
    __Vdlyvset__top__DOT__dmem__DOT__RAM__v2 = 0U;
    __Vdlyvset__top__DOT__dmem__DOT__RAM__v3 = 0U;
    if ((1U & vlSelf->top__DOT__addr_vga)) {
        if ((1U & (IData)(vlSelf->top__DOT__byte_enable))) {
            __Vdlyvval__top__DOT__dmem__DOT__RAM__v0 
                = (0xffU & (IData)(vlSelf->CLOCK_50));
            __Vdlyvset__top__DOT__dmem__DOT__RAM__v0 = 1U;
            __Vdlyvlsb__top__DOT__dmem__DOT__RAM__v0 = 0U;
            __Vdlyvdim0__top__DOT__dmem__DOT__RAM__v0 
                = (0x1ffU & (vlSelf->top__DOT__write_data 
                             >> 2U));
        }
        if ((2U & (IData)(vlSelf->top__DOT__byte_enable))) {
            __Vdlyvval__top__DOT__dmem__DOT__RAM__v1 
                = (0xffU & ((IData)(vlSelf->CLOCK_50) 
                            >> 8U));
            __Vdlyvset__top__DOT__dmem__DOT__RAM__v1 = 1U;
            __Vdlyvlsb__top__DOT__dmem__DOT__RAM__v1 = 8U;
            __Vdlyvdim0__top__DOT__dmem__DOT__RAM__v1 
                = (0x1ffU & (vlSelf->top__DOT__write_data 
                             >> 2U));
        }
        if ((4U & (IData)(vlSelf->top__DOT__byte_enable))) {
            __Vdlyvval__top__DOT__dmem__DOT__RAM__v2 
                = (0xffU & ((IData)(vlSelf->CLOCK_50) 
                            >> 0x10U));
            __Vdlyvset__top__DOT__dmem__DOT__RAM__v2 = 1U;
            __Vdlyvlsb__top__DOT__dmem__DOT__RAM__v2 = 0x10U;
            __Vdlyvdim0__top__DOT__dmem__DOT__RAM__v2 
                = (0x1ffU & (vlSelf->top__DOT__write_data 
                             >> 2U));
        }
        if ((8U & (IData)(vlSelf->top__DOT__byte_enable))) {
            __Vdlyvval__top__DOT__dmem__DOT__RAM__v3 
                = ((IData)(vlSelf->CLOCK_50) >> 0x18U);
            __Vdlyvset__top__DOT__dmem__DOT__RAM__v3 = 1U;
            __Vdlyvlsb__top__DOT__dmem__DOT__RAM__v3 = 0x18U;
            __Vdlyvdim0__top__DOT__dmem__DOT__RAM__v3 
                = (0x1ffU & (vlSelf->top__DOT__write_data 
                             >> 2U));
        }
    }
    vlSelf->top__DOT__read_data_vga = (((0x23U == (0x7fU 
                                                   & vlSelf->top__DOT__instruction)) 
                                        == (0x1ffU 
                                            & vlSelf->top__DOT__write_data))
                                        ? vlSelf->top__DOT__read_data
                                        : vlSelf->top__DOT__dmem__DOT__RAM
                                       [(0x1ffU & VL_SHIFTR_III(9,9,32, 
                                                                (0x23U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->top__DOT__instruction)), 2U))]);
    if (__Vdlyvset__top__DOT__dmem__DOT__RAM__v0) {
        vlSelf->top__DOT__dmem__DOT__RAM[__Vdlyvdim0__top__DOT__dmem__DOT__RAM__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__dmem__DOT__RAM__v0))) 
                & vlSelf->top__DOT__dmem__DOT__RAM[__Vdlyvdim0__top__DOT__dmem__DOT__RAM__v0]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__dmem__DOT__RAM__v0) 
                                   << (IData)(__Vdlyvlsb__top__DOT__dmem__DOT__RAM__v0))));
    }
    if (__Vdlyvset__top__DOT__dmem__DOT__RAM__v1) {
        vlSelf->top__DOT__dmem__DOT__RAM[__Vdlyvdim0__top__DOT__dmem__DOT__RAM__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__dmem__DOT__RAM__v1))) 
                & vlSelf->top__DOT__dmem__DOT__RAM[__Vdlyvdim0__top__DOT__dmem__DOT__RAM__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__dmem__DOT__RAM__v1) 
                                   << (IData)(__Vdlyvlsb__top__DOT__dmem__DOT__RAM__v1))));
    }
    if (__Vdlyvset__top__DOT__dmem__DOT__RAM__v2) {
        vlSelf->top__DOT__dmem__DOT__RAM[__Vdlyvdim0__top__DOT__dmem__DOT__RAM__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__dmem__DOT__RAM__v2))) 
                & vlSelf->top__DOT__dmem__DOT__RAM[__Vdlyvdim0__top__DOT__dmem__DOT__RAM__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__dmem__DOT__RAM__v2) 
                                   << (IData)(__Vdlyvlsb__top__DOT__dmem__DOT__RAM__v2))));
    }
    if (__Vdlyvset__top__DOT__dmem__DOT__RAM__v3) {
        vlSelf->top__DOT__dmem__DOT__RAM[__Vdlyvdim0__top__DOT__dmem__DOT__RAM__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__dmem__DOT__RAM__v3))) 
                & vlSelf->top__DOT__dmem__DOT__RAM[__Vdlyvdim0__top__DOT__dmem__DOT__RAM__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__dmem__DOT__RAM__v3) 
                                   << (IData)(__Vdlyvlsb__top__DOT__dmem__DOT__RAM__v3))));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__top__DOT__franken_riscv__DOT__regs__DOT__rf__v0;
    __Vdlyvdim0__top__DOT__franken_riscv__DOT__regs__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__franken_riscv__DOT__regs__DOT__rf__v0;
    __Vdlyvval__top__DOT__franken_riscv__DOT__regs__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__franken_riscv__DOT__regs__DOT__rf__v0;
    __Vdlyvset__top__DOT__franken_riscv__DOT__regs__DOT__rf__v0 = 0;
    // Body
    __Vdlyvset__top__DOT__franken_riscv__DOT__regs__DOT__rf__v0 = 0U;
    if ((((IData)(vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_hd86a4e63__0) 
          | ((IData)(vlSelf->top__DOT__franken_riscv__DOT__I_type) 
             | (IData)(vlSelf->top__DOT__franken_riscv__DOT__U_type))) 
         & (0U != (IData)(vlSelf->top__DOT__franken_riscv__DOT__RD)))) {
        __Vdlyvval__top__DOT__franken_riscv__DOT__regs__DOT__rf__v0 
            = (((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_lw) 
                | (IData)(vlSelf->top__DOT__franken_riscv__DOT__is_lbu))
                ? ((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_lbu)
                    ? ((3U == (3U & vlSelf->top__DOT__alu_result))
                        ? VL_SHIFTR_III(32,32,32, vlSelf->top__DOT__read_data, 0x18U)
                        : ((2U == (3U & vlSelf->top__DOT__alu_result))
                            ? (0xffU & (vlSelf->top__DOT__read_data 
                                        >> 0x10U)) : 
                           ((1U == (3U & vlSelf->top__DOT__alu_result))
                             ? (0xffU & (vlSelf->top__DOT__read_data 
                                         >> 8U)) : 
                            (0xffU & vlSelf->top__DOT__read_data))))
                    : vlSelf->top__DOT__read_data) : vlSelf->top__DOT__alu_result);
        __Vdlyvset__top__DOT__franken_riscv__DOT__regs__DOT__rf__v0 = 1U;
        __Vdlyvdim0__top__DOT__franken_riscv__DOT__regs__DOT__rf__v0 
            = vlSelf->top__DOT__franken_riscv__DOT__RD;
    }
    if (__Vdlyvset__top__DOT__franken_riscv__DOT__regs__DOT__rf__v0) {
        vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf[__Vdlyvdim0__top__DOT__franken_riscv__DOT__regs__DOT__rf__v0] 
            = __Vdlyvval__top__DOT__franken_riscv__DOT__regs__DOT__rf__v0;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    // Body
    vlSelf->top__DOT__addr_vga = (VL_SHIFTR_III(32,32,32, (IData)(vlSelf->top__DOT__video__DOT__CounterX), 4U) 
                                  + ((0xffffffe0U & 
                                      VL_SHIFTL_III(32,32,32, (IData)(vlSelf->top__DOT__video__DOT__CounterY), 1U)) 
                                     + (0x7ffffff8U 
                                        & VL_SHIFTR_III(32,32,32, (IData)(vlSelf->top__DOT__video__DOT__CounterY), 1U))));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__5\n"); );
    // Init
    CData/*0:0*/ top__DOT__franken_riscv__DOT____VdfgTmp_hcb1e93f3__0;
    top__DOT__franken_riscv__DOT____VdfgTmp_hcb1e93f3__0 = 0;
    CData/*0:0*/ top__DOT__franken_riscv__DOT____VdfgTmp_he41587d0__0;
    top__DOT__franken_riscv__DOT____VdfgTmp_he41587d0__0 = 0;
    CData/*0:0*/ top__DOT__franken_riscv__DOT____VdfgTmp_h75ed175f__0;
    top__DOT__franken_riscv__DOT____VdfgTmp_h75ed175f__0 = 0;
    // Body
    vlSelf->top__DOT__instruction = vlSelf->top__DOT__imem__DOT__RAM
        [(0x3fU & (vlSelf->top__DOT__pc >> 2U))];
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
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Body
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
    vlSelf->VGA_G = vlSelf->VGA_R;
    vlSelf->VGA_B = vlSelf->VGA_R;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    // Init
    IData/*31:0*/ top__DOT__franken_riscv__DOT____VdfgTmp_h9eaf8be5__0;
    top__DOT__franken_riscv__DOT____VdfgTmp_h9eaf8be5__0 = 0;
    CData/*7:0*/ top__DOT__franken_riscv__DOT____VdfgTmp_hb90c054a__0;
    top__DOT__franken_riscv__DOT____VdfgTmp_hb90c054a__0 = 0;
    IData/*31:0*/ __VdfgTmp_hb3962318__0;
    __VdfgTmp_hb3962318__0 = 0;
    // Body
    __VdfgTmp_hb3962318__0 = vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf
        [vlSelf->top__DOT__franken_riscv__DOT__RS2];
    vlSelf->top__DOT__franken_riscv__DOT__src1 = ((0U 
                                                   == (IData)(vlSelf->top__DOT__franken_riscv__DOT__RS1))
                                                   ? 0U
                                                   : 
                                                  vlSelf->top__DOT__franken_riscv__DOT__regs__DOT__rf
                                                  [vlSelf->top__DOT__franken_riscv__DOT__RS1]);
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
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__2\n"); );
    // Body
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
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((0xaULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((5ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((0xfULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<4> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vtop___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("top.v", 10, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vtop___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("top.v", 10, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("top.v", 10, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->CLOCK_50 & 0xfeU))) {
        Verilated::overWidthError("CLOCK_50");}
}
#endif  // VL_DEBUG
