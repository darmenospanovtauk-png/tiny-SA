// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_SA__pch.h"

//============================================================
// Constructors

Vtb_SA::Vtb_SA(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_SA__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_SA::Vtb_SA(const char* _vcname__)
    : Vtb_SA(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_SA::~Vtb_SA() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_SA___024root___eval_debug_assertions(Vtb_SA___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_SA___024root___eval_static(Vtb_SA___024root* vlSelf);
void Vtb_SA___024root___eval_initial(Vtb_SA___024root* vlSelf);
void Vtb_SA___024root___eval_settle(Vtb_SA___024root* vlSelf);
void Vtb_SA___024root___eval(Vtb_SA___024root* vlSelf);

void Vtb_SA::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_SA::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_SA___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_SA___024root___eval_static(&(vlSymsp->TOP));
        Vtb_SA___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_SA___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_SA___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_SA::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_SA::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_SA::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_SA___024root___eval_final(Vtb_SA___024root* vlSelf);

VL_ATTR_COLD void Vtb_SA::final() {
    Vtb_SA___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_SA::hierName() const { return vlSymsp->name(); }
const char* Vtb_SA::modelName() const { return "Vtb_SA"; }
unsigned Vtb_SA::threads() const { return 1; }
void Vtb_SA::prepareClone() const { contextp()->prepareClone(); }
void Vtb_SA::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vtb_SA::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb_SA::trace()' called on model that was Verilated without --trace option");
}
