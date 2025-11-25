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
    CData/*0:0*/ tb_SA__DOT__en;
    CData/*7:0*/ tb_SA__DOT__dut__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__pe_ij__b_out;
    CData/*7:0*/ tb_SA__DOT__dut__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__pe_ij__a_out;
    CData/*7:0*/ tb_SA__DOT__dut__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__1__KET____DOT__pe_ij__b_out;
    CData/*7:0*/ tb_SA__DOT__dut__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__1__KET____DOT__pe_ij__a_out;
    CData/*7:0*/ tb_SA__DOT__dut__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__0__KET____DOT__pe_ij__b_out;
    CData/*7:0*/ tb_SA__DOT__dut__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__0__KET____DOT__pe_ij__a_out;
    CData/*7:0*/ tb_SA__DOT__dut__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__1__KET____DOT__pe_ij__b_out;
    CData/*7:0*/ tb_SA__DOT__dut__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__1__KET____DOT__pe_ij__a_out;
    CData/*0:0*/ __Vdlyvval__tb_SA__DOT__clk__v0;
    CData/*0:0*/ __Vdlyvset__tb_SA__DOT__clk__v0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_SA__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_SA__DOT__k_idx;
    IData/*31:0*/ tb_SA__DOT__dut__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__pe_ij__acc_out;
    IData/*31:0*/ tb_SA__DOT__dut__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__1__KET____DOT__pe_ij__acc_out;
    IData/*31:0*/ tb_SA__DOT__dut__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__0__KET____DOT__pe_ij__acc_out;
    IData/*31:0*/ tb_SA__DOT__dut__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__1__KET____DOT__pe_ij__acc_out;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 2> tb_SA__DOT__a_in;
    VlUnpacked<CData/*7:0*/, 2> tb_SA__DOT__b_in;
    VlUnpacked<VlUnpacked<IData/*31:0*/, 2>, 2> tb_SA__DOT__acc_out;
    VlUnpacked<VlUnpacked<CData/*7:0*/, 2>, 2> tb_SA__DOT__A_in;
    VlUnpacked<VlUnpacked<CData/*7:0*/, 2>, 2> tb_SA__DOT__B_in;
    VlUnpacked<VlUnpacked<IData/*31:0*/, 2>, 2> tb_SA__DOT__ACC_ref;
    VlUnpacked<VlUnpacked<CData/*7:0*/, 2>, 2> tb_SA__DOT__dut__DOT__a_pipe;
    VlUnpacked<VlUnpacked<CData/*7:0*/, 2>, 2> tb_SA__DOT__dut__DOT__b_pipe;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h34e3e0b0__0;
    VlTriggerVec<1> __VstlTriggered;
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
