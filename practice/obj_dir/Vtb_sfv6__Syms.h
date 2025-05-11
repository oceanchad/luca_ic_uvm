// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_SFV6__SYMS_H_
#define VERILATED_VTB_SFV6__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_sfv6.h"

// INCLUDE MODULE CLASSES
#include "Vtb_sfv6___024root.h"
#include "Vtb_sfv6___024unit.h"
#include "Vtb_sfv6___024unit__03a__03aExercise1__Vclpkg.h"
#include "Vtb_sfv6___024unit__03a__03aExercise2__Vclpkg.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_sfv6__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_sfv6* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_sfv6___024root             TOP;
    Vtb_sfv6___024unit__03a__03aExercise1__Vclpkg TOP____024unit__03a__03aExercise1__Vclpkg;
    Vtb_sfv6___024unit__03a__03aExercise2__Vclpkg TOP____024unit__03a__03aExercise2__Vclpkg;
    Vtb_sfv6___024unit             TOP____024unit;

    // CONSTRUCTORS
    Vtb_sfv6__Syms(VerilatedContext* contextp, const char* namep, Vtb_sfv6* modelp);
    ~Vtb_sfv6__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
