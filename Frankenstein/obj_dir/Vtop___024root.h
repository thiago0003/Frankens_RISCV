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
        CData/*0:0*/ top__DOT__clk_div1;
        CData/*0:0*/ top__DOT__clk_div2;
        CData/*0:0*/ top__DOT__clk_div3;
        CData/*0:0*/ top__DOT__clk_div4;
        CData/*0:0*/ top__DOT__mem_write;
        CData/*0:0*/ top__DOT__reg_write;
        CData/*0:0*/ top__DOT__TXD;
        CData/*3:0*/ top__DOT__byte_enable;
        CData/*4:0*/ top__DOT__RS1;
        CData/*4:0*/ top__DOT__RS2;
        CData/*4:0*/ top__DOT__RD;
        CData/*2:0*/ top__DOT__power_on_reset__DOT__q;
        CData/*0:0*/ top__DOT__franken_riscv__DOT__is_conditional_jump_Exec;
        CData/*0:0*/ top__DOT__franken_riscv__DOT__mem_write_Exec;
        CData/*0:0*/ top__DOT__franken_riscv__DOT__mem_read_Exec;
        CData/*0:0*/ top__DOT__franken_riscv__DOT__reg_write_Exec;
        CData/*4:0*/ top__DOT__franken_riscv__DOT__RD_Exec;
        CData/*0:0*/ top__DOT__franken_riscv__DOT__mem_read_Mem;
        CData/*0:0*/ top__DOT__franken_riscv__DOT__reg_write_Mem;
        CData/*4:0*/ top__DOT__franken_riscv__DOT__RD_Mem;
        CData/*6:0*/ top__DOT__franken_riscv__DOT__funct7_;
        CData/*6:0*/ top__DOT__franken_riscv__DOT__opcode;
        CData/*4:0*/ top__DOT__franken_riscv__DOT__rd_;
        CData/*4:0*/ top__DOT__franken_riscv__DOT__rs1;
        CData/*4:0*/ top__DOT__franken_riscv__DOT__rs2;
        CData/*2:0*/ top__DOT__franken_riscv__DOT__funct3_;
        CData/*1:0*/ top__DOT__franken_riscv__DOT__Fwd_A;
        CData/*1:0*/ top__DOT__franken_riscv__DOT__Fwd_B;
        CData/*0:0*/ top__DOT__franken_riscv__DOT__stall_Exec;
        CData/*0:0*/ top__DOT__franken_riscv__DOT__stall_Mem;
        CData/*0:0*/ top__DOT__franken_riscv__DOT__stall_WB;
        CData/*0:0*/ top__DOT__franken_riscv__DOT__is_mul;
        CData/*0:0*/ top__DOT__franken_riscv__DOT__is_mulh;
        CData/*0:0*/ top__DOT__franken_riscv__DOT__is_mulhsu;
        CData/*0:0*/ top__DOT__franken_riscv__DOT__is_mulhu;
        CData/*0:0*/ top__DOT__franken_riscv__DOT__I_type;
        CData/*0:0*/ top__DOT__franken_riscv__DOT__is_jalr;
        CData/*0:0*/ top__DOT__franken_riscv__DOT__is_lb;
        CData/*0:0*/ top__DOT__franken_riscv__DOT__is_lh;
        CData/*0:0*/ top__DOT__franken_riscv__DOT__is_lw;
        CData/*0:0*/ top__DOT__franken_riscv__DOT__is_lbu;
        CData/*0:0*/ top__DOT__franken_riscv__DOT__is_lhu;
        CData/*0:0*/ top__DOT__franken_riscv__DOT__is_sb;
        CData/*0:0*/ top__DOT__franken_riscv__DOT__is_sh;
        CData/*0:0*/ top__DOT__franken_riscv__DOT__is_bge;
        CData/*0:0*/ top__DOT__franken_riscv__DOT__is_beq;
        CData/*0:0*/ top__DOT__franken_riscv__DOT__is_blt;
        CData/*0:0*/ top__DOT__franken_riscv__DOT__is_bne;
        CData/*0:0*/ top__DOT__franken_riscv__DOT__is_bgeu;
        CData/*0:0*/ top__DOT__franken_riscv__DOT__U_type;
        CData/*4:0*/ top__DOT__franken_riscv__DOT__RD_Dec;
        CData/*2:0*/ top__DOT__franken_riscv__DOT__funct3;
        CData/*6:0*/ top__DOT__franken_riscv__DOT__funct7;
        CData/*0:0*/ top__DOT__franken_riscv__DOT__is_conditional_jump_Dec;
        CData/*0:0*/ top__DOT__franken_riscv__DOT__mem_read_Dec;
        CData/*0:0*/ top__DOT__franken_riscv__DOT____VdfgTmp_he778bdb7__0;
        CData/*0:0*/ top__DOT__franken_riscv__DOT____VdfgTmp_hf167f6a7__0;
        CData/*0:0*/ top__DOT__franken_riscv__DOT____VdfgTmp_h154cd026__0;
        CData/*0:0*/ top__DOT__franken_riscv__DOT____VdfgTmp_he89c683e__0;
        CData/*0:0*/ top__DOT__franken_riscv__DOT____VdfgTmp_he18098c8__0;
        CData/*7:0*/ top__DOT__blockram__DOT____Vlvbound_h02f7a360__0;
        CData/*7:0*/ top__DOT__blockram__DOT____Vlvbound_h02f7a39d__0;
        CData/*7:0*/ top__DOT__blockram__DOT____Vlvbound_h02f7a2de__0;
    };
    struct {
        CData/*7:0*/ top__DOT__blockram__DOT____Vlvbound_h02f7a91a__0;
        CData/*7:0*/ top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder1_1____pinNumber2;
        CData/*7:0*/ top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder1_2____pinNumber2;
        CData/*7:0*/ top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder2_1____pinNumber2;
        CData/*7:0*/ top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder2_2____pinNumber2;
        CData/*7:0*/ top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder3_1____pinNumber2;
        CData/*7:0*/ top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder3_2____pinNumber2;
        CData/*7:0*/ top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder3_3____pinNumber2;
        CData/*7:0*/ top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder3_4____pinNumber2;
        CData/*7:0*/ top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder3_5____pinNumber2;
        CData/*7:0*/ top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder3_6____pinNumber2;
        CData/*7:0*/ top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder3_7____pinNumber2;
        CData/*7:0*/ top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder3_8____pinNumber2;
        CData/*7:0*/ top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder4_1____pinNumber2;
        CData/*7:0*/ top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder4_2____pinNumber2;
        CData/*7:0*/ top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder4_3____pinNumber2;
        CData/*7:0*/ top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder4_4____pinNumber2;
        CData/*7:0*/ top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder4_5____pinNumber2;
        CData/*7:0*/ top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder4_6____pinNumber2;
        CData/*7:0*/ top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder4_7____pinNumber2;
        CData/*7:0*/ top__DOT__alu_decoder__DOT____Vcellout__ascii_decoder4_8____pinNumber2;
        CData/*2:0*/ top__DOT__alu_decoder__DOT__funct3;
        CData/*6:0*/ top__DOT__alu_decoder__DOT__funct7;
        CData/*0:0*/ top__DOT__alu_decoder__DOT__I_type;
        CData/*0:0*/ top__DOT__alu_decoder__DOT__U_type;
        CData/*0:0*/ top__DOT__alu_decoder__DOT__is_jalr;
        CData/*5:0*/ __Vdlyvdim0__top__DOT__blockram__DOT__ram__v0;
        CData/*7:0*/ __Vdlyvval__top__DOT__blockram__DOT__ram__v0;
        CData/*0:0*/ __Vdlyvset__top__DOT__blockram__DOT__ram__v0;
        CData/*5:0*/ __Vdlyvdim0__top__DOT__blockram__DOT__ram__v1;
        CData/*7:0*/ __Vdlyvval__top__DOT__blockram__DOT__ram__v1;
        CData/*0:0*/ __Vdlyvset__top__DOT__blockram__DOT__ram__v1;
        CData/*5:0*/ __Vdlyvdim0__top__DOT__blockram__DOT__ram__v2;
        CData/*7:0*/ __Vdlyvval__top__DOT__blockram__DOT__ram__v2;
        CData/*0:0*/ __Vdlyvset__top__DOT__blockram__DOT__ram__v2;
        CData/*5:0*/ __Vdlyvdim0__top__DOT__blockram__DOT__ram__v3;
        CData/*7:0*/ __Vdlyvval__top__DOT__blockram__DOT__ram__v3;
        CData/*0:0*/ __Vdlyvset__top__DOT__blockram__DOT__ram__v3;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__DOT__clk_div1__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__DOT__clk_div2__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__DOT__clk_div3__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__DOT__clk_div4__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ top__DOT__pc;
        IData/*31:0*/ top__DOT__instruction;
        IData/*31:0*/ top__DOT__write_data;
        IData/*31:0*/ top__DOT__alu_result;
        IData/*31:0*/ top__DOT__write_reg;
        IData/*31:0*/ top__DOT__src1;
        IData/*31:0*/ top__DOT__src2;
        VlWide<4>/*127:0*/ top__DOT__out_decoder1;
        VlWide<4>/*127:0*/ top__DOT__out_decoder2;
        VlWide<4>/*127:0*/ top__DOT__out_decoder3;
        VlWide<4>/*127:0*/ top__DOT__out_decoder4;
        IData/*31:0*/ top__DOT__franken_riscv__DOT__jump_add_Exec;
        IData/*31:0*/ top__DOT__franken_riscv__DOT__src2_Exec;
        IData/*31:0*/ top__DOT__franken_riscv__DOT__alu_result_Mem;
        IData/*31:0*/ top__DOT__franken_riscv__DOT__data_load;
        IData/*31:0*/ top__DOT__franken_riscv__DOT__next_pc;
        IData/*31:0*/ top__DOT__franken_riscv__DOT__imm;
        IData/*31:0*/ top__DOT__franken_riscv__DOT__pc_dec;
    };
    struct {
        IData/*31:0*/ top__DOT__franken_riscv__DOT__src1_forward;
        IData/*31:0*/ top__DOT__franken_riscv__DOT__src2_forward;
        IData/*31:0*/ top__DOT__blockram__DOT__data_reg;
        VlWide<4>/*127:0*/ top__DOT__alu_decoder__DOT__hex_code;
        IData/*31:0*/ top__DOT__alu_decoder__DOT__imm;
        IData/*31:0*/ __VdfgTmp_hc9ae597d__0;
        IData/*31:0*/ __VdfgTmp_hcd850c4e__0;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ top__DOT__franken_riscv__DOT__result_mul;
        QData/*63:0*/ top__DOT__alu_decoder__DOT__RD_;
        VlUnpacked<IData/*31:0*/, 128> top__DOT__imem__DOT__ram;
        VlUnpacked<VlUnpacked<CData/*7:0*/, 4>, 50> top__DOT__blockram__DOT__ram;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__regs__DOT__rf;
        VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<7> __VactTriggered;
    VlTriggerVec<7> __VnbaTriggered;

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
