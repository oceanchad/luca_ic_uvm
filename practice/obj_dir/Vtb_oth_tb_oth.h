// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_oth.h for the primary calling header

#ifndef VERILATED_VTB_OTH_TB_OTH_H_
#define VERILATED_VTB_OTH_TB_OTH_H_  // guard

#include "verilated.h"
class Vtb_oth_tb_oth__03a__03achild;
class Vtb_oth_tb_oth__03a__03aparent;


class Vtb_oth__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_oth_tb_oth final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtb_oth__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_oth_tb_oth(Vtb_oth__Syms* symsp, const char* v__name);
    ~Vtb_oth_tb_oth();
    VL_UNCOPYABLE(Vtb_oth_tb_oth);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
