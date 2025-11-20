// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_SA.h for the primary calling header

#include "Vtb_SA__pch.h"
#include "Vtb_SA__Syms.h"
#include "Vtb_SA___024root.h"

void Vtb_SA___024root___ctor_var_reset(Vtb_SA___024root* vlSelf);

Vtb_SA___024root::Vtb_SA___024root(Vtb_SA__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_SA___024root___ctor_var_reset(this);
}

void Vtb_SA___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_SA___024root::~Vtb_SA___024root() {
}
