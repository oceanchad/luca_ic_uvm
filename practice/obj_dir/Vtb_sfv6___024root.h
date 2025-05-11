// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_sfv6.h for the primary calling header

#ifndef VERILATED_VTB_SFV6___024ROOT_H_
#define VERILATED_VTB_SFV6___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_random.h"
class Vtb_sfv6___024unit;
class Vtb_sfv6___024unit__03a__03aExercise1;
class Vtb_sfv6___024unit__03a__03aExercise1__Vclpkg;
class Vtb_sfv6___024unit__03a__03aExercise2__Vclpkg;


class Vtb_sfv6__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_sfv6___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtb_sfv6___024unit* __PVT____024unit;
    Vtb_sfv6___024unit__03a__03aExercise1__Vclpkg* __024unit__03a__03aExercise1__Vclpkg;
    Vtb_sfv6___024unit__03a__03aExercise2__Vclpkg* __024unit__03a__03aExercise2__Vclpkg;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_sfv6__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_sfv6___024root(Vtb_sfv6__Syms* symsp, const char* v__name);
    ~Vtb_sfv6___024root();
    VL_UNCOPYABLE(Vtb_sfv6___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
