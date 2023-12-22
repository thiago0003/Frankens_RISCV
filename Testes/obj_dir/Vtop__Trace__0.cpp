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
        bufp->chgBit(oldp+0,(vlSelf->top__DOT__w_1));
        bufp->chgBit(oldp+1,((1U & (~ (IData)((7U == (IData)(vlSelf->top__DOT__blk217_4__DOT__q)))))));
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__w_3),32);
        bufp->chgIData(oldp+3,(vlSelf->top__DOT__blk216_5__DOT__data_reg),32);
        bufp->chgIData(oldp+4,(vlSelf->top__DOT__w_5),32);
        bufp->chgIData(oldp+5,(vlSelf->top__DOT__w_6),32);
        bufp->chgIData(oldp+6,(vlSelf->top__DOT__w_7),32);
        bufp->chgBit(oldp+7,((0x23U == (0x7fU & vlSelf->top__DOT__w_3))));
        bufp->chgCData(oldp+8,(vlSelf->top__DOT__w_9),4);
        bufp->chgIData(oldp+9,(vlSelf->top__DOT__w_10),32);
        bufp->chgIData(oldp+10,(vlSelf->top__DOT__w_11),32);
        bufp->chgBit(oldp+11,((((IData)(vlSelf->top__DOT__blk220_1__DOT____VdfgTmp_hd86a4e63__0) 
                                | ((IData)(vlSelf->top__DOT__blk220_1__DOT__I_type) 
                                   | (IData)(vlSelf->top__DOT__blk220_1__DOT__U_type))) 
                               & (0U != (IData)(vlSelf->top__DOT__w_15)))));
        bufp->chgCData(oldp+12,(vlSelf->top__DOT__w_13),5);
        bufp->chgCData(oldp+13,(vlSelf->top__DOT__w_14),5);
        bufp->chgCData(oldp+14,(vlSelf->top__DOT__w_15),5);
        bufp->chgIData(oldp+15,((((IData)(vlSelf->top__DOT__blk220_1__DOT__is_lw) 
                                  | ((IData)(vlSelf->top__DOT__blk220_1__DOT__is_lbu) 
                                     | ((IData)(vlSelf->top__DOT__blk220_1__DOT__is_lb) 
                                        | ((IData)(vlSelf->top__DOT__blk220_1__DOT__is_lh) 
                                           | (IData)(vlSelf->top__DOT__blk220_1__DOT__is_lhu)))))
                                  ? ((IData)(vlSelf->top__DOT__blk220_1__DOT__is_lbu)
                                      ? vlSelf->top__DOT__blk220_1__DOT____VdfgTmp_hecc7b86e__0
                                      : ((IData)(vlSelf->top__DOT__blk220_1__DOT__is_lb)
                                          ? vlSelf->top__DOT__blk220_1__DOT____VdfgTmp_hecc7b86e__0
                                          : ((IData)(vlSelf->top__DOT__blk220_1__DOT__is_lh)
                                              ? ((2U 
                                                  == 
                                                  (3U 
                                                   & vlSelf->top__DOT__w_10))
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSelf->top__DOT__blk216_5__DOT__data_reg 
                                                               >> 0x1fU))) 
                                                   << 0x10U) 
                                                  | (vlSelf->top__DOT__blk216_5__DOT__data_reg 
                                                     >> 0x10U))
                                                  : 
                                                 (((- (IData)(
                                                              (vlSelf->top__DOT__blk216_5__DOT__data_reg 
                                                               >> 0x1fU))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & vlSelf->top__DOT__blk216_5__DOT__data_reg)))
                                              : ((IData)(vlSelf->top__DOT__blk220_1__DOT__is_lhu)
                                                  ? 
                                                 ((2U 
                                                   == 
                                                   (3U 
                                                    & vlSelf->top__DOT__w_10))
                                                   ? 
                                                  VL_SHIFTR_III(32,32,32, vlSelf->top__DOT__blk216_5__DOT__data_reg, 0x10U)
                                                   : 
                                                  (0xffffU 
                                                   & vlSelf->top__DOT__blk216_5__DOT__data_reg))
                                                  : vlSelf->top__DOT__blk216_5__DOT__data_reg))))
                                  : vlSelf->top__DOT__w_10)),32);
        bufp->chgBit(oldp+16,((7U == (IData)(vlSelf->top__DOT__blk217_4__DOT__q))));
        bufp->chgCData(oldp+17,(vlSelf->top__DOT__blk86_28__DOT__outputBuffer),8);
        bufp->chgSData(oldp+18,(vlSelf->top__DOT__blk85_7__DOT__pixelCounter),10);
        bufp->chgWData(oldp+19,(vlSelf->top__DOT__w_26),128);
        bufp->chgBit(oldp+23,((1U & ((IData)(vlSelf->top__DOT__blk85_7__DOT__pixelCounter) 
                                     >> 3U))));
        bufp->chgCData(oldp+24,(vlSelf->top__DOT__w_28),8);
        bufp->chgCData(oldp+25,(((0x30U & ((IData)(vlSelf->top__DOT__blk85_7__DOT__pixelCounter) 
                                           >> 4U)) 
                                 | (0xfU & ((IData)(vlSelf->top__DOT__blk85_7__DOT__pixelCounter) 
                                            >> 3U)))),8);
        bufp->chgCData(oldp+26,(vlSelf->top__DOT__w_30),8);
        bufp->chgCData(oldp+27,((3U & ((IData)(vlSelf->top__DOT__blk85_7__DOT__pixelCounter) 
                                       >> 8U))),2);
        bufp->chgIData(oldp+28,(vlSelf->top__DOT__blk107_39__DOT__counter),27);
        bufp->chgCData(oldp+29,(vlSelf->top__DOT__blk128_26__DOT__count),4);
        bufp->chgBit(oldp+30,(vlSelf->top__DOT__blk128_26__DOT__verificao));
        bufp->chgCData(oldp+31,(vlSelf->top__DOT__blk217_4__DOT__q),3);
        bufp->chgIData(oldp+32,(vlSelf->top__DOT__blk219_2__DOT__rf[0]),32);
        bufp->chgIData(oldp+33,(vlSelf->top__DOT__blk219_2__DOT__rf[1]),32);
        bufp->chgIData(oldp+34,(vlSelf->top__DOT__blk219_2__DOT__rf[2]),32);
        bufp->chgIData(oldp+35,(vlSelf->top__DOT__blk219_2__DOT__rf[3]),32);
        bufp->chgIData(oldp+36,(vlSelf->top__DOT__blk219_2__DOT__rf[4]),32);
        bufp->chgIData(oldp+37,(vlSelf->top__DOT__blk219_2__DOT__rf[5]),32);
        bufp->chgIData(oldp+38,(vlSelf->top__DOT__blk219_2__DOT__rf[6]),32);
        bufp->chgIData(oldp+39,(vlSelf->top__DOT__blk219_2__DOT__rf[7]),32);
        bufp->chgIData(oldp+40,(vlSelf->top__DOT__blk219_2__DOT__rf[8]),32);
        bufp->chgIData(oldp+41,(vlSelf->top__DOT__blk219_2__DOT__rf[9]),32);
        bufp->chgIData(oldp+42,(vlSelf->top__DOT__blk219_2__DOT__rf[10]),32);
        bufp->chgIData(oldp+43,(vlSelf->top__DOT__blk219_2__DOT__rf[11]),32);
        bufp->chgIData(oldp+44,(vlSelf->top__DOT__blk219_2__DOT__rf[12]),32);
        bufp->chgIData(oldp+45,(vlSelf->top__DOT__blk219_2__DOT__rf[13]),32);
        bufp->chgIData(oldp+46,(vlSelf->top__DOT__blk219_2__DOT__rf[14]),32);
        bufp->chgIData(oldp+47,(vlSelf->top__DOT__blk219_2__DOT__rf[15]),32);
        bufp->chgIData(oldp+48,(vlSelf->top__DOT__blk219_2__DOT__rf[16]),32);
        bufp->chgIData(oldp+49,(vlSelf->top__DOT__blk219_2__DOT__rf[17]),32);
        bufp->chgIData(oldp+50,(vlSelf->top__DOT__blk219_2__DOT__rf[18]),32);
        bufp->chgIData(oldp+51,(vlSelf->top__DOT__blk219_2__DOT__rf[19]),32);
        bufp->chgIData(oldp+52,(vlSelf->top__DOT__blk219_2__DOT__rf[20]),32);
        bufp->chgIData(oldp+53,(vlSelf->top__DOT__blk219_2__DOT__rf[21]),32);
        bufp->chgIData(oldp+54,(vlSelf->top__DOT__blk219_2__DOT__rf[22]),32);
        bufp->chgIData(oldp+55,(vlSelf->top__DOT__blk219_2__DOT__rf[23]),32);
        bufp->chgIData(oldp+56,(vlSelf->top__DOT__blk219_2__DOT__rf[24]),32);
        bufp->chgIData(oldp+57,(vlSelf->top__DOT__blk219_2__DOT__rf[25]),32);
        bufp->chgIData(oldp+58,(vlSelf->top__DOT__blk219_2__DOT__rf[26]),32);
        bufp->chgIData(oldp+59,(vlSelf->top__DOT__blk219_2__DOT__rf[27]),32);
        bufp->chgIData(oldp+60,(vlSelf->top__DOT__blk219_2__DOT__rf[28]),32);
        bufp->chgIData(oldp+61,(vlSelf->top__DOT__blk219_2__DOT__rf[29]),32);
        bufp->chgIData(oldp+62,(vlSelf->top__DOT__blk219_2__DOT__rf[30]),32);
        bufp->chgIData(oldp+63,(vlSelf->top__DOT__blk219_2__DOT__rf[31]),32);
        bufp->chgIData(oldp+64,(((IData)(vlSelf->top__DOT__blk220_1__DOT__is_lbu)
                                  ? vlSelf->top__DOT__blk220_1__DOT____VdfgTmp_hecc7b86e__0
                                  : ((IData)(vlSelf->top__DOT__blk220_1__DOT__is_lb)
                                      ? vlSelf->top__DOT__blk220_1__DOT____VdfgTmp_hecc7b86e__0
                                      : ((IData)(vlSelf->top__DOT__blk220_1__DOT__is_lh)
                                          ? ((2U == 
                                              (3U & vlSelf->top__DOT__w_10))
                                              ? (((- (IData)(
                                                             (vlSelf->top__DOT__blk216_5__DOT__data_reg 
                                                              >> 0x1fU))) 
                                                  << 0x10U) 
                                                 | (vlSelf->top__DOT__blk216_5__DOT__data_reg 
                                                    >> 0x10U))
                                              : (((- (IData)(
                                                             (vlSelf->top__DOT__blk216_5__DOT__data_reg 
                                                              >> 0x1fU))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & vlSelf->top__DOT__blk216_5__DOT__data_reg)))
                                          : ((IData)(vlSelf->top__DOT__blk220_1__DOT__is_lhu)
                                              ? ((2U 
                                                  == 
                                                  (3U 
                                                   & vlSelf->top__DOT__w_10))
                                                  ? 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->top__DOT__blk216_5__DOT__data_reg, 0x10U)
                                                  : 
                                                 (0xffffU 
                                                  & vlSelf->top__DOT__blk216_5__DOT__data_reg))
                                              : vlSelf->top__DOT__blk216_5__DOT__data_reg))))),32);
        bufp->chgBit(oldp+65,(((IData)(vlSelf->top__DOT__blk220_1__DOT__is_beq) 
                               | ((IData)(vlSelf->top__DOT__blk220_1__DOT__is_bne) 
                                  | ((IData)(vlSelf->top__DOT__blk220_1__DOT__is_blt) 
                                     | ((IData)(vlSelf->top__DOT__blk220_1__DOT__is_bge) 
                                        | ((0x6fU == 
                                            (0x7fU 
                                             & vlSelf->top__DOT__w_3)) 
                                           | (IData)(vlSelf->top__DOT__blk220_1__DOT__is_jalr))))))));
        bufp->chgIData(oldp+66,(vlSelf->top__DOT__blk220_1__DOT__jump_add),32);
        bufp->chgIData(oldp+67,(((7U == (IData)(vlSelf->top__DOT__blk217_4__DOT__q))
                                  ? (((IData)(vlSelf->top__DOT__blk220_1__DOT__is_beq) 
                                      | ((IData)(vlSelf->top__DOT__blk220_1__DOT__is_bne) 
                                         | ((IData)(vlSelf->top__DOT__blk220_1__DOT__is_blt) 
                                            | ((IData)(vlSelf->top__DOT__blk220_1__DOT__is_bge) 
                                               | ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->top__DOT__w_3)) 
                                                  | (IData)(vlSelf->top__DOT__blk220_1__DOT__is_jalr))))))
                                      ? vlSelf->top__DOT__blk220_1__DOT__jump_add
                                      : ((IData)(4U) 
                                         + vlSelf->top__DOT__w_7))
                                  : 0U)),32);
        bufp->chgCData(oldp+68,((0x7fU & vlSelf->top__DOT__w_3)),7);
        bufp->chgCData(oldp+69,((0x1fU & (vlSelf->top__DOT__w_3 
                                          >> 7U))),5);
        bufp->chgCData(oldp+70,((7U & (vlSelf->top__DOT__w_3 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+71,((0x1fU & (vlSelf->top__DOT__w_3 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+72,((0x1fU & (vlSelf->top__DOT__w_3 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+73,((vlSelf->top__DOT__w_3 
                                 >> 0x19U)),7);
        bufp->chgBit(oldp+74,((0x33U == (0x7fU & vlSelf->top__DOT__w_3))));
        bufp->chgBit(oldp+75,(((IData)(vlSelf->top__DOT__blk220_1__DOT____VdfgTmp_h897b9696__0) 
                               & (0U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct7)))));
        bufp->chgBit(oldp+76,(((IData)(vlSelf->top__DOT__blk220_1__DOT____VdfgTmp_h897b9696__0) 
                               & (0x20U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct7)))));
        bufp->chgBit(oldp+77,(((0x33U == (0x7fU & vlSelf->top__DOT__w_3)) 
                               & ((4U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)) 
                                  & (0U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct7))))));
        bufp->chgBit(oldp+78,(((0x33U == (0x7fU & vlSelf->top__DOT__w_3)) 
                               & ((6U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)) 
                                  & (0U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct7))))));
        bufp->chgBit(oldp+79,(((0x33U == (0x7fU & vlSelf->top__DOT__w_3)) 
                               & ((7U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)) 
                                  & (0U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct7))))));
        bufp->chgBit(oldp+80,(((0x33U == (0x7fU & vlSelf->top__DOT__w_3)) 
                               & ((3U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)) 
                                  & (0U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct7))))));
        bufp->chgBit(oldp+81,(((0x33U == (0x7fU & vlSelf->top__DOT__w_3)) 
                               & ((1U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)) 
                                  & (0U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct7))))));
        bufp->chgBit(oldp+82,(((0x33U == (0x7fU & vlSelf->top__DOT__w_3)) 
                               & ((2U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)) 
                                  & (0U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct7))))));
        bufp->chgBit(oldp+83,(((IData)(vlSelf->top__DOT__blk220_1__DOT____VdfgTmp_h4304dc3a__0) 
                               & (0U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct7)))));
        bufp->chgBit(oldp+84,(((IData)(vlSelf->top__DOT__blk220_1__DOT____VdfgTmp_h4304dc3a__0) 
                               & (0x20U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct7)))));
        bufp->chgBit(oldp+85,(vlSelf->top__DOT__blk220_1__DOT__I_type));
        bufp->chgBit(oldp+86,(vlSelf->top__DOT__blk220_1__DOT__is_jalr));
        bufp->chgBit(oldp+87,(vlSelf->top__DOT__blk220_1__DOT__is_lb));
        bufp->chgBit(oldp+88,(vlSelf->top__DOT__blk220_1__DOT__is_lh));
        bufp->chgBit(oldp+89,(vlSelf->top__DOT__blk220_1__DOT__is_lw));
        bufp->chgBit(oldp+90,(vlSelf->top__DOT__blk220_1__DOT__is_lbu));
        bufp->chgBit(oldp+91,(vlSelf->top__DOT__blk220_1__DOT__is_lhu));
        bufp->chgBit(oldp+92,(((0U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)) 
                               & (0x13U == (0x7fU & vlSelf->top__DOT__w_3)))));
        bufp->chgBit(oldp+93,(((2U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)) 
                               & (0x13U == (0x7fU & vlSelf->top__DOT__w_3)))));
        bufp->chgBit(oldp+94,(((3U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)) 
                               & (0x13U == (0x7fU & vlSelf->top__DOT__w_3)))));
        bufp->chgBit(oldp+95,(((4U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)) 
                               & (0x13U == (0x7fU & vlSelf->top__DOT__w_3)))));
        bufp->chgBit(oldp+96,(((6U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)) 
                               & (0x13U == (0x7fU & vlSelf->top__DOT__w_3)))));
        bufp->chgBit(oldp+97,(((7U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)) 
                               & (0x13U == (0x7fU & vlSelf->top__DOT__w_3)))));
        bufp->chgBit(oldp+98,(((1U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)) 
                               & (IData)(vlSelf->top__DOT__blk221_25__DOT____VdfgTmp_hdf511576__0))));
        bufp->chgBit(oldp+99,(((5U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)) 
                               & (IData)(vlSelf->top__DOT__blk221_25__DOT____VdfgTmp_hdf511576__0))));
        bufp->chgBit(oldp+100,(((5U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)) 
                                & (IData)(vlSelf->__VdfgTmp_hb17978b1__0))));
        bufp->chgBit(oldp+101,(vlSelf->top__DOT__blk220_1__DOT__is_sw));
        bufp->chgBit(oldp+102,(vlSelf->top__DOT__blk220_1__DOT__is_sb));
        bufp->chgBit(oldp+103,(vlSelf->top__DOT__blk220_1__DOT__is_sh));
        bufp->chgBit(oldp+104,((0x63U == (0x7fU & vlSelf->top__DOT__w_3))));
        bufp->chgBit(oldp+105,(vlSelf->top__DOT__blk220_1__DOT__is_bge));
        bufp->chgBit(oldp+106,(vlSelf->top__DOT__blk220_1__DOT__is_beq));
        bufp->chgBit(oldp+107,(vlSelf->top__DOT__blk220_1__DOT__is_blt));
        bufp->chgBit(oldp+108,(vlSelf->top__DOT__blk220_1__DOT__is_bne));
        bufp->chgBit(oldp+109,(((0x63U == (0x7fU & vlSelf->top__DOT__w_3)) 
                                & (6U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)))));
        bufp->chgBit(oldp+110,(((0x63U == (0x7fU & vlSelf->top__DOT__w_3)) 
                                & (7U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)))));
        bufp->chgBit(oldp+111,(vlSelf->top__DOT__blk220_1__DOT__U_type));
        bufp->chgBit(oldp+112,((0x17U == (0x7fU & vlSelf->top__DOT__w_3))));
        bufp->chgBit(oldp+113,((0x37U == (0x7fU & vlSelf->top__DOT__w_3))));
        bufp->chgBit(oldp+114,((0x6fU == (0x7fU & vlSelf->top__DOT__w_3))));
        bufp->chgBit(oldp+115,(((0xfU == (0x7fU & vlSelf->top__DOT__w_3)) 
                                & (0U == (IData)(vlSelf->top__DOT__blk220_1__DOT__funct3)))));
        bufp->chgBit(oldp+116,(((IData)(vlSelf->top__DOT__blk220_1__DOT____VdfgTmp_h760cc816__0) 
                                & (0U == (vlSelf->top__DOT__w_3 
                                          >> 0x19U)))));
        bufp->chgBit(oldp+117,(((IData)(vlSelf->top__DOT__blk220_1__DOT____VdfgTmp_h760cc816__0) 
                                & (1U == (vlSelf->top__DOT__w_3 
                                          >> 0x19U)))));
        bufp->chgCData(oldp+118,(vlSelf->top__DOT__blk220_1__DOT__funct3),3);
        bufp->chgCData(oldp+119,(vlSelf->top__DOT__blk220_1__DOT__funct7),7);
        bufp->chgIData(oldp+120,(vlSelf->top__DOT__blk220_1__DOT__imm),32);
        bufp->chgBit(oldp+121,(((IData)(vlSelf->top__DOT__blk220_1__DOT__is_lw) 
                                | ((IData)(vlSelf->top__DOT__blk220_1__DOT__is_lbu) 
                                   | ((IData)(vlSelf->top__DOT__blk220_1__DOT__is_lb) 
                                      | ((IData)(vlSelf->top__DOT__blk220_1__DOT__is_lh) 
                                         | (IData)(vlSelf->top__DOT__blk220_1__DOT__is_lhu)))))));
        bufp->chgCData(oldp+122,(vlSelf->top__DOT__blk220_1__DOT__current_state),4);
        bufp->chgCData(oldp+123,(((0U == (IData)(vlSelf->top__DOT__blk220_1__DOT__current_state))
                                   ? 1U : ((((IData)(vlSelf->top__DOT__blk220_1__DOT__is_lw) 
                                             | (IData)(vlSelf->top__DOT__blk220_1__DOT__is_sw)) 
                                            & (1U == (IData)(vlSelf->top__DOT__blk220_1__DOT__current_state)))
                                            ? 2U : 
                                           (((0x33U 
                                              == (0x7fU 
                                                  & vlSelf->top__DOT__w_3)) 
                                             & (1U 
                                                == (IData)(vlSelf->top__DOT__blk220_1__DOT__current_state)))
                                             ? 6U : 
                                            (((IData)(vlSelf->top__DOT__blk220_1__DOT__I_type) 
                                              & (1U 
                                                 == (IData)(vlSelf->top__DOT__blk220_1__DOT__current_state)))
                                              ? 7U : 0U))))),4);
        bufp->chgWData(oldp+124,(vlSelf->top__DOT__blk221_25__DOT__hex_code),128);
        bufp->chgCData(oldp+128,(vlSelf->top__DOT__blk221_25__DOT__funct3),3);
        bufp->chgBit(oldp+129,((1U & ((IData)(vlSelf->top__DOT__blk85_7__DOT__pixelCounter) 
                                      >> 4U))));
        bufp->chgBit(oldp+130,((1U & ((IData)(vlSelf->top__DOT__blk85_7__DOT__pixelCounter) 
                                      >> 5U))));
        bufp->chgBit(oldp+131,((1U & ((IData)(vlSelf->top__DOT__blk85_7__DOT__pixelCounter) 
                                      >> 6U))));
        bufp->chgBit(oldp+132,((1U & ((IData)(vlSelf->top__DOT__blk85_7__DOT__pixelCounter) 
                                      >> 8U))));
        bufp->chgBit(oldp+133,((1U & ((IData)(vlSelf->top__DOT__blk85_7__DOT__pixelCounter) 
                                      >> 9U))));
        bufp->chgQData(oldp+134,(vlSelf->top__DOT__blk85_7__DOT__counter),33);
        bufp->chgCData(oldp+136,(vlSelf->top__DOT__blk85_7__DOT__state),3);
        bufp->chgBit(oldp+137,(vlSelf->top__DOT__blk85_7__DOT__dc));
        bufp->chgBit(oldp+138,(vlSelf->top__DOT__blk85_7__DOT__sclk));
        bufp->chgBit(oldp+139,(vlSelf->top__DOT__blk85_7__DOT__sdin));
        bufp->chgBit(oldp+140,(vlSelf->top__DOT__blk85_7__DOT__reset));
        bufp->chgBit(oldp+141,(vlSelf->top__DOT__blk85_7__DOT__cs));
        bufp->chgCData(oldp+142,(vlSelf->top__DOT__blk85_7__DOT__dataToSend),8);
        bufp->chgCData(oldp+143,(vlSelf->top__DOT__blk85_7__DOT__bitNumber),3);
        bufp->chgCData(oldp+144,(vlSelf->top__DOT__blk85_7__DOT__commandIndex),8);
        bufp->chgCData(oldp+145,(((0x30U & ((IData)(vlSelf->top__DOT__blk85_7__DOT__pixelCounter) 
                                            >> 4U)) 
                                  | (0xfU & ((IData)(vlSelf->top__DOT__blk85_7__DOT__pixelCounter) 
                                             >> 3U)))),6);
        bufp->chgCData(oldp+146,((7U & (IData)(vlSelf->top__DOT__blk85_7__DOT__pixelCounter))),3);
        bufp->chgBit(oldp+147,((1U & (~ ((IData)(vlSelf->top__DOT__blk85_7__DOT__pixelCounter) 
                                         >> 7U)))));
        bufp->chgCData(oldp+148,(vlSelf->top__DOT__blk86_28__DOT__chosenChar),8);
    }
    bufp->chgBit(oldp+149,(vlSelf->sck1));
    bufp->chgBit(oldp+150,(vlSelf->sda1));
    bufp->chgBit(oldp+151,(vlSelf->cs1));
    bufp->chgBit(oldp+152,(vlSelf->dc1));
    bufp->chgBit(oldp+153,(vlSelf->res1));
    bufp->chgBit(oldp+154,(vlSelf->clk));
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
}
