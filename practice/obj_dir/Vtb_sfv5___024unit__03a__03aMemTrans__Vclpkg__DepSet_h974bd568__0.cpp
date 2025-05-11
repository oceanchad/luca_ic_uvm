// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sfv5.h for the primary calling header

#include "Vtb_sfv5__pch.h"
#include "Vtb_sfv5___024unit__03a__03aMemTrans__Vclpkg.h"

void Vtb_sfv5___024unit__03a__03aMemTrans__Vclpkg::__VnoInFunc_print_last_address(Vtb_sfv5__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_sfv5___024unit__03a__03aMemTrans__Vclpkg::__VnoInFunc_print_last_address\n"); );
    // Body
    VL_WRITEF_NX("last_address is %x\n",0,4,this->last_address);
}

void Vtb_sfv5___024unit__03a__03aMemTrans::__VnoInFunc_print(Vtb_sfv5__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_sfv5___024unit__03a__03aMemTrans::__VnoInFunc_print\n"); );
    // Body
    VL_WRITEF_NX("Data_in = 0x%0x, address = 0x%0x\n",0,
                 8,this->__PVT__data_in,4,(IData)(this->__PVT__address));
}

Vtb_sfv5___024unit__03a__03aMemTrans::~Vtb_sfv5___024unit__03a__03aMemTrans() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_sfv5___024unit__03a__03aMemTrans::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtb_sfv5___024unit__03a__03aMemTrans>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_sfv5___024unit__03a__03aMemTrans::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtb_sfv5___024unit__03a__03aMemTrans::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_sfv5___024unit__03a__03aMemTrans::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_sfv5___024unit__03a__03aMemTrans::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_sfv5___024unit__03a__03aMemTrans::to_string_middle\n"); );
    // Body
    std::string out;
    out += "data_in:" + VL_TO_STRING(__PVT__data_in);
    out += ", address:" + VL_TO_STRING(__PVT__address);
    out += ", prints:" + VL_TO_STRING(__PVT__prints);
    return out;
}
