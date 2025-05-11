// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_sfv6.h for the primary calling header

#ifndef VERILATED_VTB_SFV6___024UNIT_H_
#define VERILATED_VTB_SFV6___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_random.h"


class Vtb_sfv6__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_sfv6___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtb_sfv6__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_sfv6___024unit(Vtb_sfv6__Syms* symsp, const char* v__name);
    ~Vtb_sfv6___024unit();
    VL_UNCOPYABLE(Vtb_sfv6___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
