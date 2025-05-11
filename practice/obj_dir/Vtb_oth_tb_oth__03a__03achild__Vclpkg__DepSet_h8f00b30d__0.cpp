// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_oth.h for the primary calling header

#include "Vtb_oth__pch.h"
#include "Vtb_oth_tb_oth__03a__03achild__Vclpkg.h"

Vtb_oth_tb_oth__03a__03achild::~Vtb_oth_tb_oth__03a__03achild() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_oth_tb_oth__03a__03achild::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtb_oth_tb_oth__03a__03achild>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_oth_tb_oth__03a__03achild::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtb_oth_tb_oth__03a__03achild::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_oth_tb_oth__03a__03achild::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_oth_tb_oth__03a__03achild::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_oth_tb_oth__03a__03achild::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtb_oth_tb_oth__03a__03aparent::to_string_middle();
    return out;
}
