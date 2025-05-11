// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sfv5.h for the primary calling header

#include "Vtb_sfv5__pch.h"
#include "Vtb_sfv5__Syms.h"
#include "Vtb_sfv5___024unit__03a__03aMemTrans__Vclpkg.h"
#include "Vtb_sfv5___024unit__03a__03aPrintUtilities__Vclpkg.h"

Vtb_sfv5___024unit__03a__03aMemTrans::Vtb_sfv5___024unit__03a__03aMemTrans(Vtb_sfv5__Syms* __restrict vlSymsp, CData/*7:0*/ data_init, CData/*3:0*/ address_init) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_sfv5___024unit__03a__03aMemTrans::new\n"); );
    // Init
    _ctor_var_reset(vlSymsp);
    // Body
    this->__PVT__data_in = data_init;
    this->__PVT__address = address_init;
    vlSymsp->TOP____024unit__03a__03aMemTrans__Vclpkg.last_address 
        = this->__PVT__address;
    this->__PVT__prints = VL_NEW(Vtb_sfv5___024unit__03a__03aPrintUtilities, vlSymsp);
}
