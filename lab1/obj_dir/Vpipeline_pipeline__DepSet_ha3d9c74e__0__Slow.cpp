// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline.h for the primary calling header

#include "Vpipeline__pch.h"
#include "Vpipeline_pipeline.h"

VL_ATTR_COLD void Vpipeline_pipeline___eval_initial__TOP__pipeline(Vpipeline_pipeline* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___eval_initial__TOP__pipeline\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<6>/*191:0*/ __Vtemp_1;
    VlWide<6>/*191:0*/ __Vtemp_2;
    // Body
    __Vtemp_1[0U] = 0x2e6d656dU;
    __Vtemp_1[1U] = 0x65737431U;
    __Vtemp_1[2U] = 0x5f312f74U;
    __Vtemp_1[3U] = 0x6c617373U;
    __Vtemp_1[4U] = 0x2f696e63U;
    __Vtemp_1[5U] = 0x74657374U;
    VL_READMEM_N(true, 32, 16384, 0, VL_CVT_PACK_STR_NW(6, __Vtemp_1)
                 ,  &(vlSelfRef.__PVT__my_FE_stage__DOT__imem)
                 , 0, ~0ULL);
    vlSelfRef.my_DE_stage__DOT____Vxrand_h8df70ee3__0 
        = (7U & VL_RAND_RESET_ASSIGN_I(3));
    vlSelfRef.my_DE_stage__DOT____Vxrand_h8df6f9e8__0 
        = (0xfU & VL_RAND_RESET_ASSIGN_I(4));
    __Vtemp_2[0U] = 0x2e6d656dU;
    __Vtemp_2[1U] = 0x65737431U;
    __Vtemp_2[2U] = 0x5f312f74U;
    __Vtemp_2[3U] = 0x6c617373U;
    __Vtemp_2[4U] = 0x2f696e63U;
    __Vtemp_2[5U] = 0x74657374U;
    VL_READMEM_N(true, 32, 16384, 0, VL_CVT_PACK_STR_NW(6, __Vtemp_2)
                 ,  &(vlSelfRef.__PVT__my_MEM_stage__DOT__dmem)
                 , 0, ~0ULL);
}

extern const VlUnpacked<CData/*0:0*/, 16> Vpipeline__ConstPool__TABLE_ha880f92c_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vpipeline__ConstPool__TABLE_h6e570ecf_0;

