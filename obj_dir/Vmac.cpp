// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmac__pch.h"

//============================================================
// Constructors

Vmac::Vmac(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmac__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vmac::Vmac(const char* _vcname__)
    : Vmac(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmac::~Vmac() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmac___024root___eval_debug_assertions(Vmac___024root* vlSelf);
#endif  // VL_DEBUG
void Vmac___024root___eval_static(Vmac___024root* vlSelf);
void Vmac___024root___eval_initial(Vmac___024root* vlSelf);
void Vmac___024root___eval_settle(Vmac___024root* vlSelf);
void Vmac___024root___eval(Vmac___024root* vlSelf);

void Vmac::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmac::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmac___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmac___024root___eval_static(&(vlSymsp->TOP));
        Vmac___024root___eval_initial(&(vlSymsp->TOP));
        Vmac___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmac___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vmac::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vmac::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vmac::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmac___024root___eval_final(Vmac___024root* vlSelf);

VL_ATTR_COLD void Vmac::final() {
    Vmac___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmac::hierName() const { return vlSymsp->name(); }
const char* Vmac::modelName() const { return "Vmac"; }
unsigned Vmac::threads() const { return 1; }
void Vmac::prepareClone() const { contextp()->prepareClone(); }
void Vmac::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vmac::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vmac::trace()' called on model that was Verilated without --trace option");
}
