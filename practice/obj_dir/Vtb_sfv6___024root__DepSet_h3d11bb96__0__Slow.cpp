// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sfv6.h for the primary calling header

#include "Vtb_sfv6__pch.h"
#include "Vtb_sfv6___024root.h"

VL_ATTR_COLD void Vtb_sfv6___024root___eval_static(Vtb_sfv6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sfv6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sfv6___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_sfv6___024root___eval_initial__TOP(Vtb_sfv6___024root* vlSelf);

VL_ATTR_COLD void Vtb_sfv6___024root___eval_initial(Vtb_sfv6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sfv6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sfv6___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_sfv6___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vtb_sfv6___024root___eval_final(Vtb_sfv6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sfv6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sfv6___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_sfv6___024root___eval_settle(Vtb_sfv6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sfv6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sfv6___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sfv6___024root___dump_triggers__act(Vtb_sfv6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sfv6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sfv6___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sfv6___024root___dump_triggers__nba(Vtb_sfv6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sfv6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sfv6___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_sfv6___024root___ctor_var_reset(Vtb_sfv6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sfv6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sfv6___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
