// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_pe.h for the primary calling header

#include "Vtb_pe__pch.h"
#include "Vtb_pe__Syms.h"
#include "Vtb_pe___024root.h"

void Vtb_pe___024root___ctor_var_reset(Vtb_pe___024root* vlSelf);

Vtb_pe___024root::Vtb_pe___024root(Vtb_pe__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_pe___024root___ctor_var_reset(this);
}

void Vtb_pe___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_pe___024root::~Vtb_pe___024root() {
}
