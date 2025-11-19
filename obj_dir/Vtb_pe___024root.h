// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_pe.h for the primary calling header

#ifndef VERILATED_VTB_PE___024ROOT_H_
#define VERILATED_VTB_PE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_pe__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_pe___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_pe__DOT__clk;
    CData/*0:0*/ tb_pe__DOT__rst_n;
    CData/*0:0*/ tb_pe__DOT__en;
    CData/*7:0*/ tb_pe__DOT__a_in;
    CData/*7:0*/ tb_pe__DOT__b_in;
    CData/*7:0*/ tb_pe__DOT__a_out;
    CData/*7:0*/ tb_pe__DOT__b_out;
    CData/*0:0*/ __Vdlyvval__tb_pe__DOT__clk__v0;
    CData/*0:0*/ __Vdlyvset__tb_pe__DOT__clk__v0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_pe__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_pe__DOT__acc_out;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hf2c5e7e1__0;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_pe__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_pe___024root(Vtb_pe__Syms* symsp, const char* v__name);
    ~Vtb_pe___024root();
    VL_UNCOPYABLE(Vtb_pe___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
