// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sfv6.h for the primary calling header

#include "Vtb_sfv6__pch.h"
#include "Vtb_sfv6___024unit__03a__03aExercise1__Vclpkg.h"

void Vtb_sfv6___024unit__03a__03aExercise1::__VnoInFunc_display(Vtb_sfv6__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_sfv6___024unit__03a__03aExercise1::__VnoInFunc_display\n"); );
    // Body
    VL_WRITEF_NX("Address : 0x%0x Data : 0x%0x\n",0,
                 4,this->__PVT__address,8,(IData)(this->__PVT__data));
}

void Vtb_sfv6___024unit__03a__03aExercise1::__VnoInFunc_randomize(Vtb_sfv6__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_sfv6___024unit__03a__03aExercise1::__VnoInFunc_randomize\n"); );
    // Init
    IData/*31:0*/ __Vfunc___Vbasic_randomize__1__Vfuncout;
    __Vfunc___Vbasic_randomize__1__Vfuncout = 0;
    IData/*31:0*/ __Vtemp_1;
    // Body
    this->__PVT__constraint.clear();
    this->__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = this->__PVT__constraint.next(__Vm_rng);
    __Vtemp_1 = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__1__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__1__Vfuncout));
    randomize__Vfuncrtn = __Vtemp_1;
}

void Vtb_sfv6___024unit__03a__03aExercise1::__VnoInFunc_c_setup_constraint(Vtb_sfv6__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_sfv6___024unit__03a__03aExercise1::__VnoInFunc_c_setup_constraint\n"); );
    // Body
    this->__PVT__constraint.hard(std::string{"(bvand (__Vbv (bvuge ((_ zero_extend 28) address) #x00000003)) (__Vbv (bvule ((_ zero_extend 28) address) #x00000004)))"});
}

void Vtb_sfv6___024unit__03a__03aExercise1::__VnoInFunc___Vsetup_constraints(Vtb_sfv6__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_sfv6___024unit__03a__03aExercise1::__VnoInFunc___Vsetup_constraints\n"); );
    // Body
    this->__VnoInFunc_c_setup_constraint(vlSymsp);
}

void Vtb_sfv6___024unit__03a__03aExercise1::__VnoInFunc___Vbasic_randomize(Vtb_sfv6__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_sfv6___024unit__03a__03aExercise1::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
    this->__PVT__data = (0xffU & VL_RANDOM_RNG_I(__Vm_rng));
}

Vtb_sfv6___024unit__03a__03aExercise1::~Vtb_sfv6___024unit__03a__03aExercise1() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_sfv6___024unit__03a__03aExercise1::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtb_sfv6___024unit__03a__03aExercise1>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_sfv6___024unit__03a__03aExercise1::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtb_sfv6___024unit__03a__03aExercise1::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_sfv6___024unit__03a__03aExercise1::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_sfv6___024unit__03a__03aExercise1::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_sfv6___024unit__03a__03aExercise1::to_string_middle\n"); );
    // Body
    std::string out;
    out += "data:" + VL_TO_STRING(__PVT__data);
    out += ", address:" + VL_TO_STRING(__PVT__address);
    return out;
}
