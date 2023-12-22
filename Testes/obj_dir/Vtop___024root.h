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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_OUT8(sck1,0,0);
        VL_OUT8(sda1,0,0);
        VL_OUT8(cs1,0,0);
        VL_OUT8(dc1,0,0);
        VL_OUT8(res1,0,0);
        CData/*0:0*/ top__DOT__w_1;
        CData/*3:0*/ top__DOT__w_9;
        CData/*4:0*/ top__DOT__w_13;
        CData/*4:0*/ top__DOT__w_14;
        CData/*4:0*/ top__DOT__w_15;
        CData/*7:0*/ top__DOT__w_28;
        CData/*7:0*/ top__DOT__w_30;
        CData/*0:0*/ top__DOT__blk220_1__DOT__I_type;
        CData/*0:0*/ top__DOT__blk220_1__DOT__is_jalr;
        CData/*0:0*/ top__DOT__blk220_1__DOT__is_lb;
        CData/*0:0*/ top__DOT__blk220_1__DOT__is_lh;
        CData/*0:0*/ top__DOT__blk220_1__DOT__is_lw;
        CData/*0:0*/ top__DOT__blk220_1__DOT__is_lbu;
        CData/*0:0*/ top__DOT__blk220_1__DOT__is_lhu;
        CData/*0:0*/ top__DOT__blk220_1__DOT__is_sw;
        CData/*0:0*/ top__DOT__blk220_1__DOT__is_sb;
        CData/*0:0*/ top__DOT__blk220_1__DOT__is_sh;
        CData/*0:0*/ top__DOT__blk220_1__DOT__is_bge;
        CData/*0:0*/ top__DOT__blk220_1__DOT__is_beq;
        CData/*0:0*/ top__DOT__blk220_1__DOT__is_blt;
        CData/*0:0*/ top__DOT__blk220_1__DOT__is_bne;
        CData/*0:0*/ top__DOT__blk220_1__DOT__U_type;
        CData/*2:0*/ top__DOT__blk220_1__DOT__funct3;
        CData/*6:0*/ top__DOT__blk220_1__DOT__funct7;
        CData/*3:0*/ top__DOT__blk220_1__DOT__current_state;
        CData/*3:0*/ top__DOT__blk220_1__DOT__next_state;
        CData/*0:0*/ top__DOT__blk220_1__DOT____VdfgTmp_hd86a4e63__0;
        CData/*0:0*/ top__DOT__blk220_1__DOT____VdfgTmp_h897b9696__0;
        CData/*0:0*/ top__DOT__blk220_1__DOT____VdfgTmp_h4304dc3a__0;
        CData/*0:0*/ top__DOT__blk220_1__DOT____VdfgTmp_h760cc816__0;
        CData/*2:0*/ top__DOT__blk217_4__DOT__q;
        CData/*7:0*/ top__DOT__blk216_5__DOT____Vlvbound_h0d08474e__0;
        CData/*7:0*/ top__DOT__blk216_5__DOT____Vlvbound_h0d0845e6__0;
        CData/*7:0*/ top__DOT__blk216_5__DOT____Vlvbound_h0d0848d0__0;
        CData/*7:0*/ top__DOT__blk216_5__DOT____Vlvbound_h0d083d8e__0;
        CData/*2:0*/ top__DOT__blk85_7__DOT__state;
        CData/*0:0*/ top__DOT__blk85_7__DOT__dc;
        CData/*0:0*/ top__DOT__blk85_7__DOT__sclk;
        CData/*0:0*/ top__DOT__blk85_7__DOT__sdin;
        CData/*0:0*/ top__DOT__blk85_7__DOT__reset;
        CData/*0:0*/ top__DOT__blk85_7__DOT__cs;
        CData/*7:0*/ top__DOT__blk85_7__DOT__dataToSend;
        CData/*2:0*/ top__DOT__blk85_7__DOT__bitNumber;
        CData/*7:0*/ top__DOT__blk85_7__DOT__commandIndex;
        CData/*2:0*/ top__DOT__blk221_25__DOT__funct3;
        CData/*0:0*/ top__DOT__blk221_25__DOT____VdfgTmp_hdf511576__0;
        CData/*3:0*/ top__DOT__blk128_26__DOT__count;
        CData/*0:0*/ top__DOT__blk128_26__DOT__verificao;
        CData/*7:0*/ top__DOT__blk86_28__DOT__outputBuffer;
        CData/*7:0*/ top__DOT__blk86_28__DOT__chosenChar;
        CData/*0:0*/ __VdfgTmp_hb17978b1__0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __VactContinue;
        SData/*9:0*/ top__DOT__blk85_7__DOT__pixelCounter;
        IData/*31:0*/ top__DOT__w_3;
        IData/*31:0*/ top__DOT__w_5;
        IData/*31:0*/ top__DOT__w_6;
    };
    struct {
        IData/*31:0*/ top__DOT__w_7;
        IData/*31:0*/ top__DOT__w_10;
        IData/*31:0*/ top__DOT__w_11;
        VlWide<4>/*127:0*/ top__DOT__w_26;
        IData/*31:0*/ top__DOT__blk220_1__DOT__jump_add;
        IData/*31:0*/ top__DOT__blk220_1__DOT__next_pc;
        IData/*31:0*/ top__DOT__blk220_1__DOT__imm;
        IData/*31:0*/ top__DOT__blk220_1__DOT____VdfgTmp_hecc7b86e__0;
        IData/*31:0*/ top__DOT__blk216_5__DOT__data_reg;
        VlWide<4>/*127:0*/ top__DOT__blk221_25__DOT__hex_code;
        IData/*26:0*/ top__DOT__blk107_39__DOT__counter;
        IData/*31:0*/ __VactIterCount;
        QData/*32:0*/ top__DOT__blk85_7__DOT__counter;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__blk219_2__DOT__rf;
        VlUnpacked<VlUnpacked<CData/*7:0*/, 4>, 1200> top__DOT__blk216_5__DOT__ram;
        VlUnpacked<CData/*7:0*/, 1520> top__DOT__blk86_28__DOT__fontBuffer;
        VlUnpacked<IData/*31:0*/, 512> top__DOT__blk218_40__DOT__RAM;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

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
