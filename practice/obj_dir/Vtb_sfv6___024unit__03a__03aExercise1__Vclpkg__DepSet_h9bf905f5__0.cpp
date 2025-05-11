// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sfv6.h for the primary calling header

#include "Vtb_sfv6__pch.h"
#include "Vtb_sfv6__Syms.h"
#include "Vtb_sfv6___024unit__03a__03aExercise1__Vclpkg.h"

Vtb_sfv6___024unit__03a__03aExercise1::Vtb_sfv6___024unit__03a__03aExercise1(Vtb_sfv6__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_sfv6___024unit__03a__03aExercise1::new\n"); );
    // Init
    _ctor_var_reset(vlSymsp);
    // Body
    this->__PVT__constraint.write_var(this->__PVT__address, 4ULL, 
                                      "address", 0ULL);
}

void Vtb_sfv6___024unit__03a__03aExercise1::_ctor_var_reset(Vtb_sfv6__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_sfv6___024unit__03a__03aExercise1::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__data = 0;
    __PVT__address = 0;
    }
