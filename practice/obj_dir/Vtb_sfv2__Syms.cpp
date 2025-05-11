// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_sfv2__pch.h"
#include "Vtb_sfv2.h"
#include "Vtb_sfv2___024root.h"

// FUNCTIONS
Vtb_sfv2__Syms::~Vtb_sfv2__Syms()
{
}

Vtb_sfv2__Syms::Vtb_sfv2__Syms(VerilatedContext* contextp, const char* namep, Vtb_sfv2* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(11);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
