// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sfv5.h for the primary calling header

#include "Vtb_sfv5__pch.h"
#include "Vtb_sfv5__Syms.h"
#include "Vtb_sfv5___024unit.h"

void Vtb_sfv5___024unit___ctor_var_reset(Vtb_sfv5___024unit* vlSelf);

Vtb_sfv5___024unit::Vtb_sfv5___024unit(Vtb_sfv5__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_sfv5___024unit___ctor_var_reset(this);
}

void Vtb_sfv5___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_sfv5___024unit::~Vtb_sfv5___024unit() {
}
