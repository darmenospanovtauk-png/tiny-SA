// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmac.h for the primary calling header

#include "Vmac__pch.h"
#include "Vmac___024root.h"

VL_ATTR_COLD void Vmac___024root___eval_static(Vmac___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmac__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vmac___024root___eval_initial__TOP(Vmac___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmac__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->tb_mac__DOT__clk = 0U;
}

VL_ATTR_COLD void Vmac___024root___eval_final(Vmac___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmac__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vmac___024root___eval_settle(Vmac___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmac__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmac___024root___dump_triggers__act(Vmac___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmac__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_mac.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmac___024root___dump_triggers__nba(Vmac___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmac__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_mac.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmac___024root___ctor_var_reset(Vmac___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmac__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_mac__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_mac__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_mac__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->tb_mac__DOT__a = VL_RAND_RESET_I(8);
    vlSelf->tb_mac__DOT__b = VL_RAND_RESET_I(8);
    vlSelf->tb_mac__DOT__acc_out = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__tb_mac__DOT__clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__tb_mac__DOT__clk__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_mac__DOT__clk__0 = VL_RAND_RESET_I(1);
}
