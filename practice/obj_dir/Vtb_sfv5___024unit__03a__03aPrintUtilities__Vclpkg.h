// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_sfv5.h for the primary calling header

#ifndef VERILATED_VTB_SFV5___024UNIT__03A__03APRINTUTILITIES__VCLPKG_H_
#define VERILATED_VTB_SFV5___024UNIT__03A__03APRINTUTILITIES__VCLPKG_H_  // guard

#include "verilated.h"


class Vtb_sfv5__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_sfv5___024unit__03a__03aPrintUtilities__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtb_sfv5__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_sfv5___024unit__03a__03aPrintUtilities__Vclpkg(Vtb_sfv5__Syms* symsp, const char* v__name);
    ~Vtb_sfv5___024unit__03a__03aPrintUtilities__Vclpkg();
    VL_UNCOPYABLE(Vtb_sfv5___024unit__03a__03aPrintUtilities__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtb_sfv5__Syms;

class Vtb_sfv5___024unit__03a__03aPrintUtilities : public VlClass {
  public:
    void __VnoInFunc_print_4(Vtb_sfv5__Syms* __restrict vlSymsp, std::string name, CData/*3:0*/ val_4bits);
    void __VnoInFunc_print_8(Vtb_sfv5__Syms* __restrict vlSymsp, std::string name, CData/*7:0*/ val_8bits);
  private:
    void _ctor_var_reset(Vtb_sfv5__Syms* __restrict vlSymsp);
  public:
    Vtb_sfv5___024unit__03a__03aPrintUtilities(Vtb_sfv5__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtb_sfv5___024unit__03a__03aPrintUtilities();
};

std::string VL_TO_STRING(const VlClassRef<Vtb_sfv5___024unit__03a__03aPrintUtilities>& obj);

#endif  // guard