VL_ATTR_COLD void Vpipeline_pipeline___stl_sequent__TOP__pipeline__0(Vpipeline_pipeline* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___stl_sequent__TOP__pipeline__0\n"); );
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
    IData/*31:0*/ my_AGEX_stage__DOT____VdfgExtracted_h2b23c1cb__0;
    my_AGEX_stage__DOT____VdfgExtracted_h2b23c1cb__0 = 0;
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.__PVT__my_FE_stage__DOT__pcplus_FE = 
        ((IData)(4U) + vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch);
    my_AGEX_stage__DOT____VdfgExtracted_h2b23c1cb__0 
        = (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
             << 0x19U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                          >> 7U)) + ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                      << 0x19U) | (
                                                   vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   >> 7U)));
    vlSelfRef.my_AGEX_stage__DOT____VdfgExtracted_hbd4b694e__0 
        = VL_LTS_III(32, ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                           << 0x19U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                        >> 7U)), ((
                                                   vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                   << 0x19U) 
                                                  | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                     >> 7U)));
    vlSelfRef.my_AGEX_stage__DOT____VdfgExtracted_hbdd0c81c__0 
        = (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
             << 0x19U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                          >> 7U)) < ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                      << 0x19U) | (
                                                   vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   >> 7U)));
    my_DE_stage__DOT____VdfgRegularize_ha41f8c36_0_2 
        = (IData)((0x33U == (0x707fU & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])));
    my_DE_stage__DOT____VdfgRegularize_ha41f8c36_0_11 
        = (IData)((0x5033U == (0x707fU & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])));
    my_DE_stage__DOT____VdfgRegularize_ha41f8c36_0_18 
        = (IData)((0x1000U == (0xfe007000U & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])));
    my_DE_stage__DOT____VdfgRegularize_ha41f8c36_0_14 
        = (IData)((0x5013U == (0x707fU & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])));
    vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX 
        = (((((((((1U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                   >> 7U))) | (0xcU 
                                               == (0x3fU 
                                                   & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                      >> 7U)))) 
                 | (2U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                    >> 7U)))) | (0x15U 
                                                 == 
                                                 (0x3fU 
                                                  & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                     >> 7U)))) 
               | (0x16U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                     >> 7U)))) | (0x19U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                      >> 7U)))) 
             | (0x1bU == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                   >> 7U)))) | (3U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                    >> 7U))))
            ? ((1U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                >> 7U))) ? my_AGEX_stage__DOT____VdfgExtracted_h2b23c1cb__0
                : ((0xcU == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                      >> 7U))) ? ((
                                                   (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                    << 0x19U) 
                                                   | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                      >> 7U)) 
                                                  + 
                                                  ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                    << 0x19U) 
                                                   | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                      >> 7U)))
                    : ((2U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                        >> 7U))) ? 
                       (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                          << 0x19U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                       >> 7U)) - ((
                                                   vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                   << 0x19U) 
                                                  | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                     >> 7U)))
                        : ((0x15U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 7U)))
                            ? ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                << 0x19U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                             >> 7U))
                            : ((0x16U == (0x3fU & (
                                                   vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 7U)))
                                ? my_AGEX_stage__DOT____VdfgExtracted_h2b23c1cb__0
                                : ((0x19U == (0x3fU 
                                              & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 7U)))
                                    ? my_AGEX_stage__DOT____VdfgExtracted_h2b23c1cb__0
                                    : ((0x1bU == (0x3fU 
                                                  & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                     >> 7U)))
                                        ? my_AGEX_stage__DOT____VdfgExtracted_h2b23c1cb__0
                                        : (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             << 0x19U) 
                                            | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                               >> 7U)) 
                                           & ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                               << 0x19U) 
                                              | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                 >> 7U))))))))))
            : (((((((((4U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                       >> 7U))) | (5U 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                       >> 7U)))) 
                     | (0xaU == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 7U)))) 
                    | (9U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                       >> 7U)))) | 
                   (8U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                    >> 7U)))) | (6U 
                                                 == 
                                                 (0x3fU 
                                                  & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                     >> 7U)))) 
                 | (7U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                    >> 7U)))) | (0xbU 
                                                 == 
                                                 (0x3fU 
                                                  & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                     >> 7U))))
                ? ((4U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                    >> 7U))) ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  << 0x19U) 
                                                 | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                    >> 7U)) 
                                                | ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                    << 0x19U) 
                                                   | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                      >> 7U)))
                    : ((5U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                        >> 7U))) ? 
                       (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                          << 0x19U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                       >> 7U)) ^ ((
                                                   vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                   << 0x19U) 
                                                  | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                     >> 7U)))
                        : ((0xaU == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 7U)))
                            ? VL_SHIFTL_III(32,32,32, 
                                            ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              << 0x19U) 
                                             | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                >> 7U)), 
                                            ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                              << 0x19U) 
                                             | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                >> 7U)))
                            : ((9U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 7U)))
                                ? VL_SHIFTR_III(32,32,32, 
                                                ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  << 0x19U) 
                                                 | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                    >> 7U)), 
                                                ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                  << 0x19U) 
                                                 | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                    >> 7U)))
                                : ((8U == (0x3fU & 
                                           (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            >> 7U)))
                                    ? VL_SHIFTRS_III(32,32,32, 
                                                     ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                       << 0x19U) 
                                                      | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                         >> 7U)), 
                                                     ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                       << 0x19U) 
                                                      | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                         >> 7U)))
                                    : ((6U == (0x3fU 
                                               & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 7U)))
                                        ? ((IData)(vlSelfRef.my_AGEX_stage__DOT____VdfgExtracted_hbd4b694e__0)
                                            ? 1U : 0U)
                                        : ((7U == (0x3fU 
                                                   & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                      >> 7U)))
                                            ? ((IData)(vlSelfRef.my_AGEX_stage__DOT____VdfgExtracted_hbdd0c81c__0)
                                                ? 1U
                                                : 0U)
                                            : VL_MULS_III(32, 
                                                          ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                            << 0x19U) 
                                                           | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                              >> 7U)), 
                                                          ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                            << 0x19U) 
                                                           | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                              >> 7U))))))))))
                : (((((((((0xdU == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             >> 7U))) 
                          | (0xeU == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 7U)))) 
                         | (0xfU == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 7U)))) 
                        | (0x14U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 7U)))) 
                       | (0x13U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             >> 7U)))) 
                      | (0x12U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            >> 7U)))) 
                     | (0x10U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 7U)))) 
                    | (0x11U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 7U))))
                    ? ((0xdU == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 7U))) ? 
                       (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                          << 0x19U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                       >> 7U)) & ((
                                                   vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   << 0x19U) 
                                                  | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                     >> 7U)))
                        : ((0xeU == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 7U)))
                            ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                 << 0x19U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                              >> 7U)) 
                               | ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                   << 0x19U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                >> 7U)))
                            : ((0xfU == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 7U)))
                                ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                     << 0x19U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                  >> 7U)) 
                                   ^ ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                       << 0x19U) | 
                                      (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                       >> 7U))) : (
                                                   (0x14U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                        >> 7U)))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,32, 
                                                                 ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                   << 0x19U) 
                                                                  | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                     >> 7U)), 
                                                                 ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                   << 0x19U) 
                                                                  | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                                     >> 7U)))
                                                    : 
                                                   ((0x13U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                         >> 7U)))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                    << 0x19U) 
                                                                   | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                      >> 7U)), 
                                                                  ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                    << 0x19U) 
                                                                   | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                                      >> 7U)))
                                                     : 
                                                    ((0x12U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                          >> 7U)))
                                                      ? 
                                                     VL_SHIFTRS_III(32,32,32, 
                                                                    ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                      << 0x19U) 
                                                                     | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                        >> 7U)), 
                                                                    ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                      << 0x19U) 
                                                                     | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                                        >> 7U)))
                                                      : 
                                                     ((0x10U 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                           >> 7U)))
                                                       ? 
                                                      (VL_LTS_III(32, 
                                                                  ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                    << 0x19U) 
                                                                   | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                      >> 7U)), 
                                                                  ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                    << 0x19U) 
                                                                   | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                                      >> 7U)))
                                                        ? 1U
                                                        : 0U)
                                                       : 
                                                      ((((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                          << 0x19U) 
                                                         | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                            >> 7U)) 
                                                        < 
                                                        ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                          << 0x19U) 
                                                         | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                            >> 7U)))
                                                        ? 1U
                                                        : 0U))))))))
                    : 0U)));
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
                             ? (IData)(vlSelfRef.my_AGEX_stage__DOT____VdfgExtracted_hbd4b694e__0)
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
                                     ? (IData)(vlSelfRef.my_AGEX_stage__DOT____VdfgExtracted_hbdd0c81c__0)
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
    vlSelfRef.__PVT__from_AGEX_to_DE = ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                         >> 6U) & (vlSelfRef.__PVT__my_AGEX_stage__DOT__br_target_AGEX 
                                                   != 
                                                   ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                     << 0x13U) 
                                                    | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                       >> 0xdU))));
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
          | ((2U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
             | ((3U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                | ((4U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                   | ((5U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                      | ((6U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                         | ((7U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                            | ((8U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                               | ((9U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                  | ((0xaU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                     | ((0xbU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                        | ((0xcU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                           | ((0xdU 
                                               == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                              | ((0xeU 
                                                  == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                 | ((0xfU 
                                                     == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                    | ((0x10U 
                                                        == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                       | ((0x11U 
                                                           == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                          | ((0x12U 
                                                              == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                             | ((0x13U 
                                                                 == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                | ((0x14U 
                                                                    == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                   | ((0x15U 
                                                                       == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                      | ((0x16U 
                                                                          == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                         | (0x17U 
                                                                            == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)))))))))))))))))))))))) 
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

VL_ATTR_COLD void Vpipeline_pipeline___ctor_var_reset(Vpipeline_pipeline* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cycle_count = VL_RAND_RESET_I(32);
    vlSelf->__PVT__from_DE_to_FE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__from_AGEX_to_DE = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->__PVT__my_FE_stage__DOT__imem[__Vi0] = VL_RAND_RESET_I(32);
    }
    VL_RAND_RESET_W(129, vlSelf->__PVT__my_FE_stage__DOT__FE_latch);
    vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_FE_stage__DOT__inst_count_FE = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_FE_stage__DOT__inst_count_AGEX = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_FE_stage__DOT__pcplus_FE = VL_RAND_RESET_I(32);
    vlSelf->my_DE_stage__DOT____Vxrand_h8df70ee3__0 = VL_RAND_RESET_I(3);
    vlSelf->my_DE_stage__DOT____Vxrand_h8df6f9e8__0 = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(238, vlSelf->__PVT__my_DE_stage__DOT__DE_latch);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__my_DE_stage__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__my_DE_stage__DOT__op_I_DE = VL_RAND_RESET_I(6);
    vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = VL_RAND_RESET_I(4);
    vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE = VL_RAND_RESET_I(3);
    vlSelf->__PVT__my_DE_stage__DOT__wr_reg_DE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_DE_stage__DOT__use_rs1_DE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_DE_stage__DOT__use_rs2_DE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_DE_stage__DOT__in_use_regs = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(141, vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch);
    vlSelf->__PVT__my_AGEX_stage__DOT__br_target_AGEX = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(103, vlSelf->__PVT__my_AGEX_stage__DOT__de_latch_rest);
    vlSelf->my_AGEX_stage__DOT____VdfgExtracted_hbd4b694e__0 = VL_RAND_RESET_I(1);
    vlSelf->my_AGEX_stage__DOT____VdfgExtracted_hbdd0c81c__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->__PVT__my_MEM_stage__DOT__dmem[__Vi0] = VL_RAND_RESET_I(32);
    }
    VL_RAND_RESET_W(141, vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch);
    vlSelf->__PVT__my_MEM_stage__DOT__memaddr_MEM = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_MEM_stage__DOT__wr_val_MEM = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_MEM_stage__DOT__wr_mem_MEM = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(129, vlSelf->__Vdly__my_FE_stage__DOT__FE_latch);
}
