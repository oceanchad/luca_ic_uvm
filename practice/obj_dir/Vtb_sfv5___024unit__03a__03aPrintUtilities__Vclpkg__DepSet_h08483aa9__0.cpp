// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sfv5.h for the primary calling header

#include "Vtb_sfv5__pch.h"
#include "Vtb_sfv5___024unit__03a__03aPrintUtilities__Vclpkg.h"

void Vtb_sfv5___024unit__03a__03aPrintUtilities::__VnoInFunc_print_4(Vtb_sfv5__Syms* __restrict vlSymsp, std::string name, CData/*3:0*/ val_4bits) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_sfv5___024unit__03a__03aPrintUtilities::__VnoInFunc_print_4\n"); );
    // Body
    VL_WRITEF_NX("%t: %@ = %x\n",0,64,VL_TIME_UNITED_Q(1),
                 -12,-1,&(name),4,(IData)(val_4bits));
}

void Vtb_sfv5___024unit__03a__03aPrintUtilities::__VnoInFunc_print_8(Vtb_sfv5__Syms* __restrict vlSymsp, std::string name, CData/*7:0*/ val_8bits) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_sfv5___024unit__03a__03aPrintUtilities::__VnoInFunc_print_8\n"); );
    // Body
    VL_WRITEF_NX("%t: %@ = %x\n",0,64,VL_TIME_UNITED_Q(1),
                 -12,-1,&(name),8,(IData)(val_8bits));
}

Vtb_sfv5___024unit__03a__03aPrintUtilities::~Vtb_sfv5___024unit__03a__03aPrintUtilities() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_sfv5___024unit__03a__03aPrintUtilities::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtb_sfv5___024unit__03a__03aPrintUtilities>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_sfv5___024unit__03a__03aPrintUtilities::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtb_sfv5___024unit__03a__03aPrintUtilities::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_sfv5___024unit__03a__03aPrintUtilities::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_sfv5___024unit__03a__03aPrintUtilities::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_sfv5___024unit__03a__03aPrintUtilities::to_string_middle\n"); );
    // Body
    std::string out;
    return out;
}
