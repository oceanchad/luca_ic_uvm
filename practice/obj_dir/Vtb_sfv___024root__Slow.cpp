// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sfv.h for the primary calling header

#include "Vtb_sfv__pch.h"
#include "Vtb_sfv__Syms.h"
#include "Vtb_sfv___024root.h"

void Vtb_sfv___024root___ctor_var_reset(Vtb_sfv___024root* vlSelf);

Vtb_sfv___024root::Vtb_sfv___024root(Vtb_sfv__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_sfv___024root___ctor_var_reset(this);
}

void Vtb_sfv___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_sfv___024root::~Vtb_sfv___024root() {
}
