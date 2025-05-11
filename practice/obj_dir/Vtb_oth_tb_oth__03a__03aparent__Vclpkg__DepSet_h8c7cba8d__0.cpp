// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_oth.h for the primary calling header

#include "Vtb_oth__pch.h"
#include "Vtb_oth_tb_oth__03a__03aparent__Vclpkg.h"

void Vtb_oth_tb_oth__03a__03aparent::__VnoInFunc_display(Vtb_oth__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_oth_tb_oth__03a__03aparent::__VnoInFunc_display\n"); );
    // Body
    VL_WRITEF_NX("Parent Class %11d\n",0,32,this->__PVT__c);
}

Vtb_oth_tb_oth__03a__03aparent::~Vtb_oth_tb_oth__03a__03aparent() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_oth_tb_oth__03a__03aparent::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtb_oth_tb_oth__03a__03aparent>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_oth_tb_oth__03a__03aparent::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtb_oth_tb_oth__03a__03aparent::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_oth_tb_oth__03a__03aparent::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_oth_tb_oth__03a__03aparent::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_oth_tb_oth__03a__03aparent::to_string_middle\n"); );
    // Body
    std::string out;
    out += "a:" + VL_TO_STRING(__PVT__a);
    out += ", b:" + VL_TO_STRING(__PVT__b);
    out += ", c:" + VL_TO_STRING(__PVT__c);
    return out;
}
