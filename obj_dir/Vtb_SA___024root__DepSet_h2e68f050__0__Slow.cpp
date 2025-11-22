// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_SA.h for the primary calling header

#include "Vtb_SA__pch.h"
#include "Vtb_SA___024root.h"

VL_ATTR_COLD void Vtb_SA___024root___eval_static(Vtb_SA___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_SA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SA___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtb_SA___024root___eval_initial__TOP(Vtb_SA___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_SA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SA___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->tb_SA__DOT__clk = 0U;
}

VL_ATTR_COLD void Vtb_SA___024root___eval_final(Vtb_SA___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_SA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SA___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_SA___024root___dump_triggers__stl(Vtb_SA___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_SA___024root___eval_phase__stl(Vtb_SA___024root* vlSelf);

VL_ATTR_COLD void Vtb_SA___024root___eval_settle(Vtb_SA___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_SA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SA___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtb_SA___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_SA.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_SA___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_SA___024root___dump_triggers__stl(Vtb_SA___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_SA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SA___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_SA___024root___stl_sequent__TOP__0(Vtb_SA___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_SA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SA___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb_SA__DOT__acc_out[0U][0U] = vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_00__acc_out;
    vlSelf->tb_SA__DOT__dut__DOT__b_pipe[0U][0U] = vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_00__b_out;
    vlSelf->tb_SA__DOT__dut__DOT__a_pipe[0U][0U] = vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_00__a_out;
    vlSelf->tb_SA__DOT__acc_out[0U][1U] = vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_01__acc_out;
    vlSelf->tb_SA__DOT__dut__DOT__b_pipe[0U][1U] = vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_01__b_out;
    vlSelf->tb_SA__DOT__dut__DOT__a_pipe[0U][1U] = vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_01__a_out;
    vlSelf->tb_SA__DOT__acc_out[1U][0U] = vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_10__acc_out;
    vlSelf->tb_SA__DOT__dut__DOT__b_pipe[1U][0U] = vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_10__b_out;
    vlSelf->tb_SA__DOT__dut__DOT__a_pipe[1U][0U] = vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_10__a_out;
    vlSelf->tb_SA__DOT__acc_out[1U][1U] = vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_11__acc_out;
    vlSelf->tb_SA__DOT__dut__DOT__b_pipe[1U][1U] = vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_11__b_out;
    vlSelf->tb_SA__DOT__dut__DOT__a_pipe[1U][1U] = vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_11__a_out;
}

VL_ATTR_COLD void Vtb_SA___024root___eval_stl(Vtb_SA___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_SA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SA___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_SA___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_SA___024root___eval_triggers__stl(Vtb_SA___024root* vlSelf);

VL_ATTR_COLD bool Vtb_SA___024root___eval_phase__stl(Vtb_SA___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_SA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SA___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_SA___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_SA___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_SA___024root___dump_triggers__act(Vtb_SA___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_SA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SA___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_SA.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_SA___024root___dump_triggers__nba(Vtb_SA___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_SA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SA___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_SA.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_SA___024root___ctor_var_reset(Vtb_SA___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_SA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SA___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_SA__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_SA__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_SA__DOT__en = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_SA__DOT__a_in[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_SA__DOT__b_in[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->tb_SA__DOT__acc_out[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->tb_SA__DOT__dut__DOT__a_pipe[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->tb_SA__DOT__dut__DOT__b_pipe[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_00__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_00__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_00__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_01__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_01__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_01__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_10__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_10__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_10__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_11__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_11__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_11__a_out = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tb_SA__DOT__clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__tb_SA__DOT__clk__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_SA__DOT__clk__0 = VL_RAND_RESET_I(1);
}
