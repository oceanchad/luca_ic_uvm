// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sfv6.h for the primary calling header

#include "Vtb_sfv6__pch.h"
#include "Vtb_sfv6__Syms.h"
#include "Vtb_sfv6___024unit.h"

void Vtb_sfv6___024unit___ctor_var_reset(Vtb_sfv6___024unit* vlSelf);

Vtb_sfv6___024unit::Vtb_sfv6___024unit(Vtb_sfv6__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_sfv6___024unit___ctor_var_reset(this);
}

void Vtb_sfv6___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_sfv6___024unit::~Vtb_sfv6___024unit() {
}
