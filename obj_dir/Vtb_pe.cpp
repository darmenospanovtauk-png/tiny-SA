// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_pe__pch.h"

//============================================================
// Constructors

Vtb_pe::Vtb_pe(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_pe__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_pe::Vtb_pe(const char* _vcname__)
    : Vtb_pe(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_pe::~Vtb_pe() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_pe___024root___eval_debug_assertions(Vtb_pe___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_pe___024root___eval_static(Vtb_pe___024root* vlSelf);
void Vtb_pe___024root___eval_initial(Vtb_pe___024root* vlSelf);
void Vtb_pe___024root___eval_settle(Vtb_pe___024root* vlSelf);
void Vtb_pe___024root___eval(Vtb_pe___024root* vlSelf);

void Vtb_pe::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_pe::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_pe___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_pe___024root___eval_static(&(vlSymsp->TOP));
        Vtb_pe___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_pe___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_pe___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_pe::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_pe::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_pe::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_pe___024root___eval_final(Vtb_pe___024root* vlSelf);

VL_ATTR_COLD void Vtb_pe::final() {
    Vtb_pe___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_pe::hierName() const { return vlSymsp->name(); }
const char* Vtb_pe::modelName() const { return "Vtb_pe"; }
unsigned Vtb_pe::threads() const { return 1; }
void Vtb_pe::prepareClone() const { contextp()->prepareClone(); }
void Vtb_pe::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vtb_pe::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb_pe::trace()' called on model that was Verilated without --trace option");
}
