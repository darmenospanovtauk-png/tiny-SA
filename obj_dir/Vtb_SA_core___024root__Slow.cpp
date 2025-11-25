// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_SA_core.h for the primary calling header

#include "Vtb_SA_core__pch.h"
#include "Vtb_SA_core__Syms.h"
#include "Vtb_SA_core___024root.h"

void Vtb_SA_core___024root___ctor_var_reset(Vtb_SA_core___024root* vlSelf);

Vtb_SA_core___024root::Vtb_SA_core___024root(Vtb_SA_core__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_SA_core___024root___ctor_var_reset(this);
}

void Vtb_SA_core___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_SA_core___024root::~Vtb_SA_core___024root() {
}
