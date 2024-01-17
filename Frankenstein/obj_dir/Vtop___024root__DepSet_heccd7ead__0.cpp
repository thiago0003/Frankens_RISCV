// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__top__DOT__regs__DOT__rf__v0;
    __Vdlyvdim0__top__DOT__regs__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__regs__DOT__rf__v0;
    __Vdlyvval__top__DOT__regs__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__regs__DOT__rf__v0;
    __Vdlyvset__top__DOT__regs__DOT__rf__v0 = 0;
    // Body
    __Vdlyvset__top__DOT__regs__DOT__rf__v0 = 0U;
    vlSelf->__Vdlyvset__top__DOT__blockram__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__top__DOT__blockram__DOT__ram__v1 = 0U;
    vlSelf->__Vdlyvset__top__DOT__blockram__DOT__ram__v2 = 0U;
    vlSelf->__Vdlyvset__top__DOT__blockram__DOT__ram__v3 = 0U;
    vlSelf->top__DOT__clk_div1 = (1U & (~ (IData)(vlSelf->top__DOT__clk_div1)));
    vlSelf->top__DOT__power_on_reset__DOT__q = (1U 
                                                | (6U 
                                                   & ((IData)(vlSelf->top__DOT__power_on_reset__DOT__q) 
                                                      << 1U)));
    if (vlSelf->top__DOT__reg_write) {
        __Vdlyvval__top__DOT__regs__DOT__rf__v0 = vlSelf->top__DOT__write_reg;
        __Vdlyvset__top__DOT__regs__DOT__rf__v0 = 1U;
        __Vdlyvdim0__top__DOT__regs__DOT__rf__v0 = vlSelf->top__DOT__RD;
    }
    if (vlSelf->top__DOT__mem_write) {
        if ((1U & (IData)(vlSelf->top__DOT__byte_enable))) {
            vlSelf->top__DOT__blockram__DOT____Vlvbound_h02f7a360__0 
                = (0xffU & vlSelf->top__DOT__write_data);
            if ((0x31U >= (0x3fU & (vlSelf->top__DOT__alu_result 
                                    >> 2U)))) {
                vlSelf->__Vdlyvval__top__DOT__blockram__DOT__ram__v0 
                    = vlSelf->top__DOT__blockram__DOT____Vlvbound_h02f7a360__0;
                vlSelf->__Vdlyvset__top__DOT__blockram__DOT__ram__v0 = 1U;
                vlSelf->__Vdlyvdim0__top__DOT__blockram__DOT__ram__v0 
                    = (0x3fU & (vlSelf->top__DOT__alu_result 
                                >> 2U));
            }
        }
        if ((2U & (IData)(vlSelf->top__DOT__byte_enable))) {
            vlSelf->top__DOT__blockram__DOT____Vlvbound_h02f7a39d__0 
                = (0xffU & (vlSelf->top__DOT__write_data 
                            >> 8U));
            if ((0x31U >= (0x3fU & (vlSelf->top__DOT__alu_result 
                                    >> 2U)))) {
                vlSelf->__Vdlyvval__top__DOT__blockram__DOT__ram__v1 
                    = vlSelf->top__DOT__blockram__DOT____Vlvbound_h02f7a39d__0;
                vlSelf->__Vdlyvset__top__DOT__blockram__DOT__ram__v1 = 1U;
                vlSelf->__Vdlyvdim0__top__DOT__blockram__DOT__ram__v1 
                    = (0x3fU & (vlSelf->top__DOT__alu_result 
                                >> 2U));
            }
        }
        if ((4U & (IData)(vlSelf->top__DOT__byte_enable))) {
            vlSelf->top__DOT__blockram__DOT____Vlvbound_h02f7a2de__0 
                = (0xffU & (vlSelf->top__DOT__write_data 
                            >> 0x10U));
            if ((0x31U >= (0x3fU & (vlSelf->top__DOT__alu_result 
                                    >> 2U)))) {
                vlSelf->__Vdlyvval__top__DOT__blockram__DOT__ram__v2 
                    = vlSelf->top__DOT__blockram__DOT____Vlvbound_h02f7a2de__0;
                vlSelf->__Vdlyvset__top__DOT__blockram__DOT__ram__v2 = 1U;
                vlSelf->__Vdlyvdim0__top__DOT__blockram__DOT__ram__v2 
                    = (0x3fU & (vlSelf->top__DOT__alu_result 
                                >> 2U));
            }
        }
        if ((8U & (IData)(vlSelf->top__DOT__byte_enable))) {
            vlSelf->top__DOT__blockram__DOT____Vlvbound_h02f7a91a__0 
                = (vlSelf->top__DOT__write_data >> 0x18U);
            if ((0x31U >= (0x3fU & (vlSelf->top__DOT__alu_result 
                                    >> 2U)))) {
                vlSelf->__Vdlyvval__top__DOT__blockram__DOT__ram__v3 
                    = vlSelf->top__DOT__blockram__DOT____Vlvbound_h02f7a91a__0;
                vlSelf->__Vdlyvset__top__DOT__blockram__DOT__ram__v3 = 1U;
                vlSelf->__Vdlyvdim0__top__DOT__blockram__DOT__ram__v3 
                    = (0x3fU & (vlSelf->top__DOT__alu_result 
                                >> 2U));
            }
        }
    }
    if (__Vdlyvset__top__DOT__regs__DOT__rf__v0) {
        vlSelf->top__DOT__regs__DOT__rf[__Vdlyvdim0__top__DOT__regs__DOT__rf__v0] 
            = __Vdlyvval__top__DOT__regs__DOT__rf__v0;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->top__DOT__clk_div2 = (1U & (~ (IData)(vlSelf->top__DOT__clk_div2)));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->top__DOT__clk_div3 = (1U & (~ (IData)(vlSelf->top__DOT__clk_div3)));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->top__DOT__clk_div4 = (1U & (~ (IData)(vlSelf->top__DOT__clk_div4)));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    // Init
    CData/*0:0*/ top__DOT__franken_riscv__DOT____VdfgTmp_h55d43119__0;
    top__DOT__franken_riscv__DOT____VdfgTmp_h55d43119__0 = 0;
    CData/*0:0*/ top__DOT__franken_riscv__DOT____VdfgTmp_hb41df7b8__0;
    top__DOT__franken_riscv__DOT____VdfgTmp_hb41df7b8__0 = 0;
    // Body
    vlSelf->top__DOT__franken_riscv__DOT__stall_Exec 
        = ((((IData)(vlSelf->top__DOT__franken_riscv__DOT__mem_read_Exec) 
             & (~ (IData)(vlSelf->top__DOT__franken_riscv__DOT__stall_Exec))) 
            & (((IData)(vlSelf->top__DOT__franken_riscv__DOT__RD_Exec) 
                == (0x1fU & (vlSelf->top__DOT__instruction 
                             >> 7U))) | ((IData)(vlSelf->top__DOT__franken_riscv__DOT__RD_Exec) 
                                         == (0x1fU 
                                             & (vlSelf->top__DOT__instruction 
                                                >> 0x14U))))) 
           & (0U != (IData)(vlSelf->top__DOT__franken_riscv__DOT__RD_Exec)));
    vlSelf->top__DOT__franken_riscv__DOT__rd_ = (0x1fU 
                                                 & (vlSelf->top__DOT__instruction 
                                                    >> 7U));
    vlSelf->top__DOT__franken_riscv__DOT__funct7_ = 
        (vlSelf->top__DOT__instruction >> 0x19U);
    vlSelf->top__DOT__franken_riscv__DOT__rs1 = (0x1fU 
                                                 & (vlSelf->top__DOT__instruction 
                                                    >> 0xfU));
    vlSelf->top__DOT__franken_riscv__DOT__rs2 = (0x1fU 
                                                 & (vlSelf->top__DOT__instruction 
                                                    >> 0x14U));
    vlSelf->top__DOT__franken_riscv__DOT__funct3_ = 
        (7U & (vlSelf->top__DOT__instruction >> 0xcU));
    vlSelf->top__DOT__franken_riscv__DOT__Fwd_B = (
                                                   ((IData)(vlSelf->top__DOT__franken_riscv__DOT__reg_write_Exec) 
                                                    & (((IData)(vlSelf->top__DOT__franken_riscv__DOT__RD_Exec) 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->top__DOT__instruction 
                                                            >> 0x14U))) 
                                                       & (0U 
                                                          != 
                                                          (0x1fU 
                                                           & (vlSelf->top__DOT__instruction 
                                                              >> 0x14U)))))
                                                    ? 2U
                                                    : 
                                                   (((IData)(vlSelf->top__DOT__franken_riscv__DOT__reg_write_Mem) 
                                                     & (((IData)(vlSelf->top__DOT__franken_riscv__DOT__RD_Mem) 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->top__DOT__instruction 
                                                             >> 0x14U))) 
                                                        & (0U 
                                                           != 
                                                           (0x1fU 
                                                            & (vlSelf->top__DOT__instruction 
                                                               >> 0x14U)))))
                                                     ? 1U
                                                     : 0U));
    vlSelf->top__DOT__franken_riscv__DOT__Fwd_A = (
                                                   ((IData)(vlSelf->top__DOT__franken_riscv__DOT__reg_write_Exec) 
                                                    & (((IData)(vlSelf->top__DOT__franken_riscv__DOT__RD_Exec) 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->top__DOT__instruction 
                                                            >> 0xfU))) 
                                                       & (0U 
                                                          != 
                                                          (0x1fU 
                                                           & (vlSelf->top__DOT__instruction 
                                                              >> 0xfU)))))
                                                    ? 2U
                                                    : 
                                                   (((IData)(vlSelf->top__DOT__franken_riscv__DOT__reg_write_Mem) 
                                                     & (((IData)(vlSelf->top__DOT__franken_riscv__DOT__RD_Mem) 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->top__DOT__instruction 
                                                             >> 0xfU))) 
                                                        & (0U 
                                                           != 
                                                           (0x1fU 
                                                            & (vlSelf->top__DOT__instruction 
                                                               >> 0xfU)))))
                                                     ? 1U
                                                     : 0U));
    if ((1U & (~ (IData)(vlSelf->top__DOT__franken_riscv__DOT__stall_Mem)))) {
        vlSelf->top__DOT__franken_riscv__DOT__stall_WB 
            = vlSelf->top__DOT__franken_riscv__DOT__stall_Mem;
        vlSelf->top__DOT__franken_riscv__DOT__mem_read_Mem 
            = vlSelf->top__DOT__franken_riscv__DOT__mem_read_Exec;
        if ((1U & (~ (IData)(vlSelf->top__DOT__franken_riscv__DOT__mem_read_Dec)))) {
            vlSelf->top__DOT__franken_riscv__DOT__alu_result_Mem 
                = vlSelf->top__DOT__alu_result;
        }
        vlSelf->top__DOT__franken_riscv__DOT__data_load 
            = ((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_lbu)
                ? ((3U == (3U & vlSelf->top__DOT__alu_result))
                    ? (vlSelf->top__DOT__blockram__DOT__data_reg 
                       >> 0x18U) : ((2U == (3U & vlSelf->top__DOT__alu_result))
                                     ? (0xffU & (vlSelf->top__DOT__blockram__DOT__data_reg 
                                                 >> 0x10U))
                                     : ((1U == (3U 
                                                & vlSelf->top__DOT__alu_result))
                                         ? (0xffU & 
                                            (vlSelf->top__DOT__blockram__DOT__data_reg 
                                             >> 8U))
                                         : (0xffU & vlSelf->top__DOT__blockram__DOT__data_reg))))
                : ((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_lb)
                    ? ((3U == (3U & vlSelf->top__DOT__alu_result))
                        ? (vlSelf->top__DOT__blockram__DOT__data_reg 
                           >> 0x18U) : ((2U == (3U 
                                                & vlSelf->top__DOT__alu_result))
                                         ? (0xffU & 
                                            (vlSelf->top__DOT__blockram__DOT__data_reg 
                                             >> 0x10U))
                                         : ((1U == 
                                             (3U & vlSelf->top__DOT__alu_result))
                                             ? (0xffU 
                                                & (vlSelf->top__DOT__blockram__DOT__data_reg 
                                                   >> 8U))
                                             : (0xffU 
                                                & vlSelf->top__DOT__blockram__DOT__data_reg))))
                    : ((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_lh)
                        ? ((2U == (3U & vlSelf->top__DOT__alu_result))
                            ? (((- (IData)((vlSelf->top__DOT__blockram__DOT__data_reg 
                                            >> 0x1fU))) 
                                << 0x10U) | (vlSelf->top__DOT__blockram__DOT__data_reg 
                                             >> 0x10U))
                            : (((- (IData)((vlSelf->top__DOT__blockram__DOT__data_reg 
                                            >> 0x1fU))) 
                                << 0x10U) | (0xffffU 
                                             & vlSelf->top__DOT__blockram__DOT__data_reg)))
                        : ((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_lhu)
                            ? ((2U == (3U & vlSelf->top__DOT__alu_result))
                                ? (vlSelf->top__DOT__blockram__DOT__data_reg 
                                   >> 0x10U) : (0xffffU 
                                                & vlSelf->top__DOT__blockram__DOT__data_reg))
                            : vlSelf->top__DOT__blockram__DOT__data_reg))));
        vlSelf->top__DOT__mem_write = vlSelf->top__DOT__franken_riscv__DOT__mem_write_Exec;
        vlSelf->top__DOT__byte_enable = (((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_lbu) 
                                          | (IData)(vlSelf->top__DOT__franken_riscv__DOT__is_sb))
                                          ? ((3U == 
                                              (3U & vlSelf->top__DOT__alu_result))
                                              ? 8U : 
                                             ((2U == 
                                               (3U 
                                                & vlSelf->top__DOT__alu_result))
                                               ? 4U
                                               : ((1U 
                                                   == 
                                                   (3U 
                                                    & vlSelf->top__DOT__alu_result))
                                                   ? 2U
                                                   : 1U)))
                                          : (((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_lh) 
                                              | (IData)(vlSelf->top__DOT__franken_riscv__DOT__is_sh))
                                              ? ((2U 
                                                  == 
                                                  (3U 
                                                   & vlSelf->top__DOT__alu_result))
                                                  ? 0xcU
                                                  : 3U)
                                              : 0xfU));
        vlSelf->top__DOT__write_data = (((0x23U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
                                         & (2U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)))
                                         ? vlSelf->top__DOT__franken_riscv__DOT__src2_Exec
                                         : ((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_sb)
                                             ? ((3U 
                                                 == 
                                                 (3U 
                                                  & vlSelf->top__DOT__alu_result))
                                                 ? 
                                                (vlSelf->top__DOT__franken_riscv__DOT__src2_Exec 
                                                 << 0x18U)
                                                 : 
                                                ((2U 
                                                  == 
                                                  (3U 
                                                   & vlSelf->top__DOT__alu_result))
                                                  ? 
                                                 (0xff0000U 
                                                  & (vlSelf->top__DOT__franken_riscv__DOT__src2_Exec 
                                                     << 0x10U))
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & vlSelf->top__DOT__alu_result))
                                                   ? 
                                                  (0xff00U 
                                                   & (vlSelf->top__DOT__franken_riscv__DOT__src2_Exec 
                                                      << 8U))
                                                   : 
                                                  (0xffU 
                                                   & vlSelf->top__DOT__franken_riscv__DOT__src2_Exec))))
                                             : ((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_sh)
                                                 ? 
                                                ((2U 
                                                  == 
                                                  (3U 
                                                   & vlSelf->top__DOT__alu_result))
                                                  ? 
                                                 (vlSelf->top__DOT__franken_riscv__DOT__src2_Exec 
                                                  << 0x10U)
                                                  : 
                                                 (0xffffU 
                                                  & vlSelf->top__DOT__franken_riscv__DOT__src2_Exec))
                                                 : 0U)));
        vlSelf->top__DOT__franken_riscv__DOT__RD_Mem 
            = vlSelf->top__DOT__franken_riscv__DOT__RD_Exec;
        vlSelf->top__DOT__franken_riscv__DOT__reg_write_Mem 
            = vlSelf->top__DOT__franken_riscv__DOT__reg_write_Exec;
    }
    vlSelf->top__DOT__franken_riscv__DOT__imm = (((
                                                   (0x67U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->top__DOT__instruction)) 
                                                   | (3U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->top__DOT__instruction))) 
                                                  | (0x13U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->top__DOT__instruction)))
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
                                                   (((0x37U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->top__DOT__instruction)) 
                                                     | (0x17U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->top__DOT__instruction)))
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
    vlSelf->top__DOT__franken_riscv__DOT__pc_dec = vlSelf->top__DOT__pc;
    vlSelf->top__DOT__franken_riscv__DOT__opcode = 
        (0x7fU & vlSelf->top__DOT__instruction);
    vlSelf->top__DOT__franken_riscv__DOT__U_type = 
        ((0x37U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
         | (0x17U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)));
    vlSelf->top__DOT__franken_riscv__DOT__funct7 = 
        ((0x33U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode))
          ? (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7_)
          : 0U);
    vlSelf->top__DOT__franken_riscv__DOT__I_type = 
        ((0x67U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
         | ((3U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
            | (0x13U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode))));
    top__DOT__franken_riscv__DOT____VdfgTmp_hb41df7b8__0 
        = ((0x23U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
           | (0x63U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)));
    vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_he18098c8__0 
        = ((0U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7)) 
           & (0x13U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)));
    top__DOT__franken_riscv__DOT____VdfgTmp_h55d43119__0 
        = ((0x33U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
           | (IData)(vlSelf->top__DOT__franken_riscv__DOT__I_type));
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
    vlSelf->top__DOT__RS2 = ((IData)(vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_hf167f6a7__0)
                              ? (IData)(vlSelf->top__DOT__franken_riscv__DOT__rs2)
                              : 0U);
    if (vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_he778bdb7__0) {
        vlSelf->top__DOT__RS1 = vlSelf->top__DOT__franken_riscv__DOT__rs1;
        vlSelf->top__DOT__franken_riscv__DOT__funct3 
            = vlSelf->top__DOT__franken_riscv__DOT__funct3_;
    } else {
        vlSelf->top__DOT__RS1 = 0U;
        vlSelf->top__DOT__franken_riscv__DOT__funct3 = 0U;
    }
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
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__5\n"); );
    // Body
    vlSelf->top__DOT__out_decoder1[0U] = vlSelf->top__DOT__alu_decoder__DOT__hex_code[0U];
    vlSelf->top__DOT__out_decoder1[1U] = vlSelf->top__DOT__alu_decoder__DOT__hex_code[1U];
    vlSelf->top__DOT__out_decoder1[2U] = vlSelf->top__DOT__alu_decoder__DOT__hex_code[2U];
    vlSelf->top__DOT__out_decoder1[3U] = vlSelf->top__DOT__alu_decoder__DOT__hex_code[3U];
    if ((0x33U == (0x7fU & vlSelf->top__DOT__instruction))) {
        vlSelf->top__DOT__out_decoder2[0U] = (IData)(vlSelf->top__DOT__alu_decoder__DOT__RD_);
        vlSelf->top__DOT__out_decoder2[1U] = (IData)(
                                                     (vlSelf->top__DOT__alu_decoder__DOT__RD_ 
                                                      >> 0x20U));
        vlSelf->top__DOT__out_decoder2[2U] = 0x52443a00U;
    } else {
        vlSelf->top__DOT__out_decoder2[0U] = (IData)(
                                                     (((QData)((IData)(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder3_8____pinNumber2)) 
                                                       << 0x38U) 
                                                      | (((QData)((IData)(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder3_7____pinNumber2)) 
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
                                                                                | (IData)(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder3_1____pinNumber2)))))))))));
        vlSelf->top__DOT__out_decoder2[1U] = (IData)(
                                                     ((((QData)((IData)(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder3_8____pinNumber2)) 
                                                        << 0x38U) 
                                                       | (((QData)((IData)(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder3_7____pinNumber2)) 
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
                                                                                | (IData)(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder3_1____pinNumber2)))))))))) 
                                                      >> 0x20U));
        vlSelf->top__DOT__out_decoder2[2U] = 0x494d4d3aU;
    }
    vlSelf->top__DOT__out_decoder2[3U] = 0U;
    if (vlSelf->top__DOT__alu_decoder__DOT__U_type) {
        vlSelf->top__DOT__out_decoder3[0U] = 0U;
        vlSelf->top__DOT__out_decoder3[1U] = 0U;
        vlSelf->top__DOT__out_decoder3[2U] = 0U;
        vlSelf->top__DOT__out_decoder3[3U] = 0U;
    } else if (vlSelf->top__DOT__alu_decoder__DOT__is_jalr) {
        vlSelf->top__DOT__out_decoder3[0U] = 0x494d4dU;
        vlSelf->top__DOT__out_decoder3[1U] = 0x5231002bU;
        vlSelf->top__DOT__out_decoder3[2U] = 0U;
        vlSelf->top__DOT__out_decoder3[3U] = 0U;
    } else {
        if (((0x6fU == (0x7fU & vlSelf->top__DOT__instruction)) 
             | (0x63U == (0x7fU & vlSelf->top__DOT__instruction)))) {
            vlSelf->top__DOT__out_decoder3[0U] = 0x494d4dU;
            vlSelf->top__DOT__out_decoder3[1U] = 0x433a002bU;
            vlSelf->top__DOT__out_decoder3[2U] = 0x50U;
        } else {
            vlSelf->top__DOT__out_decoder3[0U] = (IData)(
                                                         (0x3030303000000000ULL 
                                                          | (QData)((IData)(
                                                                            (0x30300000U 
                                                                             | (((IData)(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder1_2____pinNumber2) 
                                                                                << 8U) 
                                                                                | (IData)(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder1_1____pinNumber2)))))));
            vlSelf->top__DOT__out_decoder3[1U] = (IData)(
                                                         ((0x3030303000000000ULL 
                                                           | (QData)((IData)(
                                                                             (0x30300000U 
                                                                              | (((IData)(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder1_2____pinNumber2) 
                                                                                << 8U) 
                                                                                | (IData)(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder1_1____pinNumber2)))))) 
                                                          >> 0x20U));
            vlSelf->top__DOT__out_decoder3[2U] = 0x52313a00U;
        }
        vlSelf->top__DOT__out_decoder3[3U] = 0U;
    }
    if ((((IData)(vlSelf->top__DOT__alu_decoder__DOT__I_type) 
          | (IData)(vlSelf->top__DOT__alu_decoder__DOT__U_type)) 
         | (0x6fU == (0x7fU & vlSelf->top__DOT__instruction)))) {
        vlSelf->top__DOT__out_decoder4[0U] = (IData)(vlSelf->top__DOT__alu_decoder__DOT__RD_);
        vlSelf->top__DOT__out_decoder4[1U] = (IData)(
                                                     (vlSelf->top__DOT__alu_decoder__DOT__RD_ 
                                                      >> 0x20U));
        vlSelf->top__DOT__out_decoder4[2U] = 0x52443a00U;
    } else {
        vlSelf->top__DOT__out_decoder4[0U] = (IData)(
                                                     (0x3030303000000000ULL 
                                                      | (QData)((IData)(
                                                                        (0x30300000U 
                                                                         | (((IData)(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder2_2____pinNumber2) 
                                                                             << 8U) 
                                                                            | (IData)(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder2_1____pinNumber2)))))));
        vlSelf->top__DOT__out_decoder4[1U] = (IData)(
                                                     ((0x3030303000000000ULL 
                                                       | (QData)((IData)(
                                                                         (0x30300000U 
                                                                          | (((IData)(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder2_2____pinNumber2) 
                                                                              << 8U) 
                                                                             | (IData)(vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder2_1____pinNumber2)))))) 
                                                      >> 0x20U));
        vlSelf->top__DOT__out_decoder4[2U] = 0x52323a00U;
    }
    vlSelf->top__DOT__out_decoder4[3U] = 0U;
}

