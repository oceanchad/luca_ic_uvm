// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sfv5.h for the primary calling header

#include "Vtb_sfv5__pch.h"
#include "Vtb_sfv5__Syms.h"
#include "Vtb_sfv5___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sfv5___024root___dump_triggers__act(Vtb_sfv5___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_sfv5___024root___eval_triggers__act(Vtb_sfv5___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sfv5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sfv5___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_sfv5___024root___dump_triggers__act(vlSelf);
    }
#endif
}
