// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_sfv6__pch.h"
#include "Vtb_sfv6.h"
#include "Vtb_sfv6___024root.h"
#include "Vtb_sfv6___024unit.h"
#include "Vtb_sfv6___024unit__03a__03aExercise1__Vclpkg.h"
#include "Vtb_sfv6___024unit__03a__03aExercise2__Vclpkg.h"

// FUNCTIONS
Vtb_sfv6__Syms::~Vtb_sfv6__Syms()
{
}

Vtb_sfv6__Syms::Vtb_sfv6__Syms(VerilatedContext* contextp, const char* namep, Vtb_sfv6* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP____024unit__03a__03aExercise1__Vclpkg{this, Verilated::catName(namep, "$unit::Exercise1__Vclpkg")}
    , TOP____024unit__03a__03aExercise2__Vclpkg{this, Verilated::catName(namep, "$unit::Exercise2__Vclpkg")}
    , TOP____024unit{this, Verilated::catName(namep, "$unit")}
{
        // Check resources
        Verilated::stackCheck(59);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__024unit__03a__03aExercise1__Vclpkg = &TOP____024unit__03a__03aExercise1__Vclpkg;
    TOP.__024unit__03a__03aExercise2__Vclpkg = &TOP____024unit__03a__03aExercise2__Vclpkg;
    TOP.__PVT____024unit = &TOP____024unit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit__03a__03aExercise1__Vclpkg.__Vconfigure(true);
    TOP____024unit__03a__03aExercise2__Vclpkg.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
}
