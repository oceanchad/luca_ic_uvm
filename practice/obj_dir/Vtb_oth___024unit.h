// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_oth.h for the primary calling header

#ifndef VERILATED_VTB_OTH___024UNIT_H_
#define VERILATED_VTB_OTH___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_oth__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_oth___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;

    // INTERNAL VARIABLES
    Vtb_oth__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_oth___024unit(Vtb_oth__Syms* symsp, const char* v__name);
    ~Vtb_oth___024unit();
    VL_UNCOPYABLE(Vtb_oth___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
