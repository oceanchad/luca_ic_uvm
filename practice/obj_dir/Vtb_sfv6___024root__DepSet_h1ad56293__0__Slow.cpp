// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sfv6.h for the primary calling header

#include "Vtb_sfv6__pch.h"
#include "Vtb_sfv6__Syms.h"
#include "Vtb_sfv6___024root.h"
#include "Vtb_sfv6___024unit__03a__03aExercise1__Vclpkg.h"

VL_ATTR_COLD void Vtb_sfv6___024root___eval_initial__TOP(Vtb_sfv6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sfv6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sfv6___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlClassRef<Vtb_sfv6___024unit__03a__03aExercise1> tb_sfv__DOT__e1;
    VlClassRef<Vtb_sfv6___024unit__03a__03aExercise1> tb_sfv__DOT__e2;
    IData/*31:0*/ __Vtask_randomize__2__Vfuncout;
    __Vtask_randomize__2__Vfuncout = 0;
    IData/*31:0*/ __Vtask_randomize__3__Vfuncout;
    __Vtask_randomize__3__Vfuncout = 0;
    // Body
    tb_sfv__DOT__e1 = VL_NEW(Vtb_sfv6___024unit__03a__03aExercise1, vlSymsp);
    tb_sfv__DOT__e2 = VL_NEW(Vtb_sfv6___024unit__03a__03aExercise1, vlSymsp);
    VL_NULL_CHECK(tb_sfv__DOT__e1, "TB/tb_sfv6.sv", 37)->__VnoInFunc_randomize(vlSymsp, __Vtask_randomize__2__Vfuncout);
    VL_NULL_CHECK(tb_sfv__DOT__e2, "TB/tb_sfv6.sv", 38)->__VnoInFunc_randomize(vlSymsp, __Vtask_randomize__3__Vfuncout);
    VL_NULL_CHECK(tb_sfv__DOT__e1, "TB/tb_sfv6.sv", 39)->__VnoInFunc_display(vlSymsp);
    VL_NULL_CHECK(tb_sfv__DOT__e2, "TB/tb_sfv6.sv", 40)->__VnoInFunc_display(vlSymsp);
}
