// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_sfv6__pch.h"

//============================================================
// Constructors

Vtb_sfv6::Vtb_sfv6(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_sfv6__Syms(contextp(), _vcname__, this)}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , __024unit__03a__03aExercise1__Vclpkg{vlSymsp->TOP.__024unit__03a__03aExercise1__Vclpkg}
    , __024unit__03a__03aExercise2__Vclpkg{vlSymsp->TOP.__024unit__03a__03aExercise2__Vclpkg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_sfv6::Vtb_sfv6(const char* _vcname__)
    : Vtb_sfv6(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_sfv6::~Vtb_sfv6() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_sfv6___024root___eval_debug_assertions(Vtb_sfv6___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_sfv6___024root___eval_static(Vtb_sfv6___024root* vlSelf);
void Vtb_sfv6___024root___eval_initial(Vtb_sfv6___024root* vlSelf);
void Vtb_sfv6___024root___eval_settle(Vtb_sfv6___024root* vlSelf);
void Vtb_sfv6___024root___eval(Vtb_sfv6___024root* vlSelf);

void Vtb_sfv6::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_sfv6::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_sfv6___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_sfv6___024root___eval_static(&(vlSymsp->TOP));
        Vtb_sfv6___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_sfv6___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_sfv6___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_sfv6::eventsPending() { return false; }

uint64_t Vtb_sfv6::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtb_sfv6::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_sfv6___024root___eval_final(Vtb_sfv6___024root* vlSelf);

VL_ATTR_COLD void Vtb_sfv6::final() {
    Vtb_sfv6___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_sfv6::hierName() const { return vlSymsp->name(); }
const char* Vtb_sfv6::modelName() const { return "Vtb_sfv6"; }
unsigned Vtb_sfv6::threads() const { return 1; }
void Vtb_sfv6::prepareClone() const { contextp()->prepareClone(); }
void Vtb_sfv6::atClone() const {
    contextp()->threadPoolpOnClone();
}
