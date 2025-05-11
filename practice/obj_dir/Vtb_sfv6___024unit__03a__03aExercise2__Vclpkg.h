// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_sfv6.h for the primary calling header

#ifndef VERILATED_VTB_SFV6___024UNIT__03A__03AEXERCISE2__VCLPKG_H_
#define VERILATED_VTB_SFV6___024UNIT__03A__03AEXERCISE2__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_random.h"


class Vtb_sfv6__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_sfv6___024unit__03a__03aExercise2__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtb_sfv6__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_sfv6___024unit__03a__03aExercise2__Vclpkg(Vtb_sfv6__Syms* symsp, const char* v__name);
    ~Vtb_sfv6___024unit__03a__03aExercise2__Vclpkg();
    VL_UNCOPYABLE(Vtb_sfv6___024unit__03a__03aExercise2__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtb_sfv6__Syms;

class Vtb_sfv6___024unit__03a__03aExercise2 : public VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*7:0*/ __PVT__data;
    CData/*3:0*/ __PVT__address;
    VlRandomizer __PVT__constraint;
    void __VnoInFunc_display(Vtb_sfv6__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vtb_sfv6__Syms* __restrict vlSymsp);
  public:
    Vtb_sfv6___024unit__03a__03aExercise2(Vtb_sfv6__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtb_sfv6___024unit__03a__03aExercise2();
};

std::string VL_TO_STRING(const VlClassRef<Vtb_sfv6___024unit__03a__03aExercise2>& obj);

#endif  // guard
