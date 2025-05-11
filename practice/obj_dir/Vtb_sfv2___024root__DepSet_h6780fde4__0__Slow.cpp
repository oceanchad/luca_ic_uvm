// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sfv2.h for the primary calling header

#include "Vtb_sfv2__pch.h"
#include "Vtb_sfv2___024root.h"

VL_ATTR_COLD void Vtb_sfv2___024root___eval_static(Vtb_sfv2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sfv2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sfv2___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_sfv2___024root___eval_initial__TOP(Vtb_sfv2___024root* vlSelf);

VL_ATTR_COLD void Vtb_sfv2___024root___eval_initial(Vtb_sfv2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sfv2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sfv2___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_sfv2___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vtb_sfv2___024root___eval_initial__TOP(Vtb_sfv2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sfv2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sfv2___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_sfv__DOT__my_array[0U] = 0x12U;
    vlSelfRef.tb_sfv__DOT__my_array[1U] = 0x345U;
    vlSelfRef.tb_sfv__DOT__my_array[2U] = 0x678U;
    vlSelfRef.tb_sfv__DOT__my_array[3U] = 0x8abU;
    VL_WRITEF_NX("%x\n%x\n%x\n%x\n%x\n%x\n%x\n%x\n",0,
                 12,vlSelfRef.tb_sfv__DOT__my_array
                 [0U],12,vlSelfRef.tb_sfv__DOT__my_array
                 [1U],12,vlSelfRef.tb_sfv__DOT__my_array
                 [2U],12,vlSelfRef.tb_sfv__DOT__my_array
                 [3U],12,vlSelfRef.tb_sfv__DOT__my_array
                 [0U],12,vlSelfRef.tb_sfv__DOT__my_array
                 [1U],12,vlSelfRef.tb_sfv__DOT__my_array
                 [2U],12,vlSelfRef.tb_sfv__DOT__my_array
                 [3U]);
}

VL_ATTR_COLD void Vtb_sfv2___024root___eval_final(Vtb_sfv2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sfv2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sfv2___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_sfv2___024root___eval_settle(Vtb_sfv2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sfv2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sfv2___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sfv2___024root___dump_triggers__act(Vtb_sfv2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sfv2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sfv2___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sfv2___024root___dump_triggers__nba(Vtb_sfv2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sfv2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sfv2___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_sfv2___024root___ctor_var_reset(Vtb_sfv2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sfv2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sfv2___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sfv__DOT__my_array[__Vi0] = 0;
    }
}
