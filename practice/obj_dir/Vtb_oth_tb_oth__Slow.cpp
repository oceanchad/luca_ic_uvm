// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_oth.h for the primary calling header

#include "Vtb_oth__pch.h"
#include "Vtb_oth__Syms.h"
#include "Vtb_oth_tb_oth.h"

void Vtb_oth_tb_oth___ctor_var_reset(Vtb_oth_tb_oth* vlSelf);

Vtb_oth_tb_oth::Vtb_oth_tb_oth(Vtb_oth__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_oth_tb_oth___ctor_var_reset(this);
}

void Vtb_oth_tb_oth::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_oth_tb_oth::~Vtb_oth_tb_oth() {
}
