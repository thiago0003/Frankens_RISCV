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
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->top__DOT__blk85_7__DOT__counter = 0ULL;
    vlSelf->top__DOT__blk85_7__DOT__state = 7U;
    vlSelf->top__DOT__blk85_7__DOT__dc = 1U;
    vlSelf->top__DOT__blk85_7__DOT__sclk = 1U;
    vlSelf->top__DOT__blk85_7__DOT__sdin = 0U;
    vlSelf->top__DOT__blk85_7__DOT__reset = 1U;
    vlSelf->top__DOT__blk85_7__DOT__cs = 0U;
    vlSelf->top__DOT__blk85_7__DOT__dataToSend = 0U;
    vlSelf->top__DOT__blk85_7__DOT__bitNumber = 0U;
    vlSelf->top__DOT__blk85_7__DOT__pixelCounter = 0U;
    vlSelf->top__DOT__blk85_7__DOT__commandIndex = 0xb8U;
    vlSelf->top__DOT__blk128_26__DOT__count = 0xfU;
    vlSelf->top__DOT__blk128_26__DOT__verificao = 1U;
    vlSelf->top__DOT__blk107_39__DOT__counter = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    VL_READMEM_N(true, 8, 1520, 0, std::string{"font.hex"}
                 ,  &(vlSelf->top__DOT__blk86_28__DOT__fontBuffer)
                 , 0, ~0ULL);
    vlSelf->top__DOT__w_30 = 0U;
    vlSelf->top__DOT__w_1 = 1U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0U] = 0x11000913U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[1U] = 0x493U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[2U] = 0x880006fU;
    vlSelf->top__DOT__blk218_40__DOT__RAM[3U] = 0x93U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[4U] = 0x740006fU;
    vlSelf->top__DOT__blk218_40__DOT__RAM[5U] = 0x12007b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[6U] = 0x107d713U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[7U] = 0x12007b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[8U] = 0xe7d793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[9U] = 0xf74733U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xaU] = 0x12007b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xbU] = 0xd7d793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xcU] = 0xf74733U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xdU] = 0x12007b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xeU] = 0xb7d793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xfU] = 0xf747b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x10U] = 0x17f713U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x11U] = 0x12007b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x12U] = 0x179793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x13U] = 0xf767b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x14U] = 0xf00933U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x15U] = 0xff97713U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x16U] = 0x509693U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x17U] = 0x309793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x18U] = 0xf687b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x19U] = 0xf487b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x1aU] = 0x177713U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x1bU] = 0xff77713U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x1cU] = 0x6b7U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x1dU] = 0x68693U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x1eU] = 0xf687b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x1fU] = 0xe78023U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x20U] = 0x108093U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x21U] = 0x1d00793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x22U] = 0xf817d6e3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x23U] = 0x148493U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x24U] = 0x2700793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x25U] = 0xf697dce3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x26U] = 0x93U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x27U] = 0x4c0006fU;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x28U] = 0x7b7U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x29U] = 0x78793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x2aU] = 0x1787b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x2bU] = 0x7c703U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x2cU] = 0x7b7U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x2dU] = 0x52878793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x2eU] = 0x1787b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x2fU] = 0xe78023U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x30U] = 0x48808793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x31U] = 0x737U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x32U] = 0x70713U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x33U] = 0xf707b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x34U] = 0x7c703U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x35U] = 0x7b7U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x36U] = 0x50078793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x37U] = 0x1787b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x38U] = 0xe78023U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x39U] = 0x108093U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x3aU] = 0x2700793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x3bU] = 0xfa17dae3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x3cU] = 0x93U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x3dU] = 0x2900006fU;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x3eU] = 0x493U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x3fU] = 0x1dc0006fU;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x40U] = 0x48663U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x41U] = 0xfff48793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x42U] = 0x80006fU;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x43U] = 0x2700793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x44U] = 0x737U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x45U] = 0x50070713U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x46U] = 0xf707b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x47U] = 0x7c703U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x48U] = 0x7b7U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x49U] = 0x50078793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x4aU] = 0x9787b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x4bU] = 0x7c783U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x4cU] = 0xf707b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x4dU] = 0xff7f713U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x4eU] = 0x2700793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x4fU] = 0xf48663U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x50U] = 0x148793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x51U] = 0x80006fU;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x52U] = 0x793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x53U] = 0x6b7U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x54U] = 0x50068693U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x55U] = 0xf687b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x56U] = 0x7c783U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x57U] = 0xf707b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x58U] = 0xff7f713U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x59U] = 0x509693U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x5aU] = 0x309793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x5bU] = 0xf686b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x5cU] = 0x48663U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x5dU] = 0xfff48793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x5eU] = 0x80006fU;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x5fU] = 0x2700793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x60U] = 0xd787b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x61U] = 0x6b7U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x62U] = 0x68693U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x63U] = 0xf687b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x64U] = 0x7c783U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x65U] = 0xf707b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x66U] = 0xff7f713U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x67U] = 0x509693U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x68U] = 0x309793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x69U] = 0xf686b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x6aU] = 0x2700793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x6bU] = 0xf48663U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x6cU] = 0x148793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x6dU] = 0x80006fU;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x6eU] = 0x793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x6fU] = 0xd787b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x70U] = 0x6b7U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x71U] = 0x68693U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x72U] = 0xf687b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x73U] = 0x7c783U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x74U] = 0xf707b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x75U] = 0xff7f713U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x76U] = 0x108793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x77U] = 0x579693U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x78U] = 0x108793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x79U] = 0x379793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x7aU] = 0xf686b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x7bU] = 0x48663U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x7cU] = 0xfff48793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x7dU] = 0x80006fU;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x7eU] = 0x2700793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x7fU] = 0xd787b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x80U] = 0x6b7U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x81U] = 0x68693U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x82U] = 0xf687b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x83U] = 0x7c783U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x84U] = 0xf707b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x85U] = 0xff7f713U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x86U] = 0x108793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x87U] = 0x579693U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x88U] = 0x108793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x89U] = 0x379793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x8aU] = 0xf687b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x8bU] = 0xf487b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x8cU] = 0x6b7U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x8dU] = 0x68693U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x8eU] = 0xf687b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x8fU] = 0x7c783U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x90U] = 0xf707b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x91U] = 0xff7f713U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x92U] = 0x108793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x93U] = 0x579693U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x94U] = 0x108793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x95U] = 0x379793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x96U] = 0xf686b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x97U] = 0x2700793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x98U] = 0xf48663U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x99U] = 0x148793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x9aU] = 0x80006fU;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x9bU] = 0x793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x9cU] = 0xd787b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x9dU] = 0x6b7U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x9eU] = 0x68693U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x9fU] = 0xf687b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xa0U] = 0x7c783U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xa1U] = 0xf707b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xa2U] = 0xff7f913U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xa3U] = 0x509713U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xa4U] = 0x309793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xa5U] = 0xf707b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xa6U] = 0xf487b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xa7U] = 0x737U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xa8U] = 0x70713U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xa9U] = 0xf707b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xaaU] = 0x7c783U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xabU] = 0xf967b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xacU] = 0xff7f793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xadU] = 0xffd78793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xaeU] = 0x17b793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xafU] = 0xff7f793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xb0U] = 0xf00733U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xb1U] = 0x7b7U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xb2U] = 0x4b078793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xb3U] = 0x9787b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xb4U] = 0xe78023U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xb5U] = 0x148493U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xb6U] = 0x2700793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xb7U] = 0xe297d2e3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xb8U] = 0x493U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xb9U] = 0x940006fU;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xbaU] = 0x509713U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xbbU] = 0x309793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xbcU] = 0xf707b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xbdU] = 0xf487b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xbeU] = 0x737U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xbfU] = 0x70713U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xc0U] = 0xf707b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xc1U] = 0x7c703U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xc2U] = 0x7b7U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xc3U] = 0x50078793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xc4U] = 0x9787b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xc5U] = 0xe78023U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xc6U] = 0x2105e63U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xc7U] = 0xfff08793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xc8U] = 0x579713U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xc9U] = 0xfff08793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xcaU] = 0x379793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xcbU] = 0xf707b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xccU] = 0xf487b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xcdU] = 0x737U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xceU] = 0x4d870713U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xcfU] = 0x970733U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xd0U] = 0x74703U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xd1U] = 0x6b7U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xd2U] = 0x68693U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xd3U] = 0xf687b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xd4U] = 0xe78023U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xd5U] = 0x7b7U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xd6U] = 0x4b078793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xd7U] = 0x9787b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xd8U] = 0x7c703U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xd9U] = 0x7b7U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xdaU] = 0x4d878793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xdbU] = 0x9787b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xdcU] = 0xe78023U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xddU] = 0x148493U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xdeU] = 0x2700793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xdfU] = 0xf697d6e3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xe0U] = 0x108093U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xe1U] = 0x1c00793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xe2U] = 0xd617d8e3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xe3U] = 0x93U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xe4U] = 0x1680006fU;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xe5U] = 0x8663U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xe6U] = 0xfff08793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xe7U] = 0x80006fU;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xe8U] = 0x2700793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xe9U] = 0x737U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xeaU] = 0x50070713U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xebU] = 0xf707b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xecU] = 0x7c703U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xedU] = 0x7b7U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xeeU] = 0x50078793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xefU] = 0x1787b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xf0U] = 0x7c783U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xf1U] = 0xf707b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xf2U] = 0xff7f713U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xf3U] = 0x2700793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xf4U] = 0xf08663U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xf5U] = 0x108793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xf6U] = 0x80006fU;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xf7U] = 0x793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xf8U] = 0x6b7U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xf9U] = 0x50068693U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xfaU] = 0xf687b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xfbU] = 0x7c783U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xfcU] = 0xf707b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xfdU] = 0xff7f713U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xfeU] = 0x8663U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0xffU] = 0x48708793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x100U] = 0x80006fU;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x101U] = 0x4af00793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x102U] = 0x6b7U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x103U] = 0x68693U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x104U] = 0xf687b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x105U] = 0x7c783U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x106U] = 0xf707b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x107U] = 0xff7f713U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x108U] = 0x2700793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x109U] = 0xf08663U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x10aU] = 0x48908793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x10bU] = 0x80006fU;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x10cU] = 0x48800793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x10dU] = 0x6b7U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x10eU] = 0x68693U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x10fU] = 0xf687b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x110U] = 0x7c783U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x111U] = 0xf707b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x112U] = 0xff7f713U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x113U] = 0x8663U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x114U] = 0xfff08793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x115U] = 0x80006fU;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x116U] = 0x2700793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x117U] = 0x6b7U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x118U] = 0x52868693U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x119U] = 0xf687b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x11aU] = 0x7c783U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x11bU] = 0xf707b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x11cU] = 0xff7f713U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x11dU] = 0x7b7U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x11eU] = 0x52878793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x11fU] = 0x1787b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x120U] = 0x7c783U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x121U] = 0xf707b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x122U] = 0xff7f713U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x123U] = 0x2700793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x124U] = 0xf08663U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x125U] = 0x108793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x126U] = 0x80006fU;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x127U] = 0x793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x128U] = 0x6b7U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x129U] = 0x52868693U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x12aU] = 0xf687b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x12bU] = 0x7c783U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x12cU] = 0xf707b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x12dU] = 0xff7f913U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x12eU] = 0x48808793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x12fU] = 0x737U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x130U] = 0x70713U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x131U] = 0xf707b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x132U] = 0x7c783U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x133U] = 0xf967b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x134U] = 0xff7f793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x135U] = 0xffd78793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x136U] = 0x17b793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x137U] = 0xff7f793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x138U] = 0xf00733U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x139U] = 0x7b7U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x13aU] = 0x4d878793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x13bU] = 0x1787b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x13cU] = 0xe78023U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x13dU] = 0x108093U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x13eU] = 0x2700793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x13fU] = 0xe817dce3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x140U] = 0x93U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x141U] = 0x500006fU;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x142U] = 0x46008793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x143U] = 0x737U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x144U] = 0x4b070713U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x145U] = 0x170733U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x146U] = 0x74703U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x147U] = 0x6b7U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x148U] = 0x68693U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x149U] = 0xf687b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x14aU] = 0xe78023U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x14bU] = 0x48808793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x14cU] = 0x737U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x14dU] = 0x4d870713U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x14eU] = 0x170733U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x14fU] = 0x74703U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x150U] = 0x6b7U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x151U] = 0x68693U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x152U] = 0xf687b3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x153U] = 0xe78023U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x154U] = 0x108093U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x155U] = 0x2700793U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x156U] = 0xfa17d8e3U;
    vlSelf->top__DOT__blk218_40__DOT__RAM[0x157U] = 0xb3dff06fU;
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

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ top__DOT__blk220_1__DOT____VdfgTmp_h9eaf8fe7__0;
    top__DOT__blk220_1__DOT____VdfgTmp_h9eaf8fe7__0 = 0;
    IData/*31:0*/ top__DOT__blk220_1__DOT____VdfgTmp_h1f987d1c__0;
    top__DOT__blk220_1__DOT____VdfgTmp_h1f987d1c__0 = 0;
    IData/*31:0*/ top__DOT__blk220_1__DOT____VdfgTmp_hbc0fc7ad__0;
    top__DOT__blk220_1__DOT____VdfgTmp_hbc0fc7ad__0 = 0;
    CData/*0:0*/ top__DOT__blk220_1__DOT____VdfgTmp_h6f3d6917__0;
    top__DOT__blk220_1__DOT____VdfgTmp_h6f3d6917__0 = 0;
    CData/*0:0*/ top__DOT__blk220_1__DOT____VdfgTmp_h6f017867__0;
    top__DOT__blk220_1__DOT____VdfgTmp_h6f017867__0 = 0;
    IData/*31:0*/ top__DOT__blk220_1__DOT____VdfgTmp_h68a24e47__0;
    top__DOT__blk220_1__DOT____VdfgTmp_h68a24e47__0 = 0;
    CData/*7:0*/ top__DOT__blk220_1__DOT____VdfgTmp_hb90c0577__0;
    top__DOT__blk220_1__DOT____VdfgTmp_hb90c0577__0 = 0;
    CData/*0:0*/ top__DOT__blk220_1__DOT____VdfgTmp_hcb1e93f3__0;
    top__DOT__blk220_1__DOT____VdfgTmp_hcb1e93f3__0 = 0;
    CData/*0:0*/ top__DOT__blk220_1__DOT____VdfgTmp_he41587d0__0;
    top__DOT__blk220_1__DOT____VdfgTmp_he41587d0__0 = 0;
    CData/*0:0*/ top__DOT__blk220_1__DOT____VdfgTmp_h75ed175f__0;
    top__DOT__blk220_1__DOT____VdfgTmp_h75ed175f__0 = 0;
    CData/*0:0*/ top__DOT__blk221_25__DOT____VdfgTmp_h9b725a6a__0;
    top__DOT__blk221_25__DOT____VdfgTmp_h9b725a6a__0 = 0;
    CData/*0:0*/ top__DOT__blk221_25__DOT____VdfgTmp_haa71103e__0;
    top__DOT__blk221_25__DOT____VdfgTmp_haa71103e__0 = 0;
    IData/*31:0*/ __VdfgTmp_hf9ebf349__0;
    __VdfgTmp_hf9ebf349__0 = 0;
    VlWide<4>/*127:0*/ __Vtemp_54;
    VlWide<4>/*127:0*/ __Vtemp_70;
    VlWide<4>/*127:0*/ __Vtemp_84;
    VlWide<4>/*127:0*/ __Vtemp_98;
    VlWide<4>/*127:0*/ __Vtemp_108;
    // Body
    vlSelf->sck1 = vlSelf->top__DOT__blk85_7__DOT__sclk;
    vlSelf->sda1 = vlSelf->top__DOT__blk85_7__DOT__sdin;
    vlSelf->cs1 = vlSelf->top__DOT__blk85_7__DOT__cs;
    vlSelf->dc1 = vlSelf->top__DOT__blk85_7__DOT__dc;
    vlSelf->res1 = vlSelf->top__DOT__blk85_7__DOT__reset;
    vlSelf->top__DOT__blk86_28__DOT__chosenChar = (
                                                   ((0x20U 
                                                     <= (IData)(vlSelf->top__DOT__w_30)) 
                                                    & (0x7eU 
                                                       >= (IData)(vlSelf->top__DOT__w_30)))
                                                    ? (IData)(vlSelf->top__DOT__w_30)
                                                    : 0x20U);
    vlSelf->top__DOT__w_3 = vlSelf->top__DOT__blk218_40__DOT__RAM
        [(0x1ffU & (vlSelf->top__DOT__w_7 >> 2U))];
    vlSelf->top__DOT__blk220_1__DOT__funct7 = ((0x33U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->top__DOT__w_3))
                                                ? (vlSelf->top__DOT__w_3 
                                                   >> 0x19U)
                                                : 0U);
    vlSelf->top__DOT__blk220_1__DOT__U_type = ((0x37U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->top__DOT__w_3)) 
                                               | (0x17U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->top__DOT__w_3)));
    vlSelf->top__DOT__blk220_1__DOT__I_type = ((0x67U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->top__DOT__w_3)) 
                                               | ((3U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->top__DOT__w_3)) 
                                                  | (0x13U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->top__DOT__w_3))));
    top__DOT__blk220_1__DOT____VdfgTmp_h75ed175f__0 
        = ((0x23U == (0x7fU & vlSelf->top__DOT__w_3)) 
           | (0x63U == (0x7fU & vlSelf->top__DOT__w_3)));
    vlSelf->top__DOT__blk221_25__DOT____VdfgTmp_hdf511576__0 
        = ((0U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct7)) 
           & (0x13U == (0x7fU & vlSelf->top__DOT__w_3)));
    vlSelf->__VdfgTmp_hb17978b1__0 = ((0x20U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct7)) 
                                      & (0x13U == (0x7fU 
                                                   & vlSelf->top__DOT__w_3)));
    vlSelf->top__DOT__blk220_1__DOT__imm = ((IData)(vlSelf->top__DOT__blk220_1__DOT__I_type)
                                             ? (((- (IData)(
                                                            (vlSelf->top__DOT__w_3 
                                                             >> 0x1fU))) 
                                                 << 0xcU) 
                                                | (vlSelf->top__DOT__w_3 
                                                   >> 0x14U))
                                             : ((0x23U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->top__DOT__w_3))
                                                 ? 
                                                (((- (IData)(
                                                             (vlSelf->top__DOT__w_3 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | ((0xfe0U 
                                                     & (vlSelf->top__DOT__w_3 
                                                        >> 0x14U)) 
                                                    | (0x1fU 
                                                       & (vlSelf->top__DOT__w_3 
                                                          >> 7U))))
                                                 : 
                                                ((0x63U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->top__DOT__w_3))
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSelf->top__DOT__w_3 
                                                               >> 0x1fU))) 
                                                   << 0xdU) 
                                                  | ((0x1000U 
                                                      & (vlSelf->top__DOT__w_3 
                                                         >> 0x13U)) 
                                                     | ((0x800U 
                                                         & (vlSelf->top__DOT__w_3 
                                                            << 4U)) 
                                                        | ((0x7e0U 
                                                            & (vlSelf->top__DOT__w_3 
                                                               >> 0x14U)) 
                                                           | (0x1eU 
                                                              & (vlSelf->top__DOT__w_3 
                                                                 >> 7U))))))
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__blk220_1__DOT__U_type)
                                                   ? 
                                                  (0xfffff000U 
                                                   & vlSelf->top__DOT__w_3)
                                                   : 
                                                  ((0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->top__DOT__w_3))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->top__DOT__w_3 
                                                                 >> 0x1fU))) 
                                                     << 0x15U) 
                                                    | ((0x100000U 
                                                        & (vlSelf->top__DOT__w_3 
                                                           >> 0xbU)) 
                                                       | ((0xff000U 
                                                           & vlSelf->top__DOT__w_3) 
                                                          | ((0x800U 
                                                              & (vlSelf->top__DOT__w_3 
                                                                 >> 9U)) 
                                                             | (0x7feU 
                                                                & (vlSelf->top__DOT__w_3 
                                                                   >> 0x14U))))))
                                                    : 0U)))));
    top__DOT__blk220_1__DOT____VdfgTmp_he41587d0__0 
        = ((0x33U == (0x7fU & vlSelf->top__DOT__w_3)) 
           | (IData)(vlSelf->top__DOT__blk220_1__DOT__I_type));
    vlSelf->top__DOT__blk221_25__DOT__funct3 = (((0x33U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->top__DOT__w_3)) 
                                                 | ((IData)(vlSelf->top__DOT__blk220_1__DOT__I_type) 
                                                    | (IData)(top__DOT__blk220_1__DOT____VdfgTmp_h75ed175f__0)))
                                                 ? 
                                                (7U 
                                                 & (vlSelf->top__DOT__w_3 
                                                    >> 0xcU))
                                                 : 0U);
    vlSelf->top__DOT__blk220_1__DOT____VdfgTmp_hd86a4e63__0 
        = ((0x33U == (0x7fU & vlSelf->top__DOT__w_3)) 
           | (IData)(top__DOT__blk220_1__DOT____VdfgTmp_h75ed175f__0));
    top__DOT__blk220_1__DOT____VdfgTmp_hbc0fc7ad__0 
        = (vlSelf->top__DOT__w_7 + vlSelf->top__DOT__blk220_1__DOT__imm);
    vlSelf->top__DOT__w_15 = (((IData)(top__DOT__blk220_1__DOT____VdfgTmp_he41587d0__0) 
                               | ((IData)(vlSelf->top__DOT__blk220_1__DOT__U_type) 
                                  | (0x6fU == (0x7fU 
                                               & vlSelf->top__DOT__w_3))))
                               ? (0x1fU & (vlSelf->top__DOT__w_3 
                                           >> 7U)) : 0U);
    top__DOT__blk220_1__DOT____VdfgTmp_hcb1e93f3__0 
        = ((IData)(top__DOT__blk220_1__DOT____VdfgTmp_he41587d0__0) 
           | (IData)(top__DOT__blk220_1__DOT____VdfgTmp_h75ed175f__0));
    top__DOT__blk221_25__DOT____VdfgTmp_h9b725a6a__0 
        = ((0x33U == (0x7fU & vlSelf->top__DOT__w_3)) 
           & (0U == (IData)(vlSelf->top__DOT__blk221_25__DOT__funct3)));
    top__DOT__blk221_25__DOT____VdfgTmp_haa71103e__0 
        = ((0x33U == (0x7fU & vlSelf->top__DOT__w_3)) 
           & (5U == (IData)(vlSelf->top__DOT__blk221_25__DOT__funct3)));
    vlSelf->top__DOT__w_14 = ((IData)(vlSelf->top__DOT__blk220_1__DOT____VdfgTmp_hd86a4e63__0)
                               ? (0x1fU & (vlSelf->top__DOT__w_3 
                                           >> 0x14U))
                               : 0U);
    if (top__DOT__blk220_1__DOT____VdfgTmp_hcb1e93f3__0) {
        vlSelf->top__DOT__w_13 = (0x1fU & (vlSelf->top__DOT__w_3 
                                           >> 0xfU));
        vlSelf->top__DOT__blk220_1__DOT__funct3 = (7U 
                                                   & (vlSelf->top__DOT__w_3 
                                                      >> 0xcU));
    } else {
        vlSelf->top__DOT__w_13 = 0U;
        vlSelf->top__DOT__blk220_1__DOT__funct3 = 0U;
    }
    if (((0x63U == (0x7fU & vlSelf->top__DOT__w_3)) 
         & (0U == (IData)(vlSelf->top__DOT__blk221_25__DOT__funct3)))) {
        __Vtemp_54[0U] = 0U;
        __Vtemp_54[1U] = 0x42455100U;
        __Vtemp_54[2U] = 0U;
        __Vtemp_54[3U] = 0U;
    } else if (((0x63U == (0x7fU & vlSelf->top__DOT__w_3)) 
                & (4U == (IData)(vlSelf->top__DOT__blk221_25__DOT__funct3)))) {
        __Vtemp_54[0U] = 0U;
        __Vtemp_54[1U] = 0x424c5400U;
        __Vtemp_54[2U] = 0U;
        __Vtemp_54[3U] = 0U;
    } else if (((0x63U == (0x7fU & vlSelf->top__DOT__w_3)) 
                & (1U == (IData)(vlSelf->top__DOT__blk221_25__DOT__funct3)))) {
        __Vtemp_54[0U] = 0U;
        __Vtemp_54[1U] = 0x424e4500U;
        __Vtemp_54[2U] = 0U;
        __Vtemp_54[3U] = 0U;
    } else if (((0x63U == (0x7fU & vlSelf->top__DOT__w_3)) 
                & (6U == (IData)(vlSelf->top__DOT__blk221_25__DOT__funct3)))) {
        __Vtemp_54[0U] = 0U;
        __Vtemp_54[1U] = 0x424c5455U;
        __Vtemp_54[2U] = 0U;
        __Vtemp_54[3U] = 0U;
    } else if (((0x63U == (0x7fU & vlSelf->top__DOT__w_3)) 
                & (7U == (IData)(vlSelf->top__DOT__blk221_25__DOT__funct3)))) {
        __Vtemp_54[0U] = 0U;
        __Vtemp_54[1U] = 0x42474555U;
        __Vtemp_54[2U] = 0U;
        __Vtemp_54[3U] = 0U;
    } else if ((0x17U == (0x7fU & vlSelf->top__DOT__w_3))) {
        __Vtemp_54[0U] = 0x43000000U;
        __Vtemp_54[1U] = 0x41554950U;
        __Vtemp_54[2U] = 0U;
        __Vtemp_54[3U] = 0U;
    } else if ((0x37U == (0x7fU & vlSelf->top__DOT__w_3))) {
        __Vtemp_54[0U] = 0U;
        __Vtemp_54[1U] = 0x4c554900U;
        __Vtemp_54[2U] = 0U;
        __Vtemp_54[3U] = 0U;
    } else {
        __Vtemp_54[0U] = 0U;
        __Vtemp_54[1U] = ((0x6fU == (0x7fU & vlSelf->top__DOT__w_3))
                           ? 0x4a414c00U : 0U);
        __Vtemp_54[2U] = 0U;
        __Vtemp_54[3U] = 0U;
    }
    if (((7U == (IData)(vlSelf->top__DOT__blk221_25__DOT__funct3)) 
         & (0x13U == (0x7fU & vlSelf->top__DOT__w_3)))) {
        __Vtemp_70[0U] = 0U;
        __Vtemp_70[1U] = 0x414e4449U;
        __Vtemp_70[2U] = 0U;
        __Vtemp_70[3U] = 0U;
    } else if (((1U == (IData)(vlSelf->top__DOT__blk221_25__DOT__funct3)) 
                & (IData)(vlSelf->top__DOT__blk221_25__DOT____VdfgTmp_hdf511576__0))) {
        __Vtemp_70[0U] = 0U;
        __Vtemp_70[1U] = 0x534c4c49U;
        __Vtemp_70[2U] = 0U;
        __Vtemp_70[3U] = 0U;
    } else if (((5U == (IData)(vlSelf->top__DOT__blk221_25__DOT__funct3)) 
                & (IData)(vlSelf->top__DOT__blk221_25__DOT____VdfgTmp_hdf511576__0))) {
        __Vtemp_70[0U] = 0U;
        __Vtemp_70[1U] = 0x53524c49U;
        __Vtemp_70[2U] = 0U;
        __Vtemp_70[3U] = 0U;
    } else if (((5U == (IData)(vlSelf->top__DOT__blk221_25__DOT__funct3)) 
                & (IData)(vlSelf->__VdfgTmp_hb17978b1__0))) {
        __Vtemp_70[0U] = 0U;
        __Vtemp_70[1U] = 0x53524149U;
        __Vtemp_70[2U] = 0U;
        __Vtemp_70[3U] = 0U;
    } else if (((0x23U == (0x7fU & vlSelf->top__DOT__w_3)) 
                & (2U == (IData)(vlSelf->top__DOT__blk221_25__DOT__funct3)))) {
        __Vtemp_70[0U] = 0U;
        __Vtemp_70[1U] = 0x53570000U;
        __Vtemp_70[2U] = 0U;
        __Vtemp_70[3U] = 0U;
    } else if (((0x23U == (0x7fU & vlSelf->top__DOT__w_3)) 
                & (0U == (IData)(vlSelf->top__DOT__blk221_25__DOT__funct3)))) {
        __Vtemp_70[0U] = 0U;
        __Vtemp_70[1U] = 0x53420000U;
        __Vtemp_70[2U] = 0U;
        __Vtemp_70[3U] = 0U;
    } else if (((0x23U == (0x7fU & vlSelf->top__DOT__w_3)) 
                & (1U == (IData)(vlSelf->top__DOT__blk221_25__DOT__funct3)))) {
        __Vtemp_70[0U] = 0U;
        __Vtemp_70[1U] = 0x53480000U;
        __Vtemp_70[2U] = 0U;
        __Vtemp_70[3U] = 0U;
    } else if (((0x63U == (0x7fU & vlSelf->top__DOT__w_3)) 
                & (5U == (IData)(vlSelf->top__DOT__blk221_25__DOT__funct3)))) {
        __Vtemp_70[0U] = 0U;
        __Vtemp_70[1U] = 0x42474500U;
        __Vtemp_70[2U] = 0U;
        __Vtemp_70[3U] = 0U;
    } else {
        __Vtemp_70[0U] = __Vtemp_54[0U];
        __Vtemp_70[1U] = __Vtemp_54[1U];
        __Vtemp_70[2U] = __Vtemp_54[2U];
        __Vtemp_70[3U] = __Vtemp_54[3U];
    }
    if (((4U == (IData)(vlSelf->top__DOT__blk221_25__DOT__funct3)) 
         & (3U == (0x7fU & vlSelf->top__DOT__w_3)))) {
        __Vtemp_84[0U] = 0U;
        __Vtemp_84[1U] = 0x4c425500U;
        __Vtemp_84[2U] = 0U;
        __Vtemp_84[3U] = 0U;
    } else if (((5U == (IData)(vlSelf->top__DOT__blk221_25__DOT__funct3)) 
                & (3U == (0x7fU & vlSelf->top__DOT__w_3)))) {
        __Vtemp_84[0U] = 0U;
        __Vtemp_84[1U] = 0x4c485500U;
        __Vtemp_84[2U] = 0U;
        __Vtemp_84[3U] = 0U;
    } else if (((0U == (IData)(vlSelf->top__DOT__blk221_25__DOT__funct3)) 
                & (0x13U == (0x7fU & vlSelf->top__DOT__w_3)))) {
        __Vtemp_84[0U] = 0U;
        __Vtemp_84[1U] = 0x41444449U;
        __Vtemp_84[2U] = 0U;
        __Vtemp_84[3U] = 0U;
    } else if (((2U == (IData)(vlSelf->top__DOT__blk221_25__DOT__funct3)) 
                & (0x13U == (0x7fU & vlSelf->top__DOT__w_3)))) {
        __Vtemp_84[0U] = 0U;
        __Vtemp_84[1U] = 0x534c5449U;
        __Vtemp_84[2U] = 0U;
        __Vtemp_84[3U] = 0U;
    } else if (((3U == (IData)(vlSelf->top__DOT__blk221_25__DOT__funct3)) 
                & (0x13U == (0x7fU & vlSelf->top__DOT__w_3)))) {
        __Vtemp_84[0U] = 0x55000000U;
        __Vtemp_84[1U] = 0x534c5449U;
        __Vtemp_84[2U] = 0U;
        __Vtemp_84[3U] = 0U;
    } else if (((4U == (IData)(vlSelf->top__DOT__blk221_25__DOT__funct3)) 
                & (0x13U == (0x7fU & vlSelf->top__DOT__w_3)))) {
        __Vtemp_84[0U] = 0U;
        __Vtemp_84[1U] = 0x584f5249U;
        __Vtemp_84[2U] = 0U;
        __Vtemp_84[3U] = 0U;
    } else if (((6U == (IData)(vlSelf->top__DOT__blk221_25__DOT__funct3)) 
                & (0x13U == (0x7fU & vlSelf->top__DOT__w_3)))) {
        __Vtemp_84[0U] = 0U;
        __Vtemp_84[1U] = 0x4f524900U;
        __Vtemp_84[2U] = 0U;
        __Vtemp_84[3U] = 0U;
    } else {
        __Vtemp_84[0U] = __Vtemp_70[0U];
        __Vtemp_84[1U] = __Vtemp_70[1U];
        __Vtemp_84[2U] = __Vtemp_70[2U];
        __Vtemp_84[3U] = __Vtemp_70[3U];
    }
    if (((0x33U == (0x7fU & vlSelf->top__DOT__w_3)) 
         & ((2U == (IData)(vlSelf->top__DOT__blk221_25__DOT__funct3)) 
            & (0U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct7))))) {
        __Vtemp_98[0U] = 0U;
        __Vtemp_98[1U] = 0x534c5400U;
        __Vtemp_98[2U] = 0U;
        __Vtemp_98[3U] = 0U;
    } else if (((IData)(top__DOT__blk221_25__DOT____VdfgTmp_haa71103e__0) 
                & (0U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct7)))) {
        __Vtemp_98[0U] = 0U;
        __Vtemp_98[1U] = 0x53524c00U;
        __Vtemp_98[2U] = 0U;
        __Vtemp_98[3U] = 0U;
    } else if (((IData)(top__DOT__blk221_25__DOT____VdfgTmp_haa71103e__0) 
                & (0x20U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct7)))) {
        __Vtemp_98[0U] = 0U;
        __Vtemp_98[1U] = 0x53524100U;
        __Vtemp_98[2U] = 0U;
        __Vtemp_98[3U] = 0U;
    } else if (((0U == (IData)(vlSelf->top__DOT__blk221_25__DOT__funct3)) 
                & (0x67U == (0x7fU & vlSelf->top__DOT__w_3)))) {
        __Vtemp_98[0U] = 0U;
        __Vtemp_98[1U] = 0x4a414c52U;
        __Vtemp_98[2U] = 0U;
        __Vtemp_98[3U] = 0U;
    } else if (((0U == (IData)(vlSelf->top__DOT__blk221_25__DOT__funct3)) 
                & (3U == (0x7fU & vlSelf->top__DOT__w_3)))) {
        __Vtemp_98[0U] = 0U;
        __Vtemp_98[1U] = 0x4c420000U;
        __Vtemp_98[2U] = 0U;
        __Vtemp_98[3U] = 0U;
    } else if (((1U == (IData)(vlSelf->top__DOT__blk221_25__DOT__funct3)) 
                & (3U == (0x7fU & vlSelf->top__DOT__w_3)))) {
        __Vtemp_98[0U] = 0U;
        __Vtemp_98[1U] = 0x4c480000U;
        __Vtemp_98[2U] = 0U;
        __Vtemp_98[3U] = 0U;
    } else if (((2U == (IData)(vlSelf->top__DOT__blk221_25__DOT__funct3)) 
                & (3U == (0x7fU & vlSelf->top__DOT__w_3)))) {
        __Vtemp_98[0U] = 0U;
        __Vtemp_98[1U] = 0x4c570000U;
        __Vtemp_98[2U] = 0U;
        __Vtemp_98[3U] = 0U;
    } else {
        __Vtemp_98[0U] = __Vtemp_84[0U];
        __Vtemp_98[1U] = __Vtemp_84[1U];
        __Vtemp_98[2U] = __Vtemp_84[2U];
        __Vtemp_98[3U] = __Vtemp_84[3U];
    }
    if (((0x33U == (0x7fU & vlSelf->top__DOT__w_3)) 
         & ((4U == (IData)(vlSelf->top__DOT__blk221_25__DOT__funct3)) 
            & (0U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct7))))) {
        __Vtemp_108[0U] = 0U;
        __Vtemp_108[1U] = 0x584f5200U;
        __Vtemp_108[2U] = 0U;
        __Vtemp_108[3U] = 0U;
    } else if (((0x33U == (0x7fU & vlSelf->top__DOT__w_3)) 
                & ((6U == (IData)(vlSelf->top__DOT__blk221_25__DOT__funct3)) 
                   & (0U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct7))))) {
        __Vtemp_108[0U] = 0U;
        __Vtemp_108[1U] = 0x4f520000U;
        __Vtemp_108[2U] = 0U;
        __Vtemp_108[3U] = 0U;
    } else if (((0x33U == (0x7fU & vlSelf->top__DOT__w_3)) 
                & ((7U == (IData)(vlSelf->top__DOT__blk221_25__DOT__funct3)) 
                   & (0U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct7))))) {
        __Vtemp_108[0U] = 0U;
        __Vtemp_108[1U] = 0x414e4400U;
        __Vtemp_108[2U] = 0U;
        __Vtemp_108[3U] = 0U;
    } else if (((0x33U == (0x7fU & vlSelf->top__DOT__w_3)) 
                & ((3U == (IData)(vlSelf->top__DOT__blk221_25__DOT__funct3)) 
                   & (0U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct7))))) {
        __Vtemp_108[0U] = 0U;
        __Vtemp_108[1U] = 0x534c5455U;
        __Vtemp_108[2U] = 0U;
        __Vtemp_108[3U] = 0U;
    } else if (((0x33U == (0x7fU & vlSelf->top__DOT__w_3)) 
                & ((1U == (IData)(vlSelf->top__DOT__blk221_25__DOT__funct3)) 
                   & (0U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct7))))) {
        __Vtemp_108[0U] = 0U;
        __Vtemp_108[1U] = 0x534c4c00U;
        __Vtemp_108[2U] = 0U;
        __Vtemp_108[3U] = 0U;
    } else {
        __Vtemp_108[0U] = __Vtemp_98[0U];
        __Vtemp_108[1U] = __Vtemp_98[1U];
        __Vtemp_108[2U] = __Vtemp_98[2U];
        __Vtemp_108[3U] = __Vtemp_98[3U];
    }
    if (((IData)(top__DOT__blk221_25__DOT____VdfgTmp_h9b725a6a__0) 
         & (0U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct7)))) {
        vlSelf->top__DOT__blk221_25__DOT__hex_code[0U] = 0U;
        vlSelf->top__DOT__blk221_25__DOT__hex_code[1U] = 0x41444400U;
        vlSelf->top__DOT__blk221_25__DOT__hex_code[2U] = 0U;
        vlSelf->top__DOT__blk221_25__DOT__hex_code[3U] = 0U;
    } else if (((IData)(top__DOT__blk221_25__DOT____VdfgTmp_h9b725a6a__0) 
                & (0x20U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct7)))) {
        vlSelf->top__DOT__blk221_25__DOT__hex_code[0U] = 0U;
        vlSelf->top__DOT__blk221_25__DOT__hex_code[1U] = 0x53554200U;
        vlSelf->top__DOT__blk221_25__DOT__hex_code[2U] = 0U;
        vlSelf->top__DOT__blk221_25__DOT__hex_code[3U] = 0U;
    } else {
        vlSelf->top__DOT__blk221_25__DOT__hex_code[0U] 
            = __Vtemp_108[0U];
        vlSelf->top__DOT__blk221_25__DOT__hex_code[1U] 
            = __Vtemp_108[1U];
        vlSelf->top__DOT__blk221_25__DOT__hex_code[2U] 
            = __Vtemp_108[2U];
        vlSelf->top__DOT__blk221_25__DOT__hex_code[3U] 
            = __Vtemp_108[3U];
    }
    __VdfgTmp_hf9ebf349__0 = vlSelf->top__DOT__blk219_2__DOT__rf
        [vlSelf->top__DOT__w_14];
    vlSelf->top__DOT__w_5 = ((0U == (IData)(vlSelf->top__DOT__w_13))
                              ? 0U : vlSelf->top__DOT__blk219_2__DOT__rf
                             [vlSelf->top__DOT__w_13]);
    vlSelf->top__DOT__blk220_1__DOT____VdfgTmp_h760cc816__0 
        = ((0x73U == (0x7fU & vlSelf->top__DOT__w_3)) 
           & (0U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)));
    vlSelf->top__DOT__blk220_1__DOT__is_lw = ((2U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)) 
                                              & (3U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->top__DOT__w_3)));
    vlSelf->top__DOT__blk220_1__DOT__is_sb = ((0x23U 
                                               == (0x7fU 
                                                   & vlSelf->top__DOT__w_3)) 
                                              & (0U 
                                                 == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)));
    vlSelf->top__DOT__blk220_1__DOT__is_sh = ((0x23U 
                                               == (0x7fU 
                                                   & vlSelf->top__DOT__w_3)) 
                                              & (1U 
                                                 == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)));
    vlSelf->top__DOT__blk220_1__DOT__is_sw = ((0x23U 
                                               == (0x7fU 
                                                   & vlSelf->top__DOT__w_3)) 
                                              & (2U 
                                                 == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)));
    vlSelf->top__DOT__blk220_1__DOT__is_lb = ((0U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)) 
                                              & (3U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->top__DOT__w_3)));
    vlSelf->top__DOT__blk220_1__DOT__is_lhu = ((5U 
                                                == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)) 
                                               & (3U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->top__DOT__w_3)));
    vlSelf->top__DOT__blk220_1__DOT____VdfgTmp_h897b9696__0 
        = ((0x33U == (0x7fU & vlSelf->top__DOT__w_3)) 
           & (0U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)));
    vlSelf->top__DOT__blk220_1__DOT____VdfgTmp_h4304dc3a__0 
        = ((0x33U == (0x7fU & vlSelf->top__DOT__w_3)) 
           & (5U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)));
    vlSelf->top__DOT__blk220_1__DOT__is_lbu = ((4U 
                                                == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)) 
                                               & (3U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->top__DOT__w_3)));
    vlSelf->top__DOT__blk220_1__DOT__is_lh = ((1U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)) 
                                              & (3U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->top__DOT__w_3)));
    vlSelf->top__DOT__blk220_1__DOT__is_beq = ((0x63U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->top__DOT__w_3)) 
                                               & (0U 
                                                  == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)));
    vlSelf->top__DOT__blk220_1__DOT__is_bne = ((0x63U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->top__DOT__w_3)) 
                                               & (1U 
                                                  == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)));
    vlSelf->top__DOT__blk220_1__DOT__is_blt = ((0x63U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->top__DOT__w_3)) 
                                               & (4U 
                                                  == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)));
    vlSelf->top__DOT__blk220_1__DOT__is_bge = ((0x63U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->top__DOT__w_3)) 
                                               & (5U 
                                                  == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)));
    vlSelf->top__DOT__blk220_1__DOT__is_jalr = ((0U 
                                                 == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)) 
                                                & (0x67U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->top__DOT__w_3)));
    if ((0U == (IData)(vlSelf->top__DOT__w_14))) {
        top__DOT__blk220_1__DOT____VdfgTmp_hb90c0577__0 = 0U;
        vlSelf->top__DOT__w_6 = 0U;
    } else {
        top__DOT__blk220_1__DOT____VdfgTmp_hb90c0577__0 
            = (0xffU & __VdfgTmp_hf9ebf349__0);
        vlSelf->top__DOT__w_6 = __VdfgTmp_hf9ebf349__0;
    }
    top__DOT__blk220_1__DOT____VdfgTmp_h1f987d1c__0 
        = (vlSelf->top__DOT__w_5 >> (0x1fU & vlSelf->top__DOT__blk220_1__DOT__imm));
    top__DOT__blk220_1__DOT____VdfgTmp_h9eaf8fe7__0 
        = (vlSelf->top__DOT__w_5 + vlSelf->top__DOT__blk220_1__DOT__imm);
    vlSelf->top__DOT__blk220_1__DOT__next_state = (
                                                   (0U 
                                                    == (IData)(vlSelf->top__DOT__blk220_1__DOT__current_state))
                                                    ? 1U
                                                    : 
                                                   ((((IData)(vlSelf->top__DOT__blk220_1__DOT__is_lw) 
                                                      | (IData)(vlSelf->top__DOT__blk220_1__DOT__is_sw)) 
                                                     & (1U 
                                                        == (IData)(vlSelf->top__DOT__blk220_1__DOT__current_state)))
                                                     ? 2U
                                                     : 
                                                    (((0x33U 
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
                                                       : 0U))));
    top__DOT__blk220_1__DOT____VdfgTmp_h68a24e47__0 
        = VL_SHIFTR_III(32,32,32, vlSelf->top__DOT__w_5, vlSelf->top__DOT__w_6);
    top__DOT__blk220_1__DOT____VdfgTmp_h6f3d6917__0 
        = (vlSelf->top__DOT__w_5 < vlSelf->top__DOT__w_6);
    top__DOT__blk220_1__DOT____VdfgTmp_h6f017867__0 
        = VL_LTS_III(32, vlSelf->top__DOT__w_5, vlSelf->top__DOT__w_6);
    vlSelf->top__DOT__blk220_1__DOT__jump_add = ((0x6fU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->top__DOT__w_3))
                                                  ? top__DOT__blk220_1__DOT____VdfgTmp_hbc0fc7ad__0
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__blk220_1__DOT__is_jalr)
                                                   ? top__DOT__blk220_1__DOT____VdfgTmp_h9eaf8fe7__0
                                                   : 
                                                  (((IData)(vlSelf->top__DOT__blk220_1__DOT__is_beq) 
                                                    & (vlSelf->top__DOT__w_5 
                                                       == vlSelf->top__DOT__w_6))
                                                    ? top__DOT__blk220_1__DOT____VdfgTmp_hbc0fc7ad__0
                                                    : 
                                                   (((IData)(vlSelf->top__DOT__blk220_1__DOT__is_bne) 
                                                     & (vlSelf->top__DOT__w_5 
                                                        != vlSelf->top__DOT__w_6))
                                                     ? top__DOT__blk220_1__DOT____VdfgTmp_hbc0fc7ad__0
                                                     : 
                                                    (((IData)(vlSelf->top__DOT__blk220_1__DOT__is_blt) 
                                                      & (IData)(top__DOT__blk220_1__DOT____VdfgTmp_h6f017867__0))
                                                      ? top__DOT__blk220_1__DOT____VdfgTmp_hbc0fc7ad__0
                                                      : 
                                                     ((((0x63U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->top__DOT__w_3)) 
                                                        & (6U 
                                                           == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3))) 
                                                       & (IData)(top__DOT__blk220_1__DOT____VdfgTmp_h6f3d6917__0))
                                                       ? top__DOT__blk220_1__DOT____VdfgTmp_hbc0fc7ad__0
                                                       : 
                                                      (((IData)(vlSelf->top__DOT__blk220_1__DOT__is_bge) 
                                                        & VL_GTES_III(32, vlSelf->top__DOT__w_5, vlSelf->top__DOT__w_6))
                                                        ? top__DOT__blk220_1__DOT____VdfgTmp_hbc0fc7ad__0
                                                        : 
                                                       ((((0x63U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->top__DOT__w_3)) 
                                                          & (7U 
                                                             == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3))) 
                                                         & (vlSelf->top__DOT__w_5 
                                                            >= vlSelf->top__DOT__w_6))
                                                         ? top__DOT__blk220_1__DOT____VdfgTmp_hbc0fc7ad__0
                                                         : 
                                                        ((IData)(4U) 
                                                         + vlSelf->top__DOT__w_7)))))))));
    vlSelf->top__DOT__blk220_1__DOT__next_pc = ((7U 
                                                 == (IData)(vlSelf->top__DOT__blk217_4__DOT__q))
                                                 ? 
                                                (((IData)(vlSelf->top__DOT__blk220_1__DOT__is_beq) 
                                                  | ((IData)(vlSelf->top__DOT__blk220_1__DOT__is_bne) 
                                                     | ((IData)(vlSelf->top__DOT__blk220_1__DOT__is_blt) 
                                                        | ((IData)(vlSelf->top__DOT__blk220_1__DOT__is_bge) 
                                                           | ((0x6fU 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->top__DOT__w_3)) 
                                                              | (IData)(vlSelf->top__DOT__blk220_1__DOT__is_jalr))))))
                                                  ? vlSelf->top__DOT__blk220_1__DOT__jump_add
                                                  : 
                                                 ((IData)(4U) 
                                                  + vlSelf->top__DOT__w_7))
                                                 : 0U);
    vlSelf->top__DOT__w_10 = (((IData)(vlSelf->top__DOT__blk220_1__DOT____VdfgTmp_h897b9696__0) 
                               & (0U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct7)))
                               ? (vlSelf->top__DOT__w_5 
                                  + vlSelf->top__DOT__w_6)
                               : (((0U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)) 
                                   & (0x13U == (0x7fU 
                                                & vlSelf->top__DOT__w_3)))
                                   ? top__DOT__blk220_1__DOT____VdfgTmp_h9eaf8fe7__0
                                   : (((IData)(vlSelf->top__DOT__blk220_1__DOT____VdfgTmp_h897b9696__0) 
                                       & (0x20U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct7)))
                                       ? (vlSelf->top__DOT__w_5 
                                          - vlSelf->top__DOT__w_6)
                                       : (((7U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)) 
                                           & (0x13U 
                                              == (0x7fU 
                                                  & vlSelf->top__DOT__w_3)))
                                           ? (vlSelf->top__DOT__w_5 
                                              & vlSelf->top__DOT__blk220_1__DOT__imm)
                                           : (((0x33U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->top__DOT__w_3)) 
                                               & ((7U 
                                                   == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)) 
                                                  & (0U 
                                                     == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct7))))
                                               ? (vlSelf->top__DOT__w_5 
                                                  & vlSelf->top__DOT__w_6)
                                               : ((
                                                   (0x33U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->top__DOT__w_3)) 
                                                   & ((6U 
                                                       == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)) 
                                                      & (0U 
                                                         == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct7))))
                                                   ? 
                                                  (vlSelf->top__DOT__w_5 
                                                   | vlSelf->top__DOT__w_6)
                                                   : 
                                                  (((6U 
                                                     == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)) 
                                                    & (0x13U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->top__DOT__w_3)))
                                                    ? 
                                                   (vlSelf->top__DOT__w_5 
                                                    | vlSelf->top__DOT__blk220_1__DOT__imm)
                                                    : 
                                                   (((1U 
                                                      == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)) 
                                                     & (IData)(vlSelf->top__DOT__blk221_25__DOT____VdfgTmp_hdf511576__0))
                                                     ? 
                                                    (vlSelf->top__DOT__w_5 
                                                     << 
                                                     (0x1fU 
                                                      & vlSelf->top__DOT__blk220_1__DOT__imm))
                                                     : 
                                                    (((5U 
                                                       == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)) 
                                                      & (IData)(vlSelf->top__DOT__blk221_25__DOT____VdfgTmp_hdf511576__0))
                                                      ? top__DOT__blk220_1__DOT____VdfgTmp_h1f987d1c__0
                                                      : 
                                                     ((0x17U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->top__DOT__w_3))
                                                       ? top__DOT__blk220_1__DOT____VdfgTmp_hbc0fc7ad__0
                                                       : 
                                                      ((0x6fU 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->top__DOT__w_3))
                                                        ? vlSelf->top__DOT__blk220_1__DOT__jump_add
                                                        : 
                                                       ((0x23U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->top__DOT__w_3))
                                                         ? top__DOT__blk220_1__DOT____VdfgTmp_h9eaf8fe7__0
                                                         : 
                                                        ((0x37U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->top__DOT__w_3))
                                                          ? vlSelf->top__DOT__blk220_1__DOT__imm
                                                          : 
                                                         (((0x33U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->top__DOT__w_3)) 
                                                           & ((4U 
                                                               == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)) 
                                                              & (0U 
                                                                 == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct7))))
                                                           ? 
                                                          (vlSelf->top__DOT__w_5 
                                                           ^ vlSelf->top__DOT__w_6)
                                                           : 
                                                          (((4U 
                                                             == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)) 
                                                            & (0x13U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->top__DOT__w_3)))
                                                            ? 
                                                           (vlSelf->top__DOT__w_5 
                                                            ^ vlSelf->top__DOT__blk220_1__DOT__imm)
                                                            : 
                                                           ((IData)(vlSelf->top__DOT__blk220_1__DOT__is_lb)
                                                             ? top__DOT__blk220_1__DOT____VdfgTmp_h9eaf8fe7__0
                                                             : 
                                                            ((IData)(vlSelf->top__DOT__blk220_1__DOT__is_lbu)
                                                              ? top__DOT__blk220_1__DOT____VdfgTmp_h9eaf8fe7__0
                                                              : 
                                                             ((IData)(vlSelf->top__DOT__blk220_1__DOT__is_lh)
                                                               ? top__DOT__blk220_1__DOT____VdfgTmp_h9eaf8fe7__0
                                                               : 
                                                              ((IData)(vlSelf->top__DOT__blk220_1__DOT__is_lhu)
                                                                ? top__DOT__blk220_1__DOT____VdfgTmp_h9eaf8fe7__0
                                                                : 
                                                               (((3U 
                                                                  == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)) 
                                                                 & (0x13U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelf->top__DOT__w_3)))
                                                                 ? 
                                                                (vlSelf->top__DOT__w_5 
                                                                 < vlSelf->top__DOT__blk220_1__DOT__imm)
                                                                 : 
                                                                (((2U 
                                                                   == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)) 
                                                                  & (0x13U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelf->top__DOT__w_3)))
                                                                  ? 
                                                                 VL_LTS_III(32, vlSelf->top__DOT__w_5, vlSelf->top__DOT__blk220_1__DOT__imm)
                                                                  : 
                                                                 (((0x33U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelf->top__DOT__w_3)) 
                                                                   & ((3U 
                                                                       == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)) 
                                                                      & (0U 
                                                                         == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct7))))
                                                                   ? (IData)(top__DOT__blk220_1__DOT____VdfgTmp_h6f3d6917__0)
                                                                   : 
                                                                  (((0x33U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelf->top__DOT__w_3)) 
                                                                    & ((1U 
                                                                        == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)) 
                                                                       & (0U 
                                                                          == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct7))))
                                                                    ? 
                                                                   VL_SHIFTL_III(32,32,32, vlSelf->top__DOT__w_5, vlSelf->top__DOT__w_6)
                                                                    : 
                                                                   (((0x33U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelf->top__DOT__w_3)) 
                                                                     & ((2U 
                                                                         == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)) 
                                                                        & (0U 
                                                                           == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct7))))
                                                                     ? (IData)(top__DOT__blk220_1__DOT____VdfgTmp_h6f017867__0)
                                                                     : 
                                                                    (((IData)(vlSelf->top__DOT__blk220_1__DOT____VdfgTmp_h4304dc3a__0) 
                                                                      & (0U 
                                                                         == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct7)))
                                                                      ? top__DOT__blk220_1__DOT____VdfgTmp_h68a24e47__0
                                                                      : 
                                                                     (((5U 
                                                                        == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)) 
                                                                       & (IData)(vlSelf->__VdfgTmp_hb17978b1__0))
                                                                       ? top__DOT__blk220_1__DOT____VdfgTmp_h1f987d1c__0
                                                                       : 
                                                                      (((IData)(vlSelf->top__DOT__blk220_1__DOT____VdfgTmp_h4304dc3a__0) 
                                                                        & (0x20U 
                                                                           == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct7)))
                                                                        ? top__DOT__blk220_1__DOT____VdfgTmp_h68a24e47__0
                                                                        : 0U)))))))))))))))))))))))))));
    vlSelf->top__DOT__blk220_1__DOT____VdfgTmp_hecc7b86e__0 
        = ((3U == (3U & vlSelf->top__DOT__w_10)) ? 
           VL_SHIFTR_III(32,32,32, vlSelf->top__DOT__blk216_5__DOT__data_reg, 0x18U)
            : ((2U == (3U & vlSelf->top__DOT__w_10))
                ? (0xffU & (vlSelf->top__DOT__blk216_5__DOT__data_reg 
                            >> 0x10U)) : ((1U == (3U 
                                                  & vlSelf->top__DOT__w_10))
                                           ? (0xffU 
                                              & (vlSelf->top__DOT__blk216_5__DOT__data_reg 
                                                 >> 8U))
                                           : (0xffU 
                                              & vlSelf->top__DOT__blk216_5__DOT__data_reg))));
    vlSelf->top__DOT__w_9 = (((IData)(vlSelf->top__DOT__blk220_1__DOT__is_lbu) 
                              | (IData)(vlSelf->top__DOT__blk220_1__DOT__is_sb))
                              ? ((3U == (3U & vlSelf->top__DOT__w_10))
                                  ? 8U : ((2U == (3U 
                                                  & vlSelf->top__DOT__w_10))
                                           ? 4U : (
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->top__DOT__w_10))
                                                    ? 2U
                                                    : 1U)))
                              : (((IData)(vlSelf->top__DOT__blk220_1__DOT__is_lh) 
                                  | (IData)(vlSelf->top__DOT__blk220_1__DOT__is_sh))
                                  ? ((2U == (3U & vlSelf->top__DOT__w_10))
                                      ? 0xcU : 3U) : 0xfU));
    vlSelf->top__DOT__w_11 = ((IData)(vlSelf->top__DOT__blk220_1__DOT__is_sw)
                               ? vlSelf->top__DOT__w_6
                               : ((IData)(vlSelf->top__DOT__blk220_1__DOT__is_sb)
                                   ? ((3U == (3U & vlSelf->top__DOT__w_10))
                                       ? VL_SHIFTL_III(32,32,32, vlSelf->top__DOT__w_6, 0x18U)
                                       : ((2U == (3U 
                                                  & vlSelf->top__DOT__w_10))
                                           ? ((IData)(top__DOT__blk220_1__DOT____VdfgTmp_hb90c0577__0) 
                                              << 0x10U)
                                           : ((1U == 
                                               (3U 
                                                & vlSelf->top__DOT__w_10))
                                               ? ((IData)(top__DOT__blk220_1__DOT____VdfgTmp_hb90c0577__0) 
                                                  << 8U)
                                               : (IData)(top__DOT__blk220_1__DOT____VdfgTmp_hb90c0577__0))))
                                   : ((IData)(vlSelf->top__DOT__blk220_1__DOT__is_sh)
                                       ? ((2U == (3U 
                                                  & vlSelf->top__DOT__w_10))
                                           ? VL_SHIFTL_III(32,32,32, vlSelf->top__DOT__w_6, 0x10U)
                                           : ((0U == (IData)(vlSelf->top__DOT__w_14))
                                               ? 0U
                                               : (0xffffU 
                                                  & __VdfgTmp_hf9ebf349__0)))
                                       : 0U)));
}

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
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
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->sck1 = VL_RAND_RESET_I(1);
    vlSelf->sda1 = VL_RAND_RESET_I(1);
    vlSelf->cs1 = VL_RAND_RESET_I(1);
    vlSelf->dc1 = VL_RAND_RESET_I(1);
    vlSelf->res1 = VL_RAND_RESET_I(1);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__w_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__w_3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__w_5 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__w_6 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__w_7 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__w_9 = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__w_10 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__w_11 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__w_13 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__w_14 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__w_15 = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__w_26);
    vlSelf->top__DOT__w_28 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__w_30 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__blk220_1__DOT__jump_add = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__blk220_1__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__blk220_1__DOT__I_type = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__blk220_1__DOT__is_jalr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__blk220_1__DOT__is_lb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__blk220_1__DOT__is_lh = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__blk220_1__DOT__is_lw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__blk220_1__DOT__is_lbu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__blk220_1__DOT__is_lhu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__blk220_1__DOT__is_sw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__blk220_1__DOT__is_sb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__blk220_1__DOT__is_sh = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__blk220_1__DOT__is_bge = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__blk220_1__DOT__is_beq = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__blk220_1__DOT__is_blt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__blk220_1__DOT__is_bne = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__blk220_1__DOT__U_type = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__blk220_1__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__blk220_1__DOT__funct7 = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__blk220_1__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__blk220_1__DOT__current_state = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__blk220_1__DOT__next_state = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__blk220_1__DOT____VdfgTmp_hd86a4e63__0 = 0;
    vlSelf->top__DOT__blk220_1__DOT____VdfgTmp_h897b9696__0 = 0;
    vlSelf->top__DOT__blk220_1__DOT____VdfgTmp_h4304dc3a__0 = 0;
    vlSelf->top__DOT__blk220_1__DOT____VdfgTmp_h760cc816__0 = 0;
    vlSelf->top__DOT__blk220_1__DOT____VdfgTmp_hecc7b86e__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__blk219_2__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__blk217_4__DOT__q = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 1200; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->top__DOT__blk216_5__DOT__ram[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    vlSelf->top__DOT__blk216_5__DOT__data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__blk216_5__DOT____Vlvbound_h0d08474e__0 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__blk216_5__DOT____Vlvbound_h0d0845e6__0 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__blk216_5__DOT____Vlvbound_h0d0848d0__0 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__blk216_5__DOT____Vlvbound_h0d083d8e__0 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__blk85_7__DOT__counter = VL_RAND_RESET_Q(33);
    vlSelf->top__DOT__blk85_7__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__blk85_7__DOT__dc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__blk85_7__DOT__sclk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__blk85_7__DOT__sdin = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__blk85_7__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__blk85_7__DOT__cs = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__blk85_7__DOT__dataToSend = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__blk85_7__DOT__bitNumber = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__blk85_7__DOT__pixelCounter = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__blk85_7__DOT__commandIndex = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__blk221_25__DOT__hex_code);
    vlSelf->top__DOT__blk221_25__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__blk221_25__DOT____VdfgTmp_hdf511576__0 = 0;
    vlSelf->top__DOT__blk128_26__DOT__count = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__blk128_26__DOT__verificao = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1520; ++__Vi0) {
        vlSelf->top__DOT__blk86_28__DOT__fontBuffer[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__blk86_28__DOT__outputBuffer = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__blk86_28__DOT__chosenChar = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__blk107_39__DOT__counter = VL_RAND_RESET_I(27);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->top__DOT__blk218_40__DOT__RAM[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__VdfgTmp_hb17978b1__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
