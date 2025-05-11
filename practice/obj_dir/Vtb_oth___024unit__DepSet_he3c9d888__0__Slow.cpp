// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_oth.h for the primary calling header

#include "Vtb_oth__pch.h"
#include "Vtb_oth___024unit.h"

VL_ATTR_COLD void Vtb_oth___024unit___ctor_var_reset(Vtb_oth___024unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_oth__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_oth___024unit___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__VmonitorOff = VL_RAND_RESET_I(1);
}
