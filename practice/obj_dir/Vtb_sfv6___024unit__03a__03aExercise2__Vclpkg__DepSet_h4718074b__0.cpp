// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sfv6.h for the primary calling header

#include "Vtb_sfv6__pch.h"
#include "Vtb_sfv6___024unit__03a__03aExercise2__Vclpkg.h"

void Vtb_sfv6___024unit__03a__03aExercise2::__VnoInFunc_display(Vtb_sfv6__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_sfv6___024unit__03a__03aExercise2::__VnoInFunc_display\n"); );
    // Body
    VL_WRITEF_NX("Address : 0x%0x Data : 0x%0x\n",0,
                 4,this->__PVT__address,8,(IData)(this->__PVT__data));
}

Vtb_sfv6___024unit__03a__03aExercise2::~Vtb_sfv6___024unit__03a__03aExercise2() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_sfv6___024unit__03a__03aExercise2::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtb_sfv6___024unit__03a__03aExercise2>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_sfv6___024unit__03a__03aExercise2::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtb_sfv6___024unit__03a__03aExercise2::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_sfv6___024unit__03a__03aExercise2::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_sfv6___024unit__03a__03aExercise2::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_sfv6___024unit__03a__03aExercise2::to_string_middle\n"); );
    // Body
    std::string out;
    out += "data:" + VL_TO_STRING(__PVT__data);
    out += ", address:" + VL_TO_STRING(__PVT__address);
    return out;
}
