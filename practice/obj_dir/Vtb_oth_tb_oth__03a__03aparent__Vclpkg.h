// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_oth.h for the primary calling header

#ifndef VERILATED_VTB_OTH_TB_OTH__03A__03APARENT__VCLPKG_H_
#define VERILATED_VTB_OTH_TB_OTH__03A__03APARENT__VCLPKG_H_  // guard

#include "verilated.h"


class Vtb_oth__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_oth_tb_oth__03a__03aparent__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtb_oth__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_oth_tb_oth__03a__03aparent__Vclpkg(Vtb_oth__Syms* symsp, const char* v__name);
    ~Vtb_oth_tb_oth__03a__03aparent__Vclpkg();
    VL_UNCOPYABLE(Vtb_oth_tb_oth__03a__03aparent__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtb_oth__Syms;

class Vtb_oth_tb_oth__03a__03aparent : public VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__a;
    IData/*31:0*/ __PVT__b;
    IData/*31:0*/ __PVT__c;
    void __VnoInFunc_display(Vtb_oth__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vtb_oth__Syms* __restrict vlSymsp);
  public:
    Vtb_oth_tb_oth__03a__03aparent(Vtb_oth__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_oth_tb_oth__03a__03aparent();
};

std::string VL_TO_STRING(const VlClassRef<Vtb_oth_tb_oth__03a__03aparent>& obj);

#endif  // guard
