// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_mac__pch.h"

//============================================================
// Constructors

Vtb_mac::Vtb_mac(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_mac__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_mac::Vtb_mac(const char* _vcname__)
    : Vtb_mac(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_mac::~Vtb_mac() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_mac___024root___eval_debug_assertions(Vtb_mac___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_mac___024root___eval_static(Vtb_mac___024root* vlSelf);
void Vtb_mac___024root___eval_initial(Vtb_mac___024root* vlSelf);
void Vtb_mac___024root___eval_settle(Vtb_mac___024root* vlSelf);
void Vtb_mac___024root___eval(Vtb_mac___024root* vlSelf);

void Vtb_mac::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_mac::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_mac___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_mac___024root___eval_static(&(vlSymsp->TOP));
        Vtb_mac___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_mac___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_mac___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_mac::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_mac::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_mac::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_mac___024root___eval_final(Vtb_mac___024root* vlSelf);

VL_ATTR_COLD void Vtb_mac::final() {
    Vtb_mac___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_mac::hierName() const { return vlSymsp->name(); }
const char* Vtb_mac::modelName() const { return "Vtb_mac"; }
unsigned Vtb_mac::threads() const { return 1; }
void Vtb_mac::prepareClone() const { contextp()->prepareClone(); }
void Vtb_mac::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vtb_mac::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb_mac::trace()' called on model that was Verilated without --trace option");
}
