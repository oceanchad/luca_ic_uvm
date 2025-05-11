// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_sfv5__pch.h"

//============================================================
// Constructors

Vtb_sfv5::Vtb_sfv5(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_sfv5__Syms(contextp(), _vcname__, this)}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , __024unit__03a__03aPrintUtilities__Vclpkg{vlSymsp->TOP.__024unit__03a__03aPrintUtilities__Vclpkg}
    , __024unit__03a__03aMemTrans__Vclpkg{vlSymsp->TOP.__024unit__03a__03aMemTrans__Vclpkg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_sfv5::Vtb_sfv5(const char* _vcname__)
    : Vtb_sfv5(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_sfv5::~Vtb_sfv5() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_sfv5___024root___eval_debug_assertions(Vtb_sfv5___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_sfv5___024root___eval_static(Vtb_sfv5___024root* vlSelf);
void Vtb_sfv5___024root___eval_initial(Vtb_sfv5___024root* vlSelf);
void Vtb_sfv5___024root___eval_settle(Vtb_sfv5___024root* vlSelf);
void Vtb_sfv5___024root___eval(Vtb_sfv5___024root* vlSelf);

void Vtb_sfv5::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_sfv5::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_sfv5___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_sfv5___024root___eval_static(&(vlSymsp->TOP));
        Vtb_sfv5___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_sfv5___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_sfv5___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_sfv5::eventsPending() { return false; }

uint64_t Vtb_sfv5::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtb_sfv5::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_sfv5___024root___eval_final(Vtb_sfv5___024root* vlSelf);

VL_ATTR_COLD void Vtb_sfv5::final() {
    Vtb_sfv5___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_sfv5::hierName() const { return vlSymsp->name(); }
const char* Vtb_sfv5::modelName() const { return "Vtb_sfv5"; }
unsigned Vtb_sfv5::threads() const { return 1; }
void Vtb_sfv5::prepareClone() const { contextp()->prepareClone(); }
void Vtb_sfv5::atClone() const {
    contextp()->threadPoolpOnClone();
}
