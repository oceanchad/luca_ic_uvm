// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_sfv2.h for the primary calling header

#ifndef VERILATED_VTB_SFV2___024ROOT_H_
#define VERILATED_VTB_SFV2___024ROOT_H_  // guard

#include "verilated.h"


class Vtb_sfv2__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_sfv2___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<SData/*11:0*/, 4> tb_sfv__DOT__my_array;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_sfv2__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_sfv2___024root(Vtb_sfv2__Syms* symsp, const char* v__name);
    ~Vtb_sfv2___024root();
    VL_UNCOPYABLE(Vtb_sfv2___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
