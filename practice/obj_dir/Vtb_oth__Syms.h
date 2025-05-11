// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_OTH__SYMS_H_
#define VERILATED_VTB_OTH__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_oth.h"

// INCLUDE MODULE CLASSES
#include "Vtb_oth___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_oth__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_oth* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_oth___024root              TOP;

    // CONSTRUCTORS
    Vtb_oth__Syms(VerilatedContext* contextp, const char* namep, Vtb_oth* modelp);
    ~Vtb_oth__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