extern const VlUnpacked<CData/*7:0*/, 16> Vtop__ConstPool__TABLE_hae5aad9d_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__6(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__6\n"); );
    // Init
    CData/*0:0*/ top__DOT__alu_decoder__DOT____VdfgTmp_h9b725a6a__0;
    top__DOT__alu_decoder__DOT____VdfgTmp_h9b725a6a__0 = 0;
    CData/*0:0*/ top__DOT__alu_decoder__DOT____VdfgTmp_haa71103e__0;
    top__DOT__alu_decoder__DOT____VdfgTmp_haa71103e__0 = 0;
    CData/*0:0*/ top__DOT__alu_decoder__DOT____VdfgTmp_hdf511576__0;
    top__DOT__alu_decoder__DOT____VdfgTmp_hdf511576__0 = 0;
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
    if ((1U & (~ (IData)(vlSelf->top__DOT__franken_riscv__DOT__stall_Exec)))) {
        vlSelf->top__DOT__franken_riscv__DOT__is_conditional_jump_Exec 
            = vlSelf->top__DOT__franken_riscv__DOT__is_conditional_jump_Dec;
        vlSelf->top__DOT__franken_riscv__DOT__src2_Exec 
            = vlSelf->top__DOT__franken_riscv__DOT__src2_forward;
        vlSelf->top__DOT__franken_riscv__DOT__mem_write_Exec 
            = (0x23U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode));
        vlSelf->top__DOT__franken_riscv__DOT__stall_Mem 
            = vlSelf->top__DOT__franken_riscv__DOT__stall_Exec;
        vlSelf->top__DOT__franken_riscv__DOT__RD_Exec 
            = vlSelf->top__DOT__franken_riscv__DOT__RD_Dec;
        vlSelf->top__DOT__franken_riscv__DOT__mem_read_Exec 
            = vlSelf->top__DOT__franken_riscv__DOT__mem_read_Dec;
        vlSelf->top__DOT__franken_riscv__DOT__reg_write_Exec 
            = (((IData)(vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_hf167f6a7__0) 
                | ((IData)(vlSelf->top__DOT__franken_riscv__DOT__I_type) 
                   | (IData)(vlSelf->top__DOT__franken_riscv__DOT__U_type))) 
               & (0U != (IData)(vlSelf->top__DOT__franken_riscv__DOT__RD_Dec)));
    }
    vlSelf->top__DOT__pc = vlSelf->top__DOT__franken_riscv__DOT__next_pc;
    if ((1U & (~ (IData)(vlSelf->top__DOT__franken_riscv__DOT__stall_WB)))) {
        vlSelf->top__DOT__RD = vlSelf->top__DOT__franken_riscv__DOT__RD_Mem;
        vlSelf->top__DOT__reg_write = vlSelf->top__DOT__franken_riscv__DOT__reg_write_Mem;
        vlSelf->top__DOT__write_reg = ((IData)(vlSelf->top__DOT__franken_riscv__DOT__mem_read_Mem)
                                        ? vlSelf->top__DOT__franken_riscv__DOT__data_load
                                        : vlSelf->top__DOT__franken_riscv__DOT__alu_result_Mem);
    }
    vlSelf->top__DOT__instruction = vlSelf->top__DOT__imem__DOT__ram
        [(0x7fU & (vlSelf->top__DOT__pc >> 2U))];
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
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__7(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__7\n"); );
    // Body
    vlSelf->top__DOT__blockram__DOT__data_reg = ((vlSelf->top__DOT__blockram__DOT__ram
                                                  [
                                                  ((0x31U 
                                                    >= 
                                                    (0x3fU 
                                                     & (vlSelf->top__DOT__alu_result 
                                                        >> 2U)))
                                                    ? 
                                                   (0x3fU 
                                                    & (vlSelf->top__DOT__alu_result 
                                                       >> 2U))
                                                    : 0U)]
                                                  [3U] 
                                                  << 0x18U) 
                                                 | ((vlSelf->top__DOT__blockram__DOT__ram
                                                     [
                                                     ((0x31U 
                                                       >= 
                                                       (0x3fU 
                                                        & (vlSelf->top__DOT__alu_result 
                                                           >> 2U)))
                                                       ? 
                                                      (0x3fU 
                                                       & (vlSelf->top__DOT__alu_result 
                                                          >> 2U))
                                                       : 0U)]
                                                     [2U] 
                                                     << 0x10U) 
                                                    | ((vlSelf->top__DOT__blockram__DOT__ram
                                                        [
                                                        ((0x31U 
                                                          >= 
                                                          (0x3fU 
                                                           & (vlSelf->top__DOT__alu_result 
                                                              >> 2U)))
                                                          ? 
                                                         (0x3fU 
                                                          & (vlSelf->top__DOT__alu_result 
                                                             >> 2U))
                                                          : 0U)]
                                                        [1U] 
                                                        << 8U) 
                                                       | vlSelf->top__DOT__blockram__DOT__ram
                                                       [
                                                       ((0x31U 
                                                         >= 
                                                         (0x3fU 
                                                          & (vlSelf->top__DOT__alu_result 
                                                             >> 2U)))
                                                         ? 
                                                        (0x3fU 
                                                         & (vlSelf->top__DOT__alu_result 
                                                            >> 2U))
                                                         : 0U)]
                                                       [0U])));
    if (vlSelf->__Vdlyvset__top__DOT__blockram__DOT__ram__v0) {
        vlSelf->top__DOT__blockram__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__blockram__DOT__ram__v0][0U] 
            = vlSelf->__Vdlyvval__top__DOT__blockram__DOT__ram__v0;
    }
    if (vlSelf->__Vdlyvset__top__DOT__blockram__DOT__ram__v1) {
        vlSelf->top__DOT__blockram__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__blockram__DOT__ram__v1][1U] 
            = vlSelf->__Vdlyvval__top__DOT__blockram__DOT__ram__v1;
    }
    if (vlSelf->__Vdlyvset__top__DOT__blockram__DOT__ram__v2) {
        vlSelf->top__DOT__blockram__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__blockram__DOT__ram__v2][2U] 
            = vlSelf->__Vdlyvval__top__DOT__blockram__DOT__ram__v2;
    }
    if (vlSelf->__Vdlyvset__top__DOT__blockram__DOT__ram__v3) {
        vlSelf->top__DOT__blockram__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__blockram__DOT__ram__v3][3U] 
            = vlSelf->__Vdlyvval__top__DOT__blockram__DOT__ram__v3;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->__VdfgTmp_hcd850c4e__0 = vlSelf->top__DOT__regs__DOT__rf
        [vlSelf->top__DOT__RS2];
    vlSelf->__VdfgTmp_hc9ae597d__0 = vlSelf->top__DOT__regs__DOT__rf
        [vlSelf->top__DOT__RS1];
    vlSelf->top__DOT__src2 = ((0U == (IData)(vlSelf->top__DOT__RS2))
                               ? 0U : vlSelf->__VdfgTmp_hcd850c4e__0);
    vlSelf->top__DOT__src1 = ((0U == (IData)(vlSelf->top__DOT__RS1))
                               ? 0U : vlSelf->__VdfgTmp_hc9ae597d__0);
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__8(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__8\n"); );
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*3:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*3:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    __Vtableidx2 = ((IData)(vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_he778bdb7__0) 
                    & ((IData)(vlSelf->top__DOT__franken_riscv__DOT__rs1) 
                       >> 4U));
    vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder1_2____pinNumber2 
        = Vtop__ConstPool__TABLE_hae5aad9d_0[__Vtableidx2];
    __Vtableidx1 = ((IData)(vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_he778bdb7__0)
                     ? (0xfU & (IData)(vlSelf->top__DOT__franken_riscv__DOT__rs1))
                     : 0U);
    vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder1_1____pinNumber2 
        = Vtop__ConstPool__TABLE_hae5aad9d_0[__Vtableidx1];
    __Vtableidx4 = ((IData)(vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_hf167f6a7__0) 
                    & ((IData)(vlSelf->top__DOT__franken_riscv__DOT__rs2) 
                       >> 4U));
    vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder2_2____pinNumber2 
        = Vtop__ConstPool__TABLE_hae5aad9d_0[__Vtableidx4];
    __Vtableidx3 = ((IData)(vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_hf167f6a7__0)
                     ? (0xfU & (IData)(vlSelf->top__DOT__franken_riscv__DOT__rs2))
                     : 0U);
    vlSelf->top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder2_1____pinNumber2 
        = Vtop__ConstPool__TABLE_hae5aad9d_0[__Vtableidx3];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__9(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__9\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->top__DOT__franken_riscv__DOT__stall_Exec)))) {
        vlSelf->top__DOT__alu_result = (((IData)(vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_h154cd026__0) 
                                         & (0U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7)))
                                         ? (vlSelf->top__DOT__franken_riscv__DOT__src1_forward 
                                            + vlSelf->top__DOT__franken_riscv__DOT__src2_forward)
                                         : (((0U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                                             & (0x13U 
                                                == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)))
                                             ? (vlSelf->top__DOT__franken_riscv__DOT__src1_forward 
                                                + vlSelf->top__DOT__franken_riscv__DOT__imm)
                                             : (((IData)(vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_h154cd026__0) 
                                                 & (0x20U 
                                                    == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7)))
                                                 ? 
                                                (vlSelf->top__DOT__franken_riscv__DOT__src1_forward 
                                                 - vlSelf->top__DOT__franken_riscv__DOT__src2_forward)
                                                 : 
                                                (((7U 
                                                   == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                                                  & (0x13U 
                                                     == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)))
                                                  ? 
                                                 (vlSelf->top__DOT__franken_riscv__DOT__src1_forward 
                                                  & vlSelf->top__DOT__franken_riscv__DOT__imm)
                                                  : 
                                                 (((0x33U 
                                                    == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
                                                   & ((7U 
                                                       == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                                                      & (0U 
                                                         == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7))))
                                                   ? 
                                                  (vlSelf->top__DOT__franken_riscv__DOT__src1_forward 
                                                   & vlSelf->top__DOT__franken_riscv__DOT__src2_forward)
                                                   : 
                                                  (((0x33U 
                                                     == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
                                                    & ((6U 
                                                        == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                                                       & (0U 
                                                          == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7))))
                                                    ? 
                                                   (vlSelf->top__DOT__franken_riscv__DOT__src1_forward 
                                                    | vlSelf->top__DOT__franken_riscv__DOT__src2_forward)
                                                    : 
                                                   (((6U 
                                                      == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                                                     & (0x13U 
                                                        == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)))
                                                     ? 
                                                    (vlSelf->top__DOT__franken_riscv__DOT__src1_forward 
                                                     | vlSelf->top__DOT__franken_riscv__DOT__imm)
                                                     : 
                                                    (((1U 
                                                       == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                                                      & (IData)(vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_he18098c8__0))
                                                      ? 
                                                     (vlSelf->top__DOT__franken_riscv__DOT__src1_forward 
                                                      << 
                                                      (0x1fU 
                                                       & vlSelf->top__DOT__franken_riscv__DOT__imm))
                                                      : 
                                                     (((5U 
                                                        == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                                                       & (IData)(vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_he18098c8__0))
                                                       ? 
                                                      (vlSelf->top__DOT__franken_riscv__DOT__src1_forward 
                                                       >> 
                                                       (0x1fU 
                                                        & vlSelf->top__DOT__franken_riscv__DOT__imm))
                                                       : 
                                                      ((0x17U 
                                                        == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode))
                                                        ? 
                                                       (vlSelf->top__DOT__franken_riscv__DOT__pc_dec 
                                                        + vlSelf->top__DOT__franken_riscv__DOT__imm)
                                                        : 
                                                       ((0x6fU 
                                                         == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode))
                                                         ? vlSelf->top__DOT__franken_riscv__DOT__jump_add_Exec
                                                         : 
                                                        ((0x23U 
                                                          == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode))
                                                          ? 
                                                         (vlSelf->top__DOT__franken_riscv__DOT__src1_forward 
                                                          + vlSelf->top__DOT__franken_riscv__DOT__imm)
                                                          : 
                                                         ((0x37U 
                                                           == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode))
                                                           ? vlSelf->top__DOT__franken_riscv__DOT__imm
                                                           : 
                                                          (((0x33U 
                                                             == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
                                                            & ((4U 
                                                                == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                                                               & (0U 
                                                                  == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7))))
                                                            ? 
                                                           (vlSelf->top__DOT__franken_riscv__DOT__src1_forward 
                                                            ^ vlSelf->top__DOT__franken_riscv__DOT__src2_forward)
                                                            : 
                                                           (((4U 
                                                              == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                                                             & (0x13U 
                                                                == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)))
                                                             ? 
                                                            (vlSelf->top__DOT__franken_riscv__DOT__src1_forward 
                                                             ^ vlSelf->top__DOT__franken_riscv__DOT__imm)
                                                             : 
                                                            ((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_lb)
                                                              ? 
                                                             (vlSelf->top__DOT__franken_riscv__DOT__src1_forward 
                                                              + vlSelf->top__DOT__franken_riscv__DOT__imm)
                                                              : 
                                                             ((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_lbu)
                                                               ? 
                                                              (vlSelf->top__DOT__franken_riscv__DOT__src1_forward 
                                                               + vlSelf->top__DOT__franken_riscv__DOT__imm)
                                                               : 
                                                              ((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_lh)
                                                                ? 
                                                               (vlSelf->top__DOT__franken_riscv__DOT__src1_forward 
                                                                + vlSelf->top__DOT__franken_riscv__DOT__imm)
                                                                : 
                                                               ((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_lhu)
                                                                 ? 
                                                                (vlSelf->top__DOT__franken_riscv__DOT__src1_forward 
                                                                 + vlSelf->top__DOT__franken_riscv__DOT__imm)
                                                                 : 
                                                                ((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_lw)
                                                                  ? 
                                                                 (vlSelf->top__DOT__franken_riscv__DOT__src1_forward 
                                                                  + vlSelf->top__DOT__franken_riscv__DOT__imm)
                                                                  : 
                                                                 (((3U 
                                                                    == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                                                                   & (0x13U 
                                                                      == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)))
                                                                   ? 
                                                                  (vlSelf->top__DOT__franken_riscv__DOT__src1_forward 
                                                                   < vlSelf->top__DOT__franken_riscv__DOT__imm)
                                                                   : 
                                                                  (((2U 
                                                                     == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                                                                    & (0x13U 
                                                                       == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)))
                                                                    ? 
                                                                   VL_LTS_III(32, vlSelf->top__DOT__franken_riscv__DOT__src1_forward, vlSelf->top__DOT__franken_riscv__DOT__imm)
                                                                    : 
                                                                   (((0x33U 
                                                                      == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
                                                                     & ((3U 
                                                                         == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                                                                        & (0U 
                                                                           == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7))))
                                                                     ? 
                                                                    (vlSelf->top__DOT__franken_riscv__DOT__src1_forward 
                                                                     < vlSelf->top__DOT__franken_riscv__DOT__src2_forward)
                                                                     : 
                                                                    (((0x33U 
                                                                       == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
                                                                      & ((1U 
                                                                          == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                                                                         & (0U 
                                                                            == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7))))
                                                                      ? 
                                                                     VL_SHIFTL_III(32,32,32, vlSelf->top__DOT__franken_riscv__DOT__src1_forward, vlSelf->top__DOT__franken_riscv__DOT__src2_forward)
                                                                      : 
                                                                     (((0x33U 
                                                                        == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
                                                                       & ((2U 
                                                                           == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                                                                          & (0U 
                                                                             == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7))))
                                                                       ? 
                                                                      VL_LTS_III(32, vlSelf->top__DOT__franken_riscv__DOT__src1_forward, vlSelf->top__DOT__franken_riscv__DOT__src2_forward)
                                                                       : 
                                                                      (((IData)(vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_he89c683e__0) 
                                                                        & (0U 
                                                                           == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7)))
                                                                        ? 
                                                                       VL_SHIFTR_III(32,32,32, vlSelf->top__DOT__franken_riscv__DOT__src1_forward, vlSelf->top__DOT__franken_riscv__DOT__src2_forward)
                                                                        : 
                                                                       (((5U 
                                                                          == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3)) 
                                                                         & ((0x20U 
                                                                             == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7)) 
                                                                            & (0x13U 
                                                                               == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode))))
                                                                         ? 
                                                                        (vlSelf->top__DOT__franken_riscv__DOT__src1_forward 
                                                                         >> 
                                                                         (0x1fU 
                                                                          & vlSelf->top__DOT__franken_riscv__DOT__imm))
                                                                         : 
                                                                        (((IData)(vlSelf->top__DOT__franken_riscv__DOT____VdfgTmp_he89c683e__0) 
                                                                          & (0x20U 
                                                                             == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct7)))
                                                                          ? 
                                                                         VL_SHIFTR_III(32,32,32, vlSelf->top__DOT__franken_riscv__DOT__src1_forward, vlSelf->top__DOT__franken_riscv__DOT__src2_forward)
                                                                          : 
                                                                         ((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_mul)
                                                                           ? (IData)(vlSelf->top__DOT__franken_riscv__DOT__result_mul)
                                                                           : 
                                                                          ((((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_mulh) 
                                                                             | (IData)(vlSelf->top__DOT__franken_riscv__DOT__is_mulhsu)) 
                                                                            | (IData)(vlSelf->top__DOT__franken_riscv__DOT__is_mulhu))
                                                                            ? (IData)(
                                                                                (vlSelf->top__DOT__franken_riscv__DOT__result_mul 
                                                                                >> 0x20U))
                                                                            : 0U))))))))))))))))))))))))))))));
        vlSelf->top__DOT__franken_riscv__DOT__jump_add_Exec 
            = ((0x6fU == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode))
                ? (vlSelf->top__DOT__franken_riscv__DOT__pc_dec 
                   + vlSelf->top__DOT__franken_riscv__DOT__imm)
                : ((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_jalr)
                    ? (vlSelf->top__DOT__franken_riscv__DOT__src2_forward 
                       + vlSelf->top__DOT__franken_riscv__DOT__imm)
                    : (((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_beq) 
                        & (vlSelf->top__DOT__franken_riscv__DOT__src1_forward 
                           == vlSelf->top__DOT__franken_riscv__DOT__src2_forward))
                        ? (vlSelf->top__DOT__franken_riscv__DOT__pc_dec 
                           + vlSelf->top__DOT__franken_riscv__DOT__imm)
                        : (((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_bne) 
                            & (vlSelf->top__DOT__franken_riscv__DOT__src1_forward 
                               != vlSelf->top__DOT__franken_riscv__DOT__src2_forward))
                            ? (vlSelf->top__DOT__franken_riscv__DOT__pc_dec 
                               + vlSelf->top__DOT__franken_riscv__DOT__imm)
                            : (((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_blt) 
                                & VL_LTS_III(32, vlSelf->top__DOT__franken_riscv__DOT__src1_forward, vlSelf->top__DOT__franken_riscv__DOT__src2_forward))
                                ? (vlSelf->top__DOT__franken_riscv__DOT__pc_dec 
                                   + vlSelf->top__DOT__franken_riscv__DOT__imm)
                                : ((((0x63U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__opcode)) 
                                     & (6U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__funct3))) 
                                    & (vlSelf->top__DOT__franken_riscv__DOT__src1_forward 
                                       < vlSelf->top__DOT__franken_riscv__DOT__src2_forward))
                                    ? (vlSelf->top__DOT__franken_riscv__DOT__pc_dec 
                                       + vlSelf->top__DOT__franken_riscv__DOT__imm)
                                    : (((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_bge) 
                                        & VL_GTES_III(32, vlSelf->top__DOT__franken_riscv__DOT__src1_forward, vlSelf->top__DOT__franken_riscv__DOT__src2_forward))
                                        ? (vlSelf->top__DOT__franken_riscv__DOT__pc_dec 
                                           + vlSelf->top__DOT__franken_riscv__DOT__imm)
                                        : (((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_bgeu) 
                                            & (vlSelf->top__DOT__franken_riscv__DOT__src1_forward 
                                               >= vlSelf->top__DOT__franken_riscv__DOT__src2_forward))
                                            ? (vlSelf->top__DOT__franken_riscv__DOT__pc_dec 
                                               + vlSelf->top__DOT__franken_riscv__DOT__imm)
                                            : ((IData)(4U) 
                                               + vlSelf->top__DOT__franken_riscv__DOT__pc_dec)))))))));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__2\n"); );
    // Body
    vlSelf->top__DOT__franken_riscv__DOT__src1_forward 
        = ((2U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__Fwd_A))
            ? vlSelf->top__DOT__franken_riscv__DOT__alu_result_Mem
            : ((1U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__Fwd_A))
                ? vlSelf->top__DOT__write_reg : vlSelf->top__DOT__src1));
    vlSelf->top__DOT__franken_riscv__DOT__src2_forward 
        = ((2U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__Fwd_B))
            ? vlSelf->top__DOT__franken_riscv__DOT__alu_result_Mem
            : ((1U == (IData)(vlSelf->top__DOT__franken_riscv__DOT__Fwd_B))
                ? vlSelf->top__DOT__write_reg : vlSelf->top__DOT__src2));
    vlSelf->top__DOT__franken_riscv__DOT__next_pc = 
        ((7U == (IData)(vlSelf->top__DOT__power_on_reset__DOT__q))
          ? ((IData)(vlSelf->top__DOT__franken_riscv__DOT__is_conditional_jump_Dec)
              ? vlSelf->top__DOT__franken_riscv__DOT__jump_add_Exec
              : ((IData)(vlSelf->top__DOT__franken_riscv__DOT__stall_Exec)
                  ? vlSelf->top__DOT__pc : ((IData)(4U) 
                                            + vlSelf->top__DOT__pc)))
          : 0U);
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((0x21ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__8(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__9(vlSelf);
    }
    if ((0x21ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((0x31ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__2(vlSelf);
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<7> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("top.v", 6, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("top.v", 6, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
