// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_sfv6.h for the primary calling header

#ifndef VERILATED_VTB_SFV6___024UNIT__03A__03AEXERCISE1__VCLPKG_H_
#define VERILATED_VTB_SFV6___024UNIT__03A__03AEXERCISE1__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_random.h"


class Vtb_sfv6__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_sfv6___024unit__03a__03aExercise1__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtb_sfv6__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_sfv6___024unit__03a__03aExercise1__Vclpkg(Vtb_sfv6__Syms* symsp, const char* v__name);
    ~Vtb_sfv6___024unit__03a__03aExercise1__Vclpkg();
    VL_UNCOPYABLE(Vtb_sfv6___024unit__03a__03aExercise1__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtb_sfv6__Syms;

class Vtb_sfv6___024unit__03a__03aExercise1 : public VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*7:0*/ __PVT__data;
    CData/*3:0*/ __PVT__address;
    VlRandomizer __PVT__constraint;

    // INTERNAL VARIABLES
    VlRNG __Vm_rng;
    void __VnoInFunc___Vbasic_randomize(Vtb_sfv6__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_sfv6__Syms* __restrict vlSymsp);
    void __VnoInFunc_c_setup_constraint(Vtb_sfv6__Syms* __restrict vlSymsp);
    void __VnoInFunc_display(Vtb_sfv6__Syms* __restrict vlSymsp);
    void __VnoInFunc_randomize(Vtb_sfv6__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb_sfv6__Syms* __restrict vlSymsp);
  public:
    Vtb_sfv6___024unit__03a__03aExercise1(Vtb_sfv6__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtb_sfv6___024unit__03a__03aExercise1();
};

std::string VL_TO_STRING(const VlClassRef<Vtb_sfv6___024unit__03a__03aExercise1>& obj);

#endif  // guard
