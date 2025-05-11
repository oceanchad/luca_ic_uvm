// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_oth.h for the primary calling header

#include "Vtb_oth__pch.h"
#include "Vtb_oth__Syms.h"
#include "Vtb_oth_tb_oth.h"
#include "Vtb_oth_tb_oth__03a__03achild__Vclpkg.h"
#include "Vtb_oth_tb_oth__03a__03aparent__Vclpkg.h"

VL_ATTR_COLD void Vtb_oth_tb_oth___eval_initial__TOP__tb_oth(Vtb_oth_tb_oth* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_oth__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_oth_tb_oth___eval_initial__TOP__tb_oth\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlClassRef<Vtb_oth_tb_oth__03a__03aparent> __PVT__p;
    VlClassRef<Vtb_oth_tb_oth__03a__03achild> __PVT__c;
    // Body
    __PVT__p = VL_NEW(Vtb_oth_tb_oth__03a__03aparent, vlSymsp);
    __PVT__c = VL_NEW(Vtb_oth_tb_oth__03a__03achild, vlSymsp);
    VL_NULL_CHECK(__PVT__p, "TB/tb_oth.sv", 19)->__VnoInFunc_display(vlSymsp);
    VL_NULL_CHECK(__PVT__c, "TB/tb_oth.sv", 20)->__VnoInFunc_display(vlSymsp);
}
