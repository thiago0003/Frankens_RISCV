// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (0U == vlSelf->__VicoIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->CLOCK_50) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__CLOCK_50__0))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->VGA_CLK) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__VGA_CLK__0))));
    vlSelf->__VactTriggered.set(2U, ((~ (IData)(vlSelf->CLOCK_50)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__CLOCK_50__0)));
    vlSelf->__VactTriggered.set(3U, ((IData)(vlSelf->top__DOT____Vcellinp__dmem____pinNumber1) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__top__DOT____Vcellinp__dmem____pinNumber1__0))));
    vlSelf->__Vtrigprevexpr___TOP__CLOCK_50__0 = vlSelf->CLOCK_50;
    vlSelf->__Vtrigprevexpr___TOP__VGA_CLK__0 = vlSelf->VGA_CLK;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT____Vcellinp__dmem____pinNumber1__0 
        = vlSelf->top__DOT____Vcellinp__dmem____pinNumber1;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}
