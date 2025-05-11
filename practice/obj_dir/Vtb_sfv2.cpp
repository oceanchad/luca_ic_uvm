// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_sfv2__pch.h"

//============================================================
// Constructors

Vtb_sfv2::Vtb_sfv2(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_sfv2__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_sfv2::Vtb_sfv2(const char* _vcname__)
    : Vtb_sfv2(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_sfv2::~Vtb_sfv2() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_sfv2___024root___eval_debug_assertions(Vtb_sfv2___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_sfv2___024root___eval_static(Vtb_sfv2___024root* vlSelf);
void Vtb_sfv2___024root___eval_initial(Vtb_sfv2___024root* vlSelf);
void Vtb_sfv2___024root___eval_settle(Vtb_sfv2___024root* vlSelf);
void Vtb_sfv2___024root___eval(Vtb_sfv2___024root* vlSelf);

void Vtb_sfv2::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_sfv2::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_sfv2___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_sfv2___024root___eval_static(&(vlSymsp->TOP));
        Vtb_sfv2___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_sfv2___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_sfv2___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_sfv2::eventsPending() { return false; }

uint64_t Vtb_sfv2::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtb_sfv2::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_sfv2___024root___eval_final(Vtb_sfv2___024root* vlSelf);

VL_ATTR_COLD void Vtb_sfv2::final() {
    Vtb_sfv2___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_sfv2::hierName() const { return vlSymsp->name(); }
const char* Vtb_sfv2::modelName() const { return "Vtb_sfv2"; }
unsigned Vtb_sfv2::threads() const { return 1; }
void Vtb_sfv2::prepareClone() const { contextp()->prepareClone(); }
void Vtb_sfv2::atClone() const {
    contextp()->threadPoolpOnClone();
}
