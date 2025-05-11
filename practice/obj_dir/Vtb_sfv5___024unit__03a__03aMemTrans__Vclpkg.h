// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_sfv5.h for the primary calling header

#ifndef VERILATED_VTB_SFV5___024UNIT__03A__03AMEMTRANS__VCLPKG_H_
#define VERILATED_VTB_SFV5___024UNIT__03A__03AMEMTRANS__VCLPKG_H_  // guard

#include "verilated.h"
class Vtb_sfv5___024unit__03a__03aPrintUtilities;


class Vtb_sfv5__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_sfv5___024unit__03a__03aMemTrans__Vclpkg final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ last_address;

    // INTERNAL VARIABLES
    Vtb_sfv5__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_sfv5___024unit__03a__03aMemTrans__Vclpkg(Vtb_sfv5__Syms* symsp, const char* v__name);
    ~Vtb_sfv5___024unit__03a__03aMemTrans__Vclpkg();
    VL_UNCOPYABLE(Vtb_sfv5___024unit__03a__03aMemTrans__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_print_last_address(Vtb_sfv5__Syms* __restrict vlSymsp);
};


class Vtb_sfv5__Syms;

class Vtb_sfv5___024unit__03a__03aMemTrans : public VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*7:0*/ __PVT__data_in;
    CData/*3:0*/ __PVT__address;
    VlClassRef<Vtb_sfv5___024unit__03a__03aPrintUtilities> __PVT__prints;
    void __VnoInFunc_print(Vtb_sfv5__Syms* __restrict vlSymsp);
    void __VnoInFunc_print_all(Vtb_sfv5__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vtb_sfv5__Syms* __restrict vlSymsp);
  public:
    Vtb_sfv5___024unit__03a__03aMemTrans(Vtb_sfv5__Syms* __restrict vlSymsp, CData/*7:0*/ data_init, CData/*3:0*/ address_init);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtb_sfv5___024unit__03a__03aMemTrans();
};

std::string VL_TO_STRING(const VlClassRef<Vtb_sfv5___024unit__03a__03aMemTrans>& obj);

#endif  // guard
