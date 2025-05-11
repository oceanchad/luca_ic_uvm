// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_oth.h for the primary calling header

#include "Vtb_oth__pch.h"
#include "Vtb_oth__Syms.h"
#include "Vtb_oth___024root.h"

VL_ATTR_COLD void Vtb_oth_tb_oth___eval_initial__TOP__tb_oth(Vtb_oth_tb_oth* vlSelf);

VL_ATTR_COLD void Vtb_oth___024root___eval_initial(Vtb_oth___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_oth__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_oth___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_oth_tb_oth___eval_initial__TOP__tb_oth((&vlSymsp->TOP__tb_oth));
}
