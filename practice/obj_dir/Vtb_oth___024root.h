// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_oth.h for the primary calling header

#ifndef VERILATED_VTB_OTH___024ROOT_H_
#define VERILATED_VTB_OTH___024ROOT_H_  // guard

#include "verilated.h"


class Vtb_oth__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_oth___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_oth__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_oth___024root(Vtb_oth__Syms* symsp, const char* v__name);
    ~Vtb_oth___024root();
    VL_UNCOPYABLE(Vtb_oth___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
