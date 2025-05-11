// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_SFV__SYMS_H_
#define VERILATED_VTB_SFV__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_sfv.h"

// INCLUDE MODULE CLASSES
#include "Vtb_sfv___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_sfv__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_sfv* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_sfv___024root              TOP;

    // CONSTRUCTORS
    Vtb_sfv__Syms(VerilatedContext* contextp, const char* namep, Vtb_sfv* modelp);
    ~Vtb_sfv__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
