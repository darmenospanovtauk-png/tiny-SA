// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_SA__pch.h"
#include "Vtb_SA.h"
#include "Vtb_SA___024root.h"

// FUNCTIONS
Vtb_SA__Syms::~Vtb_SA__Syms()
{
}

Vtb_SA__Syms::Vtb_SA__Syms(VerilatedContext* contextp, const char* namep, Vtb_SA* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
