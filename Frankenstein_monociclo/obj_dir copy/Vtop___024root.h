// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(CLOCK_50,0,0);
    VL_OUT8(VGA_CLK,0,0);
    CData/*0:0*/ top__DOT____Vcellinp__dmem____pinNumber1;
    VL_OUT8(VGA_R,7,0);
    VL_OUT8(VGA_G,7,0);
    VL_OUT8(VGA_B,7,0);
    VL_OUT8(VGA_HS,0,0);
    VL_OUT8(VGA_VS,0,0);
    VL_OUT8(VGA_BLANK_N,0,0);
    VL_OUT8(VGA_SYNC_N,0,0);
    CData/*3:0*/ top__DOT__byte_enable;
    CData/*2:0*/ top__DOT__power_on_reset__DOT__q;
    CData/*0:0*/ top__DOT__franken_riscv__DOT__I_type;
    CData/*0:0*/ top__DOT__franken_riscv__DOT__U_type;
    CData/*4:0*/ top__DOT__franken_riscv__DOT__RS1;
    CData/*4:0*/ top__DOT__franken_riscv__DOT__RS2;
    CData/*4:0*/ top__DOT__franken_riscv__DOT__RD;
    CData/*2:0*/ top__DOT__franken_riscv__DOT__funct3;
    CData/*6:0*/ top__DOT__franken_riscv__DOT__funct7;
    CData/*0:0*/ top__DOT__franken_riscv__DOT__is_jalr;
    CData/*0:0*/ top__DOT__franken_riscv__DOT__is_bge;
    CData/*0:0*/ top__DOT__franken_riscv__DOT__is_beq;
    CData/*0:0*/ top__DOT__franken_riscv__DOT__is_blt;
    CData/*0:0*/ top__DOT__franken_riscv__DOT__is_bne;
    CData/*0:0*/ top__DOT__franken_riscv__DOT__is_sw;
    CData/*0:0*/ top__DOT__franken_riscv__DOT__is_lw;
    CData/*0:0*/ top__DOT__franken_riscv__DOT__is_sb;
    CData/*0:0*/ top__DOT__franken_riscv__DOT__is_lbu;
    CData/*0:0*/ top__DOT__franken_riscv__DOT____VdfgTmp_hd86a4e63__0;
    CData/*0:0*/ top__DOT__franken_riscv__DOT____VdfgTmp_h897b9696__0;
    CData/*0:0*/ top__DOT__video__DOT__inDisplayArea;
    CData/*0:0*/ top__DOT__video__DOT__inDisplayAreaPrev;
    CData/*0:0*/ top__DOT__video__DOT__vga_HS;
    CData/*0:0*/ top__DOT__video__DOT__vga_VS;
    CData/*0:0*/ top__DOT__video__DOT__CounterXmaxed;
    CData/*0:0*/ top__DOT__video__DOT__CounterYmaxed;
    CData/*0:0*/ __Vtrigprevexpr___TOP__CLOCK_50__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__VGA_CLK__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__top__DOT____Vcellinp__dmem____pinNumber1__0;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ top__DOT__video__DOT__CounterX;
    SData/*9:0*/ top__DOT__video__DOT__CounterY;
    IData/*31:0*/ top__DOT__pc;
    IData/*31:0*/ top__DOT__addr_vga;
    IData/*31:0*/ top__DOT__instruction;
    IData/*31:0*/ top__DOT__read_data;
    IData/*31:0*/ top__DOT__read_data_vga;
    IData/*31:0*/ top__DOT__write_data;
    IData/*31:0*/ top__DOT__alu_result;
    IData/*31:0*/ top__DOT__franken_riscv__DOT__src1;
    IData/*31:0*/ top__DOT__franken_riscv__DOT__src2;
    IData/*31:0*/ top__DOT__franken_riscv__DOT__jump_add;
    IData/*31:0*/ top__DOT__franken_riscv__DOT__next_pc;
    IData/*31:0*/ top__DOT__franken_riscv__DOT__imm;
    IData/*31:0*/ top__DOT__franken_riscv__DOT____VdfgTmp_hbc0fc7ad__0;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__franken_riscv__DOT__regs__DOT__rf;
    VlUnpacked<IData/*31:0*/, 64> top__DOT__imem__DOT__RAM;
    VlUnpacked<IData/*31:0*/, 512> top__DOT__dmem__DOT__RAM;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
