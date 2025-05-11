// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_oth__pch.h"

//============================================================
// Constructors

Vtb_oth::Vtb_oth(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_oth__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_oth::Vtb_oth(const char* _vcname__)
    : Vtb_oth(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_oth::~Vtb_oth() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_oth___024root___eval_debug_assertions(Vtb_oth___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_oth___024root___eval_static(Vtb_oth___024root* vlSelf);
void Vtb_oth___024root___eval_initial(Vtb_oth___024root* vlSelf);
void Vtb_oth___024root___eval_settle(Vtb_oth___024root* vlSelf);
void Vtb_oth___024root___eval(Vtb_oth___024root* vlSelf);

void Vtb_oth::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_oth::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_oth___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_oth___024root___eval_static(&(vlSymsp->TOP));
        Vtb_oth___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_oth___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_oth___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_oth::eventsPending() { return false; }

uint64_t Vtb_oth::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtb_oth::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_oth___024root___eval_final(Vtb_oth___024root* vlSelf);

VL_ATTR_COLD void Vtb_oth::final() {
    Vtb_oth___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_oth::hierName() const { return vlSymsp->name(); }
const char* Vtb_oth::modelName() const { return "Vtb_oth"; }
unsigned Vtb_oth::threads() const { return 1; }
void Vtb_oth::prepareClone() const { contextp()->prepareClone(); }
void Vtb_oth::atClone() const {
    contextp()->threadPoolpOnClone();
}
