// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_sfv5__pch.h"
#include "Vtb_sfv5.h"
#include "Vtb_sfv5___024root.h"
#include "Vtb_sfv5___024unit.h"
#include "Vtb_sfv5___024unit__03a__03aPrintUtilities__Vclpkg.h"
#include "Vtb_sfv5___024unit__03a__03aMemTrans__Vclpkg.h"

// FUNCTIONS
Vtb_sfv5__Syms::~Vtb_sfv5__Syms()
{
}

Vtb_sfv5__Syms::Vtb_sfv5__Syms(VerilatedContext* contextp, const char* namep, Vtb_sfv5* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP____024unit__03a__03aMemTrans__Vclpkg{this, Verilated::catName(namep, "$unit::MemTrans__Vclpkg")}
    , TOP____024unit__03a__03aPrintUtilities__Vclpkg{this, Verilated::catName(namep, "$unit::PrintUtilities__Vclpkg")}
    , TOP____024unit{this, Verilated::catName(namep, "$unit")}
{
        // Check resources
        Verilated::stackCheck(89);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__024unit__03a__03aMemTrans__Vclpkg = &TOP____024unit__03a__03aMemTrans__Vclpkg;
    TOP.__024unit__03a__03aPrintUtilities__Vclpkg = &TOP____024unit__03a__03aPrintUtilities__Vclpkg;
    TOP.__PVT____024unit = &TOP____024unit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit__03a__03aMemTrans__Vclpkg.__Vconfigure(true);
    TOP____024unit__03a__03aPrintUtilities__Vclpkg.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
}
