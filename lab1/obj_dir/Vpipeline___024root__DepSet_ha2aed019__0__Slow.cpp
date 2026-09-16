// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline.h for the primary calling header

#include "Vpipeline__pch.h"
#include "Vpipeline__Syms.h"
#include "Vpipeline___024root.h"

VL_ATTR_COLD void Vpipeline_pipeline___eval_initial__TOP__pipeline(Vpipeline_pipeline* vlSelf);
VL_ATTR_COLD void Vpipeline___024root____Vm_traceActivitySetAll(Vpipeline___024root* vlSelf);

VL_ATTR_COLD void Vpipeline___024root___eval_initial(Vpipeline___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vpipeline_pipeline___eval_initial__TOP__pipeline((&vlSymsp->TOP__pipeline));
    Vpipeline___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpipeline___024root___dump_triggers__stl(Vpipeline___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vpipeline___024root___eval_triggers__stl(Vpipeline___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___eval_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vpipeline___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vpipeline_pipeline___stl_sequent__TOP__pipeline__0(Vpipeline_pipeline* vlSelf);
void Vpipeline_WB_STAGE___nba_sequent__TOP__pipeline__my_WB_stage__1(Vpipeline_WB_STAGE* vlSelf);

VL_ATTR_COLD void Vpipeline___024root___eval_stl(Vpipeline___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vpipeline_pipeline___stl_sequent__TOP__pipeline__0((&vlSymsp->TOP__pipeline));
        Vpipeline___024root____Vm_traceActivitySetAll(vlSelf);
        Vpipeline_WB_STAGE___nba_sequent__TOP__pipeline__my_WB_stage__1((&vlSymsp->TOP__pipeline__my_WB_stage));
    }
}
