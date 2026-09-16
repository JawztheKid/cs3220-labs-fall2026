// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline.h for the primary calling header

#include "Vpipeline__pch.h"
#include "Vpipeline__Syms.h"
#include "Vpipeline_pipeline.h"

VL_INLINE_OPT void Vpipeline_pipeline___nba_sequent__TOP__pipeline__0(Vpipeline_pipeline* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___nba_sequent__TOP__pipeline__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__my_FE_stage__DOT__PC_FE_latch;
    __Vdly__my_FE_stage__DOT__PC_FE_latch = 0;
    IData/*31:0*/ __Vdly__my_FE_stage__DOT__inst_count_FE;
    __Vdly__my_FE_stage__DOT__inst_count_FE = 0;
    IData/*31:0*/ __VdlyVal__my_MEM_stage__DOT__dmem__v0;
    __VdlyVal__my_MEM_stage__DOT__dmem__v0 = 0;
    SData/*13:0*/ __VdlyDim0__my_MEM_stage__DOT__dmem__v0;
    __VdlyDim0__my_MEM_stage__DOT__dmem__v0 = 0;
    CData/*0:0*/ __VdlySet__my_MEM_stage__DOT__dmem__v0;
    __VdlySet__my_MEM_stage__DOT__dmem__v0 = 0;
    // Body
    __VdlySet__my_MEM_stage__DOT__dmem__v0 = 0U;
    __Vdly__my_FE_stage__DOT__inst_count_FE = vlSelfRef.__PVT__my_FE_stage__DOT__inst_count_FE;
    __Vdly__my_FE_stage__DOT__PC_FE_latch = vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch;
    vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[0U] 
        = vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[0U];
    vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[1U] 
        = vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[1U];
    vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[2U] 
        = vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[2U];
    vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[3U] 
        = vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U];
    vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[4U] 
        = vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U];
    if (vlSelfRef.__PVT__my_MEM_stage__DOT__wr_mem_MEM) {
        __VdlyVal__my_MEM_stage__DOT__dmem__v0 = vlSelfRef.__PVT__my_MEM_stage__DOT__wr_val_MEM;
        __VdlyDim0__my_MEM_stage__DOT__dmem__v0 = (0x3fffU 
                                                   & (vlSelfRef.__PVT__my_MEM_stage__DOT__memaddr_MEM 
                                                      >> 2U));
        __VdlySet__my_MEM_stage__DOT__dmem__v0 = 1U;
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__cycle_count = 0U;
        __Vdly__my_FE_stage__DOT__inst_count_FE = 1U;
        __Vdly__my_FE_stage__DOT__PC_FE_latch = 0x200U;
        vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[0U] = 0U;
        vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[1U] = 0U;
        vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[2U] = 0U;
        vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[3U] = 0U;
        vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[4U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__in_use_regs = 0U;
    } else {
        vlSelfRef.__PVT__cycle_count = ((IData)(1U) 
                                        + vlSelfRef.__PVT__cycle_count);
        if ((1U & (~ (IData)(vlSelfRef.__PVT__from_AGEX_to_DE)))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__from_DE_to_FE)))) {
                __Vdly__my_FE_stage__DOT__inst_count_FE 
                    = ((IData)(1U) + vlSelfRef.__PVT__my_FE_stage__DOT__inst_count_FE);
            }
        }
        if (vlSelfRef.__PVT__from_AGEX_to_DE) {
            __Vdly__my_FE_stage__DOT__PC_FE_latch = vlSelfRef.__PVT__my_AGEX_stage__DOT__br_target_AGEX;
            vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[0U] = 0U;
            vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[1U] = 0U;
            vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[2U] = 0U;
            vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[3U] = 0U;
            vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[4U] = 0U;
        } else if (vlSelfRef.__PVT__from_DE_to_FE) {
            __Vdly__my_FE_stage__DOT__PC_FE_latch = vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch;
            vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[0U] 
                = vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[0U];
            vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[1U] 
                = vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[1U];
            vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[2U] 
                = vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[2U];
            vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[3U] 
                = vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U];
            vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[4U] 
                = vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U];
        } else {
            __Vdly__my_FE_stage__DOT__PC_FE_latch = vlSelfRef.__PVT__my_FE_stage__DOT__pcplus_FE;
            vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[0U] 
                = (IData)((((QData)((IData)(((IData)(4U) 
                                             + vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                            << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__inst_count_FE))));
            vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[1U] 
                = (IData)(((((QData)((IData)(((IData)(4U) 
                                              + vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                             << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__inst_count_FE))) 
                           >> 0x20U));
            vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[2U] 
                = (IData)((((QData)((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__imem
                                            [(0x3fffU 
                                              & (vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                 >> 2U))])) 
                            << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch))));
            vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[3U] 
                = (IData)(((((QData)((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__imem
                                             [(0x3fffU 
                                               & (vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                  >> 2U))])) 
                             << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                           >> 0x20U));
            vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[4U] = 1U;
        }
        if (((~ (IData)(vlSelfRef.__PVT__from_DE_to_FE)) 
             & (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__wr_reg_DE))) {
            vlSelfRef.__PVT__my_DE_stage__DOT__in_use_regs 
                = (vlSelfRef.__PVT__my_DE_stage__DOT__in_use_regs 
                   | (0xffffffffULL & ((IData)(1U) 
                                       << (0x1fU & 
                                           (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                            >> 7U)))));
        }
        if ((1U & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                           >> 0x25U)))) {
            vlSelfRef.__PVT__my_DE_stage__DOT__in_use_regs 
                = ((~ ((IData)(1U) << (0x1fU & (IData)(
                                                       (vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                                        >> 0x20U))))) 
                   & vlSelfRef.__PVT__my_DE_stage__DOT__in_use_regs);
        }
    }
    if (__VdlySet__my_MEM_stage__DOT__dmem__v0) {
        vlSelfRef.__PVT__my_MEM_stage__DOT__dmem[__VdlyDim0__my_MEM_stage__DOT__dmem__v0] 
            = __VdlyVal__my_MEM_stage__DOT__dmem__v0;
    }
    vlSelfRef.__PVT__my_FE_stage__DOT__inst_count_FE 
        = __Vdly__my_FE_stage__DOT__inst_count_FE;
    vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch 
        = __Vdly__my_FE_stage__DOT__PC_FE_latch;
    vlSelfRef.__PVT__my_FE_stage__DOT__pcplus_FE = 
        ((IData)(4U) + vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch);
}

extern const VlWide<8>/*255:0*/ Vpipeline__ConstPool__CONST_hee2f1268_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vpipeline__ConstPool__TABLE_ha880f92c_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vpipeline__ConstPool__TABLE_h6e570ecf_0;

VL_INLINE_OPT void Vpipeline_pipeline___nba_sequent__TOP__pipeline__1(Vpipeline_pipeline* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___nba_sequent__TOP__pipeline__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ my_DE_stage__DOT____VdfgRegularize_ha41f8c36_0_2;
    my_DE_stage__DOT____VdfgRegularize_ha41f8c36_0_2 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgRegularize_ha41f8c36_0_11;
    my_DE_stage__DOT____VdfgRegularize_ha41f8c36_0_11 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgRegularize_ha41f8c36_0_14;
    my_DE_stage__DOT____VdfgRegularize_ha41f8c36_0_14 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgRegularize_ha41f8c36_0_18;
    my_DE_stage__DOT____VdfgRegularize_ha41f8c36_0_18 = 0;
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<5>/*159:0*/ __Vtemp_14;
    // Body
    __Vtemp_6[1U] = (((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                                   vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                   << 0x19U) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U])) 
                                                     >> 7U)))) 
                      << 6U) | (IData)(((((QData)((IData)(
                                                          ((1U 
                                                            == 
                                                            (0x3fU 
                                                             & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                                >> 7U)))
                                                            ? 
                                                           (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                              << 0x19U) 
                                                             | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                >> 7U)) 
                                                            + 
                                                            ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                              << 0x19U) 
                                                             | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                >> 7U)))
                                                            : 
                                                           ((0xcU 
                                                             == 
                                                             (0x3fU 
                                                              & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                                 >> 7U)))
                                                             ? 
                                                            (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                               << 0x19U) 
                                                              | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                 >> 7U)) 
                                                             + 
                                                             ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                               << 0x19U) 
                                                              | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                                 >> 7U)))
                                                             : 0U)))) 
                                          << 6U) | (QData)((IData)(
                                                                   (0x3fU 
                                                                    & vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U])))) 
                                        >> 0x20U)));
    __Vtemp_14[0U] = ((((1U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                         ? (((- (IData)((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                         >> 0x1fU))) 
                             << 0xbU) | (0x7ffU & (
                                                   vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 0x14U)))
                         : ((5U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                             ? (((- (IData)((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                             >> 0x1fU))) 
                                 << 0xcU) | ((0x800U 
                                              & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                 << 4U)) 
                                             | ((0x7e0U 
                                                 & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                    >> 0x14U)) 
                                                | (0x1eU 
                                                   & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                      >> 7U)))))
                             : 0U)) << 7U) | ((((0x1cU 
                                                 == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                | ((0x1dU 
                                                    == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                   | ((0x1eU 
                                                       == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                      | ((0x1fU 
                                                          == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                         | ((0x20U 
                                                             == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                            | (0x21U 
                                                               == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))))))) 
                                               << 6U) 
                                              | (((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__wr_reg_DE) 
                                                  << 5U) 
                                                 | (0x1fU 
                                                    & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                       >> 7U)))));
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[0U] = 0U;
        vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[1U] = 0U;
        vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[2U] = 0U;
        vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[3U] = 0U;
        vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[4U] = 0U;
        vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] = 0U;
        vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] = 0U;
        vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] = 0U;
        vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] = 0U;
        vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
            = Vpipeline__ConstPool__CONST_hee2f1268_0[0U];
        vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
            = Vpipeline__ConstPool__CONST_hee2f1268_0[1U];
        vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
            = Vpipeline__ConstPool__CONST_hee2f1268_0[2U];
        vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
            = Vpipeline__ConstPool__CONST_hee2f1268_0[3U];
        vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
            = Vpipeline__ConstPool__CONST_hee2f1268_0[4U];
        vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
            = Vpipeline__ConstPool__CONST_hee2f1268_0[5U];
        vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[6U] 
            = Vpipeline__ConstPool__CONST_hee2f1268_0[6U];
        vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[7U] 
            = Vpipeline__ConstPool__CONST_hee2f1268_0[7U];
    } else {
        vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
            = vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U];
        vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
            = vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U];
        vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
            = vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U];
        vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
            = vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U];
        vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
            = vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U];
        vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
            = (IData)((((QData)((IData)(((1U == (0x3fU 
                                                 & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                    >> 7U)))
                                          ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               << 0x19U) 
                                              | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                 >> 7U)) 
                                             + ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   >> 7U)))
                                          : ((0xcU 
                                              == (0x3fU 
                                                  & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                     >> 7U)))
                                              ? (((
                                                   vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   << 0x19U) 
                                                  | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                     >> 7U)) 
                                                 + 
                                                 ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   << 0x19U) 
                                                  | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                     >> 7U)))
                                              : 0U)))) 
                        << 6U) | (QData)((IData)((0x3fU 
                                                  & vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U])))));
        vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
            = __Vtemp_6[1U];
        vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
            = (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                 << 0x1fU) | (0x7ffff000U & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             >> 1U))) 
               | (((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                                vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                << 0x19U) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U])) 
                                                  >> 7U)))) 
                   >> 0x1aU) | ((IData)(((0x3fffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                              << 0x19U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U])) 
                                                >> 7U))) 
                                         >> 0x20U)) 
                                << 6U)));
        vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
            = ((0xfffU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                          >> 1U)) | ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                      << 0x1fU) | (0x7ffff000U 
                                                   & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                      >> 1U))));
        vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
            = ((0xfffU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                          >> 1U)) | (0x1000U & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                >> 1U)));
        if (vlSelfRef.__PVT__from_DE_to_FE) {
            vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                = Vpipeline__ConstPool__CONST_hee2f1268_0[0U];
            vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                = Vpipeline__ConstPool__CONST_hee2f1268_0[1U];
            vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                = Vpipeline__ConstPool__CONST_hee2f1268_0[2U];
            vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                = Vpipeline__ConstPool__CONST_hee2f1268_0[3U];
            vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                = Vpipeline__ConstPool__CONST_hee2f1268_0[4U];
            vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                = Vpipeline__ConstPool__CONST_hee2f1268_0[5U];
            vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                = Vpipeline__ConstPool__CONST_hee2f1268_0[6U];
            vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                = Vpipeline__ConstPool__CONST_hee2f1268_0[7U];
        } else {
            vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                = __Vtemp_14[0U];
            vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                = ((((1U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                      ? (((- (IData)((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                      >> 0x1fU))) << 0xbU) 
                         | (0x7ffU & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                      >> 0x14U))) : 
                     ((5U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                       ? (((- (IData)((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                       >> 0x1fU))) 
                           << 0xcU) | ((0x800U & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                  << 4U)) 
                                       | ((0x7e0U & 
                                           (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                            >> 0x14U)) 
                                          | (0x1eU 
                                             & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                >> 7U)))))
                       : 0U)) >> 0x19U) | (vlSelfRef.__PVT__my_DE_stage__DOT__regs
                                           [(0x1fU 
                                             & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                >> 0x14U))] 
                                           << 7U));
            vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                = ((vlSelfRef.__PVT__my_DE_stage__DOT__regs
                    [(0x1fU & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                               >> 0x14U))] >> 0x19U) 
                   | ((IData)((((QData)((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[0U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.__PVT__my_DE_stage__DOT__regs
                                                            [
                                                            (0x1fU 
                                                             & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                >> 0xfU))])))) 
                      << 7U));
            vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                = (((IData)((((QData)((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[0U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelfRef.__PVT__my_DE_stage__DOT__regs
                                                          [
                                                          (0x1fU 
                                                           & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                              >> 0xfU))])))) 
                    >> 0x19U) | ((IData)(((((QData)((IData)(
                                                            vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[0U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.__PVT__my_DE_stage__DOT__regs
                                                             [
                                                             (0x1fU 
                                                              & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                 >> 0xfU))]))) 
                                          >> 0x20U)) 
                                 << 7U));
            vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                = (((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                     << 0xdU) | ((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE) 
                                 << 7U)) | ((IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[0U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelfRef.__PVT__my_DE_stage__DOT__regs
                                                                        [
                                                                        (0x1fU 
                                                                         & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                            >> 0xfU))]))) 
                                                     >> 0x20U)) 
                                            >> 0x19U));
            vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                = (((0x7fU & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                              >> 0x13U)) | ((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE) 
                                            >> 0x19U)) 
                   | ((0x1f80U & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                  >> 0x13U)) | (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                << 0xdU)));
            vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                = ((0x7fU & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                             >> 0x13U)) | ((0x1f80U 
                                            & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                               >> 0x13U)) 
                                           | (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                              << 0xdU)));
            vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                = ((0x7fU & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                             >> 0x13U)) | ((0x1f80U 
                                            & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                               >> 0x13U)) 
                                           | (0x2000U 
                                              & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                 << 0xdU))));
        }
    }
    vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[0U] 
        = vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[0U];
    vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[1U] 
        = vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[1U];
    vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[2U] 
        = vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[2U];
    vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
        = vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[3U];
    vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
        = vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[4U];
    vlSelfRef.__PVT__my_AGEX_stage__DOT__br_target_AGEX 
        = ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
            << 0x13U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                         >> 0xdU));
    if (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
          >> 6U) & ((0x1cU == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                        >> 7U))) ? 
                    (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                       << 0x19U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                    >> 7U)) == ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   >> 7U)))
                     : ((0x1dU == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            >> 7U)))
                         ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                              << 0x19U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                           >> 7U)) 
                            != ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                 << 0x19U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                              >> 7U)))
                         : ((0x1eU == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 7U)))
                             ? VL_LTS_III(32, ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                << 0x19U) 
                                               | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                  >> 7U)), 
                                          ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                            << 0x19U) 
                                           | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                              >> 7U)))
                             : ((0x1fU == (0x3fU & 
                                           (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            >> 7U)))
                                 ? VL_GTES_III(32, 
                                               ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                   >> 7U)), 
                                               ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   >> 7U)))
                                 : ((0x20U == (0x3fU 
                                               & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 7U)))
                                     ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                          << 0x19U) 
                                         | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                            >> 7U)) 
                                        < ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                            << 0x19U) 
                                           | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                              >> 7U)))
                                     : ((0x21U == (0x3fU 
                                                   & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                      >> 7U))) 
                                        && (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              << 0x19U) 
                                             | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                >> 7U)) 
                                            >= ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   >> 7U))))))))))) {
        vlSelfRef.__PVT__my_AGEX_stage__DOT__br_target_AGEX 
            = (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                 << 0x13U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                              >> 0xdU)) + ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                            << 0x19U) 
                                           | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                              >> 7U)));
    }
    my_DE_stage__DOT____VdfgRegularize_ha41f8c36_0_2 
        = (IData)((0x33U == (0x707fU & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])));
    my_DE_stage__DOT____VdfgRegularize_ha41f8c36_0_11 
        = (IData)((0x5033U == (0x707fU & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])));
    my_DE_stage__DOT____VdfgRegularize_ha41f8c36_0_18 
        = (IData)((0x1000U == (0xfe007000U & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])));
    my_DE_stage__DOT____VdfgRegularize_ha41f8c36_0_14 
        = (IData)((0x5013U == (0x707fU & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])));
    vlSelfRef.__PVT__from_AGEX_to_DE = ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                         >> 6U) & (vlSelfRef.__PVT__my_AGEX_stage__DOT__br_target_AGEX 
                                                   != 
                                                   ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                     << 0x13U) 
                                                    | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                       >> 0xdU))));
    vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE = (((IData)(my_DE_stage__DOT____VdfgRegularize_ha41f8c36_0_2) 
                                                   & (0U 
                                                      == 
                                                      (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                       >> 0x19U)))
                                                   ? 1U
                                                   : 
                                                  (((IData)(my_DE_stage__DOT____VdfgRegularize_ha41f8c36_0_2) 
                                                    & (0x20U 
                                                       == 
                                                       (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                        >> 0x19U)))
                                                    ? 2U
                                                    : 
                                                   ((IData)(
                                                            (0x7033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                     ? 3U
                                                     : 
                                                    ((IData)(
                                                             (0x6033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                      ? 4U
                                                      : 
                                                     ((IData)(
                                                              (0x4033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                       ? 5U
                                                       : 
                                                      ((IData)(
                                                               (0x2033U 
                                                                == 
                                                                (0xfe00707fU 
                                                                 & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                        ? 6U
                                                        : 
                                                       ((IData)(
                                                                (0x3033U 
                                                                 == 
                                                                 (0xfe00707fU 
                                                                  & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                         ? 7U
                                                         : 
                                                        (((IData)(my_DE_stage__DOT____VdfgRegularize_ha41f8c36_0_11) 
                                                          & (0x20U 
                                                             == 
                                                             (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                              >> 0x19U)))
                                                          ? 8U
                                                          : 
                                                         (((IData)(my_DE_stage__DOT____VdfgRegularize_ha41f8c36_0_11) 
                                                           & (0U 
                                                              == 
                                                              (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                               >> 0x19U)))
                                                           ? 9U
                                                           : 
                                                          (((0x33U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                            & (IData)(my_DE_stage__DOT____VdfgRegularize_ha41f8c36_0_18))
                                                            ? 0xaU
                                                            : 
                                                           (((IData)(my_DE_stage__DOT____VdfgRegularize_ha41f8c36_0_2) 
                                                             & (1U 
                                                                == 
                                                                (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                 >> 0x19U)))
                                                             ? 0xbU
                                                             : 
                                                            ((IData)(
                                                                     (0x13U 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                              ? 0xcU
                                                              : 
                                                             ((IData)(
                                                                      (0x7013U 
                                                                       == 
                                                                       (0x707fU 
                                                                        & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                               ? 0xdU
                                                               : 
                                                              ((IData)(
                                                                       (0x6013U 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                ? 0xeU
                                                                : 
                                                               ((IData)(
                                                                        (0x4013U 
                                                                         == 
                                                                         (0x707fU 
                                                                          & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                 ? 0xfU
                                                                 : 
                                                                ((IData)(
                                                                         (0x2013U 
                                                                          == 
                                                                          (0x707fU 
                                                                           & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                  ? 0x10U
                                                                  : 
                                                                 ((IData)(
                                                                          (0x3013U 
                                                                           == 
                                                                           (0x707fU 
                                                                            & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                   ? 0x11U
                                                                   : 
                                                                  (((IData)(my_DE_stage__DOT____VdfgRegularize_ha41f8c36_0_14) 
                                                                    & (0x20U 
                                                                       == 
                                                                       (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                        >> 0x19U)))
                                                                    ? 0x12U
                                                                    : 
                                                                   (((IData)(my_DE_stage__DOT____VdfgRegularize_ha41f8c36_0_14) 
                                                                     & (0U 
                                                                        == 
                                                                        (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                         >> 0x19U)))
                                                                     ? 0x13U
                                                                     : 
                                                                    (((0x13U 
                                                                       == 
                                                                       (0x7fU 
                                                                        & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                                      & (IData)(my_DE_stage__DOT____VdfgRegularize_ha41f8c36_0_18))
                                                                      ? 0x14U
                                                                      : 
                                                                     ((0x37U 
                                                                       == 
                                                                       (0x7fU 
                                                                        & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U]))
                                                                       ? 0x15U
                                                                       : 
                                                                      ((0x17U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U]))
                                                                        ? 0x16U
                                                                        : 
                                                                       ((IData)(
                                                                                (0x2003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                         ? 0x17U
                                                                         : 
                                                                        ((IData)(
                                                                                (0x2023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                          ? 0x18U
                                                                          : 
                                                                         ((0x6fU 
                                                                           == 
                                                                           (0x7fU 
                                                                            & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U]))
                                                                           ? 0x19U
                                                                           : 
                                                                          ((IData)(
                                                                                (0x67U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                            ? 0x1bU
                                                                            : 
                                                                           ((IData)(
                                                                                (0x63U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                             ? 0x1cU
                                                                             : 
                                                                            ((IData)(
                                                                                (0x1063U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                              ? 0x1dU
                                                                              : 
                                                                             ((IData)(
                                                                                (0x4063U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                               ? 0x1eU
                                                                               : 
                                                                              ((IData)(
                                                                                (0x5063U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                                ? 0x1fU
                                                                                : 
                                                                               ((IData)(
                                                                                (0x6063U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                                 ? 0x20U
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x7063U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                                 ? 0x21U
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x2073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                                 ? 0x22U
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x1073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                                 ? 0x23U
                                                                                 : 0x25U))))))))))))))))))))))))))))))))));
    vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE 
        = vlSelfRef.my_DE_stage__DOT____Vxrand_h8df70ee3__0;
    if ((1U & (~ (((((((((((1U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                           | (2U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                          | (3U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                         | (4U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                        | (5U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                       | (6U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                      | (7U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                     | (8U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                    | (9U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                   | (0xaU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                  | (0xbU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)))))) {
        if (((((((((((0x22U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                     | (0x23U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                    | (0xcU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                   | (0xdU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                  | (0xeU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                 | (0xfU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                | (0x10U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
               | (0x11U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
              | (0x17U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
             | (0x1bU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)))) {
            vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE = 1U;
        } else if ((((0x12U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                     | (0x13U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                    | (0x14U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)))) {
            vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE = 1U;
        } else if (((0x15U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                    | (0x16U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)))) {
            vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE = 3U;
        } else if ((0x18U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) {
            vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE = 4U;
        } else if ((0x19U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) {
            vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE = 2U;
        } else if (((((((0x1cU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                        | (0x1dU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                       | (0x1eU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                      | (0x1fU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                     | (0x20U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                    | (0x21U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)))) {
            vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE = 5U;
        }
    }
    vlSelfRef.__PVT__my_DE_stage__DOT__wr_reg_DE = 
        (((1U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
          | ((0xcU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
             | (0xdU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)))) 
         & (0U != (0x1fU & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                            >> 7U))));
    vlSelfRef.__PVT__my_DE_stage__DOT__type_I_DE = vlSelfRef.my_DE_stage__DOT____Vxrand_h8df6f9e8__0;
    if ((((((((((((1U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                  | (2U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                 | (3U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                | (4U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
               | (5U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
              | (6U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
             | (7U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
            | (8U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
           | (9U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
          | (0xaU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
         | (0xbU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)))) {
        vlSelfRef.__PVT__my_DE_stage__DOT__type_I_DE = 1U;
    } else if (((((((((((0x22U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                        | (0x23U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                       | (0xcU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                      | (0xdU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                     | (0xeU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                    | (0xfU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                   | (0x10U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                  | (0x11U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                 | (0x17U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                | (0x1bU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)))) {
        vlSelfRef.__PVT__my_DE_stage__DOT__type_I_DE = 2U;
    } else if ((((0x12U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                 | (0x13U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                | (0x14U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)))) {
        vlSelfRef.__PVT__my_DE_stage__DOT__type_I_DE = 2U;
    } else if (((0x15U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                | (0x16U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)))) {
        vlSelfRef.__PVT__my_DE_stage__DOT__type_I_DE = 2U;
    } else if ((0x18U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) {
        vlSelfRef.__PVT__my_DE_stage__DOT__type_I_DE = 3U;
    } else if ((0x19U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) {
        vlSelfRef.__PVT__my_DE_stage__DOT__type_I_DE = 4U;
    } else if (((((((0x1cU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                    | (0x1dU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                   | (0x1eU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                  | (0x1fU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                 | (0x20U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                | (0x21U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)))) {
        vlSelfRef.__PVT__my_DE_stage__DOT__type_I_DE = 3U;
    }
    __Vtableidx1 = vlSelfRef.__PVT__my_DE_stage__DOT__type_I_DE;
    vlSelfRef.__PVT__my_DE_stage__DOT__use_rs1_DE = 
        Vpipeline__ConstPool__TABLE_ha880f92c_0[__Vtableidx1];
    vlSelfRef.__PVT__my_DE_stage__DOT__use_rs2_DE = 
        Vpipeline__ConstPool__TABLE_h6e570ecf_0[__Vtableidx1];
    vlSelfRef.__PVT__from_DE_to_FE = ((((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__use_rs1_DE) 
                                        & (vlSelfRef.__PVT__my_DE_stage__DOT__in_use_regs 
                                           >> (0x1fU 
                                               & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                  >> 0xfU)))) 
                                       | ((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__use_rs2_DE) 
                                          & (vlSelfRef.__PVT__my_DE_stage__DOT__in_use_regs 
                                             >> (0x1fU 
                                                 & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                    >> 0x14U))))) 
                                      | (IData)(vlSelfRef.__PVT__from_AGEX_to_DE));
}

VL_INLINE_OPT void Vpipeline_pipeline___nba_sequent__TOP__pipeline__2(Vpipeline_pipeline* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___nba_sequent__TOP__pipeline__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdlySet__my_DE_stage__DOT__regs__v0;
    __VdlySet__my_DE_stage__DOT__regs__v0 = 0;
    IData/*31:0*/ __VdlyVal__my_DE_stage__DOT__regs__v32;
    __VdlyVal__my_DE_stage__DOT__regs__v32 = 0;
    CData/*4:0*/ __VdlyDim0__my_DE_stage__DOT__regs__v32;
    __VdlyDim0__my_DE_stage__DOT__regs__v32 = 0;
    CData/*0:0*/ __VdlySet__my_DE_stage__DOT__regs__v32;
    __VdlySet__my_DE_stage__DOT__regs__v32 = 0;
    // Body
    __VdlySet__my_DE_stage__DOT__regs__v0 = 0U;
    __VdlySet__my_DE_stage__DOT__regs__v32 = 0U;
    if (vlSymsp->TOP.reset) {
        __VdlySet__my_DE_stage__DOT__regs__v0 = 1U;
    } else if ((1U & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                              >> 0x25U)))) {
        __VdlyVal__my_DE_stage__DOT__regs__v32 = (IData)(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE);
        __VdlyDim0__my_DE_stage__DOT__regs__v32 = (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                                              >> 0x20U)));
        __VdlySet__my_DE_stage__DOT__regs__v32 = 1U;
    }
    if (__VdlySet__my_DE_stage__DOT__regs__v0) {
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[1U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[2U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[3U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[4U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[5U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[6U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[7U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[8U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[9U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0xaU] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0xbU] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0xcU] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0xdU] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0xeU] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0xfU] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x10U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x11U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x12U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x13U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x14U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x15U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x16U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x17U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x18U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x19U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x1aU] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x1bU] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x1cU] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x1dU] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x1eU] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x1fU] = 0U;
    }
    if (__VdlySet__my_DE_stage__DOT__regs__v32) {
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[__VdlyDim0__my_DE_stage__DOT__regs__v32] 
            = __VdlyVal__my_DE_stage__DOT__regs__v32;
    }
}
