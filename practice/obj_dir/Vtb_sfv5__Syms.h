// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_SFV5__SYMS_H_
#define VERILATED_VTB_SFV5__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_sfv5.h"

// INCLUDE MODULE CLASSES
#include "Vtb_sfv5___024root.h"
#include "Vtb_sfv5___024unit.h"
#include "Vtb_sfv5___024unit__03a__03aPrintUtilities__Vclpkg.h"
#include "Vtb_sfv5___024unit__03a__03aMemTrans__Vclpkg.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_sfv5__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_sfv5* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_sfv5___024root             TOP;
    Vtb_sfv5___024unit__03a__03aMemTrans__Vclpkg TOP____024unit__03a__03aMemTrans__Vclpkg;
    Vtb_sfv5___024unit__03a__03aPrintUtilities__Vclpkg TOP____024unit__03a__03aPrintUtilities__Vclpkg;
    Vtb_sfv5___024unit             TOP____024unit;

    // CONSTRUCTORS
    Vtb_sfv5__Syms(VerilatedContext* contextp, const char* namep, Vtb_sfv5* modelp);
    ~Vtb_sfv5__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
