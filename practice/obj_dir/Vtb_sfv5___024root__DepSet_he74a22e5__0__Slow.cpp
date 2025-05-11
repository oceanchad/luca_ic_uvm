// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sfv5.h for the primary calling header

#include "Vtb_sfv5__pch.h"
#include "Vtb_sfv5__Syms.h"
#include "Vtb_sfv5___024root.h"
#include "Vtb_sfv5___024unit__03a__03aMemTrans__Vclpkg.h"

VL_ATTR_COLD void Vtb_sfv5___024root___eval_initial__TOP(Vtb_sfv5___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_sfv5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sfv5___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlClassRef<Vtb_sfv5___024unit__03a__03aMemTrans> tb_sfv__DOT__mt;
    VlClassRef<Vtb_sfv5___024unit__03a__03aMemTrans> tb_sfv__DOT__mt1;
    // Body
    tb_sfv__DOT__mt = VL_NEW(Vtb_sfv5___024unit__03a__03aMemTrans, vlSymsp, 0U, 2U);
    VL_WRITEF_NX("last_address is %x\n",0,4,vlSymsp->TOP____024unit__03a__03aMemTrans__Vclpkg.last_address);
    vlSymsp->TOP____024unit__03a__03aMemTrans__Vclpkg.__VnoInFunc_print_last_address(vlSymsp);
    VL_NULL_CHECK(tb_sfv__DOT__mt, "TB/tb_sfv5.sv", 46)->__VnoInFunc_print(vlSymsp);
    VL_NULL_CHECK(tb_sfv__DOT__mt, "TB/tb_sfv5.sv", 47)->__VnoInFunc_print_all(vlSymsp);
    tb_sfv__DOT__mt1 = VL_NEW(Vtb_sfv5___024unit__03a__03aMemTrans, vlSymsp, 3U, 4U);
    VL_NULL_CHECK(tb_sfv__DOT__mt1, "TB/tb_sfv5.sv", 49)->__VnoInFunc_print(vlSymsp);
    VL_NULL_CHECK(tb_sfv__DOT__mt1, "TB/tb_sfv5.sv", 50)->__VnoInFunc_print_all(vlSymsp);
    VL_NULL_CHECK(tb_sfv__DOT__mt, "TB/tb_sfv5.sv", 51)->__PVT__address = 0xfU;
    VL_NULL_CHECK(tb_sfv__DOT__mt, "TB/tb_sfv5.sv", 52)->__VnoInFunc_print(vlSymsp);
    tb_sfv__DOT__mt1 = VlNull{};
}
