// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_SA_core__pch.h"

//============================================================
// Constructors

Vtb_SA_core::Vtb_SA_core(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_SA_core__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_SA_core::Vtb_SA_core(const char* _vcname__)
    : Vtb_SA_core(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_SA_core::~Vtb_SA_core() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_SA_core___024root___eval_debug_assertions(Vtb_SA_core___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_SA_core___024root___eval_static(Vtb_SA_core___024root* vlSelf);
void Vtb_SA_core___024root___eval_initial(Vtb_SA_core___024root* vlSelf);
void Vtb_SA_core___024root___eval_settle(Vtb_SA_core___024root* vlSelf);
void Vtb_SA_core___024root___eval(Vtb_SA_core___024root* vlSelf);

void Vtb_SA_core::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_SA_core::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_SA_core___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_SA_core___024root___eval_static(&(vlSymsp->TOP));
        Vtb_SA_core___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_SA_core___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_SA_core___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_SA_core::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_SA_core::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_SA_core::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_SA_core___024root___eval_final(Vtb_SA_core___024root* vlSelf);

VL_ATTR_COLD void Vtb_SA_core::final() {
    Vtb_SA_core___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_SA_core::hierName() const { return vlSymsp->name(); }
const char* Vtb_SA_core::modelName() const { return "Vtb_SA_core"; }
unsigned Vtb_SA_core::threads() const { return 1; }
void Vtb_SA_core::prepareClone() const { contextp()->prepareClone(); }
void Vtb_SA_core::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vtb_SA_core::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb_SA_core::trace()' called on model that was Verilated without --trace option");
}
