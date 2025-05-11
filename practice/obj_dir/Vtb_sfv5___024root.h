// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_sfv5.h for the primary calling header

#ifndef VERILATED_VTB_SFV5___024ROOT_H_
#define VERILATED_VTB_SFV5___024ROOT_H_  // guard

#include "verilated.h"
class Vtb_sfv5___024unit;
class Vtb_sfv5___024unit__03a__03aMemTrans;
class Vtb_sfv5___024unit__03a__03aMemTrans__Vclpkg;
class Vtb_sfv5___024unit__03a__03aPrintUtilities__Vclpkg;


class Vtb_sfv5__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_sfv5___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtb_sfv5___024unit* __PVT____024unit;
    Vtb_sfv5___024unit__03a__03aPrintUtilities__Vclpkg* __024unit__03a__03aPrintUtilities__Vclpkg;
    Vtb_sfv5___024unit__03a__03aMemTrans__Vclpkg* __024unit__03a__03aMemTrans__Vclpkg;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_sfv5__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_sfv5___024root(Vtb_sfv5__Syms* symsp, const char* v__name);
    ~Vtb_sfv5___024root();
    VL_UNCOPYABLE(Vtb_sfv5___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
