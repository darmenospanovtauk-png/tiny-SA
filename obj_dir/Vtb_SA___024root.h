// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_SA.h for the primary calling header

#ifndef VERILATED_VTB_SA___024ROOT_H_
#define VERILATED_VTB_SA___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_SA__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_SA___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_SA__DOT__clk;
    CData/*0:0*/ tb_SA__DOT__rst_n;
    CData/*0:0*/ tb_SA__DOT__en_00;
    CData/*0:0*/ tb_SA__DOT__en_01;
    CData/*0:0*/ tb_SA__DOT__en_10;
    CData/*0:0*/ tb_SA__DOT__en_11;
    CData/*7:0*/ tb_SA__DOT__a_0;
    CData/*7:0*/ tb_SA__DOT__a_1;
    CData/*7:0*/ tb_SA__DOT__b_0;
    CData/*7:0*/ tb_SA__DOT__b_1;
    CData/*7:0*/ tb_SA__DOT__dut__DOT__a_00_to_01;
    CData/*7:0*/ tb_SA__DOT__dut__DOT__a_10_to_11;
    CData/*7:0*/ tb_SA__DOT__dut__DOT__b_00_to_10;
    CData/*7:0*/ tb_SA__DOT__dut__DOT__b_01_to_11;
    CData/*0:0*/ __Vdlyvval__tb_SA__DOT__clk__v0;
    CData/*0:0*/ __Vdlyvset__tb_SA__DOT__clk__v0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_SA__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_SA__DOT__acc_out_0;
    IData/*31:0*/ tb_SA__DOT__acc_out_1;
    IData/*31:0*/ tb_SA__DOT__acc_out_2;
    IData/*31:0*/ tb_SA__DOT__acc_out_3;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h34e3e0b0__0;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_SA__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_SA___024root(Vtb_SA__Syms* symsp, const char* v__name);
    ~Vtb_SA___024root();
    VL_UNCOPYABLE(Vtb_SA___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
