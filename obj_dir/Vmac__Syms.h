// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMAC__SYMS_H_
#define VERILATED_VMAC__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vmac.h"

// INCLUDE MODULE CLASSES
#include "Vmac___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vmac__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vmac* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vmac___024root                 TOP;

    // CONSTRUCTORS
    Vmac__Syms(VerilatedContext* contextp, const char* namep, Vmac* modelp);
    ~Vmac__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
