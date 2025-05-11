// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_sfv5.h for the primary calling header

#ifndef VERILATED_VTB_SFV5___024UNIT_H_
#define VERILATED_VTB_SFV5___024UNIT_H_  // guard

#include "verilated.h"


class Vtb_sfv5__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_sfv5___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtb_sfv5__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_sfv5___024unit(Vtb_sfv5__Syms* symsp, const char* v__name);
    ~Vtb_sfv5___024unit();
    VL_UNCOPYABLE(Vtb_sfv5___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
