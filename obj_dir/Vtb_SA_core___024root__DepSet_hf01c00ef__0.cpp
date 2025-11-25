// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_SA_core.h for the primary calling header

#include "Vtb_SA_core__pch.h"
#include "Vtb_SA_core___024root.h"

VL_ATTR_COLD void Vtb_SA_core___024root___eval_initial__TOP(Vtb_SA_core___024root* vlSelf);
VlCoroutine Vtb_SA_core___024root___eval_initial__TOP__Vtiming__0(Vtb_SA_core___024root* vlSelf);
VlCoroutine Vtb_SA_core___024root___eval_initial__TOP__Vtiming__1(Vtb_SA_core___024root* vlSelf);

void Vtb_SA_core___024root___eval_initial(Vtb_SA_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_SA_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SA_core___024root___eval_initial\n"); );
    // Body
    Vtb_SA_core___024root___eval_initial__TOP(vlSelf);
    Vtb_SA_core___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_SA_core___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_SA_core__DOT__clk__0 
        = vlSelf->tb_SA_core__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_SA_core__DOT__done__0 
        = vlSelf->tb_SA_core__DOT__done;
}

VL_INLINE_OPT VlCoroutine Vtb_SA_core___024root___eval_initial__TOP__Vtiming__0(Vtb_SA_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_SA_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SA_core___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    IData/*31:0*/ tb_SA_core__DOT__test;
    tb_SA_core__DOT__test = 0;
    // Body
    vlSelf->tb_SA_core__DOT__rst_n = 0U;
    vlSelf->tb_SA_core__DOT__start = 0U;
    vlSelf->tb_SA_core__DOT__A_mem[0U][0U] = 0U;
    vlSelf->tb_SA_core__DOT__B_mem[0U][0U] = 0U;
    vlSelf->tb_SA_core__DOT__A_mem[0U][1U] = 0U;
    vlSelf->tb_SA_core__DOT__B_mem[0U][1U] = 0U;
    vlSelf->tb_SA_core__DOT__A_mem[0U][2U] = 0U;
    vlSelf->tb_SA_core__DOT__B_mem[0U][2U] = 0U;
    vlSelf->tb_SA_core__DOT__A_mem[1U][0U] = 0U;
    vlSelf->tb_SA_core__DOT__B_mem[1U][0U] = 0U;
    vlSelf->tb_SA_core__DOT__A_mem[1U][1U] = 0U;
    vlSelf->tb_SA_core__DOT__B_mem[1U][1U] = 0U;
    vlSelf->tb_SA_core__DOT__A_mem[1U][2U] = 0U;
    vlSelf->tb_SA_core__DOT__B_mem[1U][2U] = 0U;
    vlSelf->tb_SA_core__DOT__A_mem[2U][0U] = 0U;
    vlSelf->tb_SA_core__DOT__B_mem[2U][0U] = 0U;
    vlSelf->tb_SA_core__DOT__A_mem[2U][1U] = 0U;
    vlSelf->tb_SA_core__DOT__B_mem[2U][1U] = 0U;
    vlSelf->tb_SA_core__DOT__A_mem[2U][2U] = 0U;
    vlSelf->tb_SA_core__DOT__B_mem[2U][2U] = 0U;
    co_await vlSelf->__VtrigSched_h2f7690cb__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_SA_core.clk)", 
                                                       "tb/tb_SA_core.sv", 
                                                       65);
    co_await vlSelf->__VtrigSched_h2f7690cb__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_SA_core.clk)", 
                                                       "tb/tb_SA_core.sv", 
                                                       65);
    co_await vlSelf->__VtrigSched_h2f7690cb__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_SA_core.clk)", 
                                                       "tb/tb_SA_core.sv", 
                                                       65);
    vlSelf->tb_SA_core__DOT__rst_n = 1U;
    tb_SA_core__DOT__test = 0U;
    while (VL_GTS_III(32, 0xaU, tb_SA_core__DOT__test)) {
        co_await vlSelf->__VtrigSched_h2f7690cb__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_SA_core.clk)", 
                                                           "tb/tb_SA_core.sv", 
                                                           71);
        vlSelf->tb_SA_core__DOT__tmp_A_in = (0xffU 
                                             & VL_URANDOM_RANGE_I(0xfffffffcU, 4U));
        vlSelf->tb_SA_core__DOT__tmp_B_in = (0xffU 
                                             & VL_URANDOM_RANGE_I(0xfffffffcU, 4U));
        vlSelf->tb_SA_core__DOT____Vlvbound_h028fe111__0 
            = vlSelf->tb_SA_core__DOT__tmp_A_in;
        vlSelf->tb_SA_core__DOT__A_in[0U][0U] = vlSelf->tb_SA_core__DOT____Vlvbound_h028fe111__0;
        vlSelf->tb_SA_core__DOT____Vlvbound_h2f370f39__0 
            = vlSelf->tb_SA_core__DOT__tmp_B_in;
        vlSelf->tb_SA_core__DOT__B_in[0U][0U] = vlSelf->tb_SA_core__DOT____Vlvbound_h2f370f39__0;
        vlSelf->tb_SA_core__DOT__tmp_A_in = (0xffU 
                                             & VL_URANDOM_RANGE_I(0xfffffffcU, 4U));
        vlSelf->tb_SA_core__DOT__tmp_B_in = (0xffU 
                                             & VL_URANDOM_RANGE_I(0xfffffffcU, 4U));
        vlSelf->tb_SA_core__DOT____Vlvbound_h028fe111__0 
            = vlSelf->tb_SA_core__DOT__tmp_A_in;
        vlSelf->tb_SA_core__DOT__A_in[0U][1U] = vlSelf->tb_SA_core__DOT____Vlvbound_h028fe111__0;
        vlSelf->tb_SA_core__DOT____Vlvbound_h2f370f39__0 
            = vlSelf->tb_SA_core__DOT__tmp_B_in;
        vlSelf->tb_SA_core__DOT__B_in[0U][1U] = vlSelf->tb_SA_core__DOT____Vlvbound_h2f370f39__0;
        vlSelf->tb_SA_core__DOT__tmp_A_in = (0xffU 
                                             & VL_URANDOM_RANGE_I(0xfffffffcU, 4U));
        vlSelf->tb_SA_core__DOT__tmp_B_in = (0xffU 
                                             & VL_URANDOM_RANGE_I(0xfffffffcU, 4U));
        vlSelf->tb_SA_core__DOT____Vlvbound_h028fe111__0 
            = vlSelf->tb_SA_core__DOT__tmp_A_in;
        vlSelf->tb_SA_core__DOT__A_in[0U][2U] = vlSelf->tb_SA_core__DOT____Vlvbound_h028fe111__0;
        vlSelf->tb_SA_core__DOT____Vlvbound_h2f370f39__0 
            = vlSelf->tb_SA_core__DOT__tmp_B_in;
        vlSelf->tb_SA_core__DOT__B_in[0U][2U] = vlSelf->tb_SA_core__DOT____Vlvbound_h2f370f39__0;
        vlSelf->tb_SA_core__DOT__tmp_A_in = (0xffU 
                                             & VL_URANDOM_RANGE_I(0xfffffffcU, 4U));
        vlSelf->tb_SA_core__DOT__tmp_B_in = (0xffU 
                                             & VL_URANDOM_RANGE_I(0xfffffffcU, 4U));
        vlSelf->tb_SA_core__DOT____Vlvbound_h028fe111__0 
            = vlSelf->tb_SA_core__DOT__tmp_A_in;
        vlSelf->tb_SA_core__DOT__A_in[1U][0U] = vlSelf->tb_SA_core__DOT____Vlvbound_h028fe111__0;
        vlSelf->tb_SA_core__DOT____Vlvbound_h2f370f39__0 
            = vlSelf->tb_SA_core__DOT__tmp_B_in;
        vlSelf->tb_SA_core__DOT__B_in[1U][0U] = vlSelf->tb_SA_core__DOT____Vlvbound_h2f370f39__0;
        vlSelf->tb_SA_core__DOT__tmp_A_in = (0xffU 
                                             & VL_URANDOM_RANGE_I(0xfffffffcU, 4U));
        vlSelf->tb_SA_core__DOT__tmp_B_in = (0xffU 
                                             & VL_URANDOM_RANGE_I(0xfffffffcU, 4U));
        vlSelf->tb_SA_core__DOT____Vlvbound_h028fe111__0 
            = vlSelf->tb_SA_core__DOT__tmp_A_in;
        vlSelf->tb_SA_core__DOT__A_in[1U][1U] = vlSelf->tb_SA_core__DOT____Vlvbound_h028fe111__0;
        vlSelf->tb_SA_core__DOT____Vlvbound_h2f370f39__0 
            = vlSelf->tb_SA_core__DOT__tmp_B_in;
        vlSelf->tb_SA_core__DOT__B_in[1U][1U] = vlSelf->tb_SA_core__DOT____Vlvbound_h2f370f39__0;
        vlSelf->tb_SA_core__DOT__tmp_A_in = (0xffU 
                                             & VL_URANDOM_RANGE_I(0xfffffffcU, 4U));
        vlSelf->tb_SA_core__DOT__tmp_B_in = (0xffU 
                                             & VL_URANDOM_RANGE_I(0xfffffffcU, 4U));
        vlSelf->tb_SA_core__DOT____Vlvbound_h028fe111__0 
            = vlSelf->tb_SA_core__DOT__tmp_A_in;
        vlSelf->tb_SA_core__DOT__A_in[1U][2U] = vlSelf->tb_SA_core__DOT____Vlvbound_h028fe111__0;
        vlSelf->tb_SA_core__DOT____Vlvbound_h2f370f39__0 
            = vlSelf->tb_SA_core__DOT__tmp_B_in;
        vlSelf->tb_SA_core__DOT__B_in[1U][2U] = vlSelf->tb_SA_core__DOT____Vlvbound_h2f370f39__0;
        vlSelf->tb_SA_core__DOT__tmp_A_in = (0xffU 
                                             & VL_URANDOM_RANGE_I(0xfffffffcU, 4U));
        vlSelf->tb_SA_core__DOT__tmp_B_in = (0xffU 
                                             & VL_URANDOM_RANGE_I(0xfffffffcU, 4U));
        vlSelf->tb_SA_core__DOT____Vlvbound_h028fe111__0 
            = vlSelf->tb_SA_core__DOT__tmp_A_in;
        vlSelf->tb_SA_core__DOT__A_in[2U][0U] = vlSelf->tb_SA_core__DOT____Vlvbound_h028fe111__0;
        vlSelf->tb_SA_core__DOT____Vlvbound_h2f370f39__0 
            = vlSelf->tb_SA_core__DOT__tmp_B_in;
        vlSelf->tb_SA_core__DOT__B_in[2U][0U] = vlSelf->tb_SA_core__DOT____Vlvbound_h2f370f39__0;
        vlSelf->tb_SA_core__DOT__tmp_A_in = (0xffU 
                                             & VL_URANDOM_RANGE_I(0xfffffffcU, 4U));
        vlSelf->tb_SA_core__DOT__tmp_B_in = (0xffU 
                                             & VL_URANDOM_RANGE_I(0xfffffffcU, 4U));
        vlSelf->tb_SA_core__DOT____Vlvbound_h028fe111__0 
            = vlSelf->tb_SA_core__DOT__tmp_A_in;
        vlSelf->tb_SA_core__DOT__A_in[2U][1U] = vlSelf->tb_SA_core__DOT____Vlvbound_h028fe111__0;
        vlSelf->tb_SA_core__DOT____Vlvbound_h2f370f39__0 
            = vlSelf->tb_SA_core__DOT__tmp_B_in;
        vlSelf->tb_SA_core__DOT__B_in[2U][1U] = vlSelf->tb_SA_core__DOT____Vlvbound_h2f370f39__0;
        vlSelf->tb_SA_core__DOT__tmp_A_in = (0xffU 
                                             & VL_URANDOM_RANGE_I(0xfffffffcU, 4U));
        vlSelf->tb_SA_core__DOT__tmp_B_in = (0xffU 
                                             & VL_URANDOM_RANGE_I(0xfffffffcU, 4U));
        vlSelf->tb_SA_core__DOT____Vlvbound_h028fe111__0 
            = vlSelf->tb_SA_core__DOT__tmp_A_in;
        vlSelf->tb_SA_core__DOT__A_in[2U][2U] = vlSelf->tb_SA_core__DOT____Vlvbound_h028fe111__0;
        vlSelf->tb_SA_core__DOT____Vlvbound_h2f370f39__0 
            = vlSelf->tb_SA_core__DOT__tmp_B_in;
        vlSelf->tb_SA_core__DOT__B_in[2U][2U] = vlSelf->tb_SA_core__DOT____Vlvbound_h2f370f39__0;
        vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__0 = 0U;
        vlSelf->tb_SA_core__DOT__ACC_ref[0U][0U] = vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__0;
        vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__1 
            = (vlSelf->tb_SA_core__DOT__ACC_ref[0U]
               [0U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->tb_SA_core__DOT__A_in
                                                    [0U]
                                                    [0U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->tb_SA_core__DOT__B_in
                                                [0U]
                                                [0U])));
        vlSelf->tb_SA_core__DOT__ACC_ref[0U][0U] = vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__1;
        vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__1 
            = (vlSelf->tb_SA_core__DOT__ACC_ref[0U]
               [0U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->tb_SA_core__DOT__A_in
                                                    [0U]
                                                    [1U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->tb_SA_core__DOT__B_in
                                                [1U]
                                                [0U])));
        vlSelf->tb_SA_core__DOT__ACC_ref[0U][0U] = vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__1;
        vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__1 
            = (vlSelf->tb_SA_core__DOT__ACC_ref[0U]
               [0U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->tb_SA_core__DOT__A_in
                                                    [0U]
                                                    [2U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->tb_SA_core__DOT__B_in
                                                [2U]
                                                [0U])));
        vlSelf->tb_SA_core__DOT__ACC_ref[0U][0U] = vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__1;
        vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__0 = 0U;
        vlSelf->tb_SA_core__DOT__ACC_ref[0U][1U] = vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__0;
        vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__1 
            = (vlSelf->tb_SA_core__DOT__ACC_ref[0U]
               [1U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->tb_SA_core__DOT__A_in
                                                    [0U]
                                                    [0U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->tb_SA_core__DOT__B_in
                                                [0U]
                                                [1U])));
        vlSelf->tb_SA_core__DOT__ACC_ref[0U][1U] = vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__1;
        vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__1 
            = (vlSelf->tb_SA_core__DOT__ACC_ref[0U]
               [1U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->tb_SA_core__DOT__A_in
                                                    [0U]
                                                    [1U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->tb_SA_core__DOT__B_in
                                                [1U]
                                                [1U])));
        vlSelf->tb_SA_core__DOT__ACC_ref[0U][1U] = vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__1;
        vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__1 
            = (vlSelf->tb_SA_core__DOT__ACC_ref[0U]
               [1U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->tb_SA_core__DOT__A_in
                                                    [0U]
                                                    [2U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->tb_SA_core__DOT__B_in
                                                [2U]
                                                [1U])));
        vlSelf->tb_SA_core__DOT__ACC_ref[0U][1U] = vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__1;
        vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__0 = 0U;
        vlSelf->tb_SA_core__DOT__ACC_ref[0U][2U] = vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__0;
        vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__1 
            = (vlSelf->tb_SA_core__DOT__ACC_ref[0U]
               [2U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->tb_SA_core__DOT__A_in
                                                    [0U]
                                                    [0U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->tb_SA_core__DOT__B_in
                                                [0U]
                                                [2U])));
        vlSelf->tb_SA_core__DOT__ACC_ref[0U][2U] = vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__1;
        vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__1 
            = (vlSelf->tb_SA_core__DOT__ACC_ref[0U]
               [2U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->tb_SA_core__DOT__A_in
                                                    [0U]
                                                    [1U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->tb_SA_core__DOT__B_in
                                                [1U]
                                                [2U])));
        vlSelf->tb_SA_core__DOT__ACC_ref[0U][2U] = vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__1;
        vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__1 
            = (vlSelf->tb_SA_core__DOT__ACC_ref[0U]
               [2U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->tb_SA_core__DOT__A_in
                                                    [0U]
                                                    [2U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->tb_SA_core__DOT__B_in
                                                [2U]
                                                [2U])));
        vlSelf->tb_SA_core__DOT__ACC_ref[0U][2U] = vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__1;
        vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__0 = 0U;
        vlSelf->tb_SA_core__DOT__ACC_ref[1U][0U] = vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__0;
        vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__1 
            = (vlSelf->tb_SA_core__DOT__ACC_ref[1U]
               [0U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->tb_SA_core__DOT__A_in
                                                    [1U]
                                                    [0U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->tb_SA_core__DOT__B_in
                                                [0U]
                                                [0U])));
        vlSelf->tb_SA_core__DOT__ACC_ref[1U][0U] = vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__1;
        vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__1 
            = (vlSelf->tb_SA_core__DOT__ACC_ref[1U]
               [0U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->tb_SA_core__DOT__A_in
                                                    [1U]
                                                    [1U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->tb_SA_core__DOT__B_in
                                                [1U]
                                                [0U])));
        vlSelf->tb_SA_core__DOT__ACC_ref[1U][0U] = vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__1;
        vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__1 
            = (vlSelf->tb_SA_core__DOT__ACC_ref[1U]
               [0U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->tb_SA_core__DOT__A_in
                                                    [1U]
                                                    [2U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->tb_SA_core__DOT__B_in
                                                [2U]
                                                [0U])));
        vlSelf->tb_SA_core__DOT__ACC_ref[1U][0U] = vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__1;
        vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__0 = 0U;
        vlSelf->tb_SA_core__DOT__ACC_ref[1U][1U] = vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__0;
        vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__1 
            = (vlSelf->tb_SA_core__DOT__ACC_ref[1U]
               [1U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->tb_SA_core__DOT__A_in
                                                    [1U]
                                                    [0U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->tb_SA_core__DOT__B_in
                                                [0U]
                                                [1U])));
        vlSelf->tb_SA_core__DOT__ACC_ref[1U][1U] = vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__1;
        vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__1 
            = (vlSelf->tb_SA_core__DOT__ACC_ref[1U]
               [1U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->tb_SA_core__DOT__A_in
                                                    [1U]
                                                    [1U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->tb_SA_core__DOT__B_in
                                                [1U]
                                                [1U])));
        vlSelf->tb_SA_core__DOT__ACC_ref[1U][1U] = vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__1;
        vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__1 
            = (vlSelf->tb_SA_core__DOT__ACC_ref[1U]
               [1U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->tb_SA_core__DOT__A_in
                                                    [1U]
                                                    [2U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->tb_SA_core__DOT__B_in
                                                [2U]
                                                [1U])));
        vlSelf->tb_SA_core__DOT__ACC_ref[1U][1U] = vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__1;
        vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__0 = 0U;
        vlSelf->tb_SA_core__DOT__ACC_ref[1U][2U] = vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__0;
        vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__1 
            = (vlSelf->tb_SA_core__DOT__ACC_ref[1U]
               [2U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->tb_SA_core__DOT__A_in
                                                    [1U]
                                                    [0U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->tb_SA_core__DOT__B_in
                                                [0U]
                                                [2U])));
        vlSelf->tb_SA_core__DOT__ACC_ref[1U][2U] = vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__1;
        vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__1 
            = (vlSelf->tb_SA_core__DOT__ACC_ref[1U]
               [2U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->tb_SA_core__DOT__A_in
                                                    [1U]
                                                    [1U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->tb_SA_core__DOT__B_in
                                                [1U]
                                                [2U])));
        vlSelf->tb_SA_core__DOT__ACC_ref[1U][2U] = vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__1;
        vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__1 
            = (vlSelf->tb_SA_core__DOT__ACC_ref[1U]
               [2U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->tb_SA_core__DOT__A_in
                                                    [1U]
                                                    [2U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->tb_SA_core__DOT__B_in
                                                [2U]
                                                [2U])));
        vlSelf->tb_SA_core__DOT__ACC_ref[1U][2U] = vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__1;
        vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__0 = 0U;
        vlSelf->tb_SA_core__DOT__ACC_ref[2U][0U] = vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__0;
        vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__1 
            = (vlSelf->tb_SA_core__DOT__ACC_ref[2U]
               [0U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->tb_SA_core__DOT__A_in
                                                    [2U]
                                                    [0U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->tb_SA_core__DOT__B_in
                                                [0U]
                                                [0U])));
        vlSelf->tb_SA_core__DOT__ACC_ref[2U][0U] = vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__1;
        vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__1 
            = (vlSelf->tb_SA_core__DOT__ACC_ref[2U]
               [0U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->tb_SA_core__DOT__A_in
                                                    [2U]
                                                    [1U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->tb_SA_core__DOT__B_in
                                                [1U]
                                                [0U])));
        vlSelf->tb_SA_core__DOT__ACC_ref[2U][0U] = vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__1;
        vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__1 
            = (vlSelf->tb_SA_core__DOT__ACC_ref[2U]
               [0U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->tb_SA_core__DOT__A_in
                                                    [2U]
                                                    [2U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->tb_SA_core__DOT__B_in
                                                [2U]
                                                [0U])));
        vlSelf->tb_SA_core__DOT__ACC_ref[2U][0U] = vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__1;
        vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__0 = 0U;
        vlSelf->tb_SA_core__DOT__ACC_ref[2U][1U] = vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__0;
        vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__1 
            = (vlSelf->tb_SA_core__DOT__ACC_ref[2U]
               [1U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->tb_SA_core__DOT__A_in
                                                    [2U]
                                                    [0U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->tb_SA_core__DOT__B_in
                                                [0U]
                                                [1U])));
        vlSelf->tb_SA_core__DOT__ACC_ref[2U][1U] = vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__1;
        vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__1 
            = (vlSelf->tb_SA_core__DOT__ACC_ref[2U]
               [1U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->tb_SA_core__DOT__A_in
                                                    [2U]
                                                    [1U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->tb_SA_core__DOT__B_in
                                                [1U]
                                                [1U])));
        vlSelf->tb_SA_core__DOT__ACC_ref[2U][1U] = vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__1;
        vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__1 
            = (vlSelf->tb_SA_core__DOT__ACC_ref[2U]
               [1U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->tb_SA_core__DOT__A_in
                                                    [2U]
                                                    [2U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->tb_SA_core__DOT__B_in
                                                [2U]
                                                [1U])));
        vlSelf->tb_SA_core__DOT__ACC_ref[2U][1U] = vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__1;
        vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__0 = 0U;
        vlSelf->tb_SA_core__DOT__ACC_ref[2U][2U] = vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__0;
        vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__1 
            = (vlSelf->tb_SA_core__DOT__ACC_ref[2U]
               [2U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->tb_SA_core__DOT__A_in
                                                    [2U]
                                                    [0U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->tb_SA_core__DOT__B_in
                                                [0U]
                                                [2U])));
        vlSelf->tb_SA_core__DOT__ACC_ref[2U][2U] = vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__1;
        vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__1 
            = (vlSelf->tb_SA_core__DOT__ACC_ref[2U]
               [2U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->tb_SA_core__DOT__A_in
                                                    [2U]
                                                    [1U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->tb_SA_core__DOT__B_in
                                                [1U]
                                                [2U])));
        vlSelf->tb_SA_core__DOT__ACC_ref[2U][2U] = vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__1;
        vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__1 
            = (vlSelf->tb_SA_core__DOT__ACC_ref[2U]
               [2U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->tb_SA_core__DOT__A_in
                                                    [2U]
                                                    [2U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->tb_SA_core__DOT__B_in
                                                [2U]
                                                [2U])));
        vlSelf->tb_SA_core__DOT__ACC_ref[2U][2U] = vlSelf->tb_SA_core__DOT____Vlvbound_h005cfd1f__1;
        vlSelf->tb_SA_core__DOT____Vlvbound_h428a44c6__1 
            = vlSelf->tb_SA_core__DOT__A_in[0U][0U];
        vlSelf->tb_SA_core__DOT__A_mem[0U][0U] = vlSelf->tb_SA_core__DOT____Vlvbound_h428a44c6__1;
        vlSelf->tb_SA_core__DOT____Vlvbound_hef0423fa__1 
            = vlSelf->tb_SA_core__DOT__B_in[0U][0U];
        vlSelf->tb_SA_core__DOT__B_mem[0U][0U] = vlSelf->tb_SA_core__DOT____Vlvbound_hef0423fa__1;
        vlSelf->tb_SA_core__DOT____Vlvbound_h428a44c6__1 
            = vlSelf->tb_SA_core__DOT__A_in[0U][1U];
        vlSelf->tb_SA_core__DOT__A_mem[0U][1U] = vlSelf->tb_SA_core__DOT____Vlvbound_h428a44c6__1;
        vlSelf->tb_SA_core__DOT____Vlvbound_hef0423fa__1 
            = vlSelf->tb_SA_core__DOT__B_in[0U][1U];
        vlSelf->tb_SA_core__DOT__B_mem[0U][1U] = vlSelf->tb_SA_core__DOT____Vlvbound_hef0423fa__1;
        vlSelf->tb_SA_core__DOT____Vlvbound_h428a44c6__1 
            = vlSelf->tb_SA_core__DOT__A_in[0U][2U];
        vlSelf->tb_SA_core__DOT__A_mem[0U][2U] = vlSelf->tb_SA_core__DOT____Vlvbound_h428a44c6__1;
        vlSelf->tb_SA_core__DOT____Vlvbound_hef0423fa__1 
            = vlSelf->tb_SA_core__DOT__B_in[0U][2U];
        vlSelf->tb_SA_core__DOT__B_mem[0U][2U] = vlSelf->tb_SA_core__DOT____Vlvbound_hef0423fa__1;
        vlSelf->tb_SA_core__DOT____Vlvbound_h428a44c6__1 
            = vlSelf->tb_SA_core__DOT__A_in[1U][0U];
        vlSelf->tb_SA_core__DOT__A_mem[1U][0U] = vlSelf->tb_SA_core__DOT____Vlvbound_h428a44c6__1;
        vlSelf->tb_SA_core__DOT____Vlvbound_hef0423fa__1 
            = vlSelf->tb_SA_core__DOT__B_in[1U][0U];
        vlSelf->tb_SA_core__DOT__B_mem[1U][0U] = vlSelf->tb_SA_core__DOT____Vlvbound_hef0423fa__1;
        vlSelf->tb_SA_core__DOT____Vlvbound_h428a44c6__1 
            = vlSelf->tb_SA_core__DOT__A_in[1U][1U];
        vlSelf->tb_SA_core__DOT__A_mem[1U][1U] = vlSelf->tb_SA_core__DOT____Vlvbound_h428a44c6__1;
        vlSelf->tb_SA_core__DOT____Vlvbound_hef0423fa__1 
            = vlSelf->tb_SA_core__DOT__B_in[1U][1U];
        vlSelf->tb_SA_core__DOT__B_mem[1U][1U] = vlSelf->tb_SA_core__DOT____Vlvbound_hef0423fa__1;
        vlSelf->tb_SA_core__DOT____Vlvbound_h428a44c6__1 
            = vlSelf->tb_SA_core__DOT__A_in[1U][2U];
        vlSelf->tb_SA_core__DOT__A_mem[1U][2U] = vlSelf->tb_SA_core__DOT____Vlvbound_h428a44c6__1;
        vlSelf->tb_SA_core__DOT____Vlvbound_hef0423fa__1 
            = vlSelf->tb_SA_core__DOT__B_in[1U][2U];
        vlSelf->tb_SA_core__DOT__B_mem[1U][2U] = vlSelf->tb_SA_core__DOT____Vlvbound_hef0423fa__1;
        vlSelf->tb_SA_core__DOT____Vlvbound_h428a44c6__1 
            = vlSelf->tb_SA_core__DOT__A_in[2U][0U];
        vlSelf->tb_SA_core__DOT__A_mem[2U][0U] = vlSelf->tb_SA_core__DOT____Vlvbound_h428a44c6__1;
        vlSelf->tb_SA_core__DOT____Vlvbound_hef0423fa__1 
            = vlSelf->tb_SA_core__DOT__B_in[2U][0U];
        vlSelf->tb_SA_core__DOT__B_mem[2U][0U] = vlSelf->tb_SA_core__DOT____Vlvbound_hef0423fa__1;
        vlSelf->tb_SA_core__DOT____Vlvbound_h428a44c6__1 
            = vlSelf->tb_SA_core__DOT__A_in[2U][1U];
        vlSelf->tb_SA_core__DOT__A_mem[2U][1U] = vlSelf->tb_SA_core__DOT____Vlvbound_h428a44c6__1;
        vlSelf->tb_SA_core__DOT____Vlvbound_hef0423fa__1 
            = vlSelf->tb_SA_core__DOT__B_in[2U][1U];
        vlSelf->tb_SA_core__DOT__B_mem[2U][1U] = vlSelf->tb_SA_core__DOT____Vlvbound_hef0423fa__1;
        vlSelf->tb_SA_core__DOT____Vlvbound_h428a44c6__1 
            = vlSelf->tb_SA_core__DOT__A_in[2U][2U];
        vlSelf->tb_SA_core__DOT__A_mem[2U][2U] = vlSelf->tb_SA_core__DOT____Vlvbound_h428a44c6__1;
        vlSelf->tb_SA_core__DOT____Vlvbound_hef0423fa__1 
            = vlSelf->tb_SA_core__DOT__B_in[2U][2U];
        vlSelf->tb_SA_core__DOT__B_mem[2U][2U] = vlSelf->tb_SA_core__DOT____Vlvbound_hef0423fa__1;
        co_await vlSelf->__VtrigSched_h2f7690cb__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_SA_core.clk)", 
                                                           "tb/tb_SA_core.sv", 
                                                           90);
        vlSelf->tb_SA_core__DOT__start = 1U;
        co_await vlSelf->__VtrigSched_h2f7690cb__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_SA_core.clk)", 
                                                           "tb/tb_SA_core.sv", 
                                                           92);
        vlSelf->tb_SA_core__DOT__start = 0U;
        while ((1U & (~ (IData)(vlSelf->tb_SA_core__DOT__done)))) {
            co_await vlSelf->__VtrigSched_h904c2890__0.trigger(1U, 
                                                               nullptr, 
                                                               "@([changed] tb_SA_core.done)", 
                                                               "tb/tb_SA_core.sv", 
                                                               96);
        }
        co_await vlSelf->__VtrigSched_h2f7690cb__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_SA_core.clk)", 
                                                           "tb/tb_SA_core.sv", 
                                                           98);
        co_await vlSelf->__VtrigSched_h2f7690cb__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_SA_core.clk)", 
                                                           "tb/tb_SA_core.sv", 
                                                           98);
        co_await vlSelf->__VtrigSched_h2f7690cb__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_SA_core.clk)", 
                                                           "tb/tb_SA_core.sv", 
                                                           98);
        co_await vlSelf->__VtrigSched_h2f7690cb__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_SA_core.clk)", 
                                                           "tb/tb_SA_core.sv", 
                                                           98);
        co_await vlSelf->__VtrigSched_h2f7690cb__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_SA_core.clk)", 
                                                           "tb/tb_SA_core.sv", 
                                                           98);
        co_await vlSelf->__VtrigSched_h2f7690cb__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_SA_core.clk)", 
                                                           "tb/tb_SA_core.sv", 
                                                           98);
        vlSelf->tb_SA_core__DOT__mismatch = 0U;
        if ((vlSelf->tb_SA_core__DOT__C_out[0U][0U] 
             != vlSelf->tb_SA_core__DOT__ACC_ref[0U]
             [0U])) {
            vlSelf->tb_SA_core__DOT__mismatch = 1U;
        }
        if ((vlSelf->tb_SA_core__DOT__C_out[0U][1U] 
             != vlSelf->tb_SA_core__DOT__ACC_ref[0U]
             [1U])) {
            vlSelf->tb_SA_core__DOT__mismatch = 1U;
        }
        if ((vlSelf->tb_SA_core__DOT__C_out[0U][2U] 
             != vlSelf->tb_SA_core__DOT__ACC_ref[0U]
             [2U])) {
            vlSelf->tb_SA_core__DOT__mismatch = 1U;
        }
        if ((vlSelf->tb_SA_core__DOT__C_out[1U][0U] 
             != vlSelf->tb_SA_core__DOT__ACC_ref[1U]
             [0U])) {
            vlSelf->tb_SA_core__DOT__mismatch = 1U;
        }
        if ((vlSelf->tb_SA_core__DOT__C_out[1U][1U] 
             != vlSelf->tb_SA_core__DOT__ACC_ref[1U]
             [1U])) {
            vlSelf->tb_SA_core__DOT__mismatch = 1U;
        }
        if ((vlSelf->tb_SA_core__DOT__C_out[1U][2U] 
             != vlSelf->tb_SA_core__DOT__ACC_ref[1U]
             [2U])) {
            vlSelf->tb_SA_core__DOT__mismatch = 1U;
        }
        if ((vlSelf->tb_SA_core__DOT__C_out[2U][0U] 
             != vlSelf->tb_SA_core__DOT__ACC_ref[2U]
             [0U])) {
            vlSelf->tb_SA_core__DOT__mismatch = 1U;
        }
        if ((vlSelf->tb_SA_core__DOT__C_out[2U][1U] 
             != vlSelf->tb_SA_core__DOT__ACC_ref[2U]
             [1U])) {
            vlSelf->tb_SA_core__DOT__mismatch = 1U;
        }
        if ((vlSelf->tb_SA_core__DOT__C_out[2U][2U] 
             != vlSelf->tb_SA_core__DOT__ACC_ref[2U]
             [2U])) {
            vlSelf->tb_SA_core__DOT__mismatch = 1U;
        }
        if (VL_UNLIKELY(vlSelf->tb_SA_core__DOT__mismatch)) {
            VL_WRITEF("Test failed\n");
            VL_FINISH_MT("tb/tb_SA_core.sv", 111, "");
        } else {
            VL_WRITEF("Test passed\n");
        }
        tb_SA_core__DOT__test = ((IData)(1U) + tb_SA_core__DOT__test);
    }
    VL_WRITEF("All tests are passed\n");
    co_await vlSelf->__VdlySched.delay(0x4e20ULL, nullptr, 
                                       "tb/tb_SA_core.sv", 
                                       120);
    VL_FINISH_MT("tb/tb_SA_core.sv", 121, "");
}

VL_INLINE_OPT VlCoroutine Vtb_SA_core___024root___eval_initial__TOP__Vtiming__1(Vtb_SA_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_SA_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SA_core___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "tb/tb_SA_core.sv", 
                                           36);
        vlSelf->__Vdlyvval__tb_SA_core__DOT__clk__v0 
            = (1U & (~ (IData)(vlSelf->tb_SA_core__DOT__clk)));
        vlSelf->__Vdlyvset__tb_SA_core__DOT__clk__v0 = 1U;
    }
}

VL_INLINE_OPT void Vtb_SA_core___024root___act_comb__TOP__0(Vtb_SA_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_SA_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SA_core___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_SA_core__DOT__dut__DOT__next_state = vlSelf->tb_SA_core__DOT__dut__DOT__state;
    if ((0U == (IData)(vlSelf->tb_SA_core__DOT__dut__DOT__state))) {
        if (vlSelf->tb_SA_core__DOT__start) {
            vlSelf->tb_SA_core__DOT__dut__DOT__next_state = 1U;
        }
    } else if ((1U == (IData)(vlSelf->tb_SA_core__DOT__dut__DOT__state))) {
        if ((4U == vlSelf->tb_SA_core__DOT__dut__DOT__t)) {
            vlSelf->tb_SA_core__DOT__dut__DOT__next_state = 2U;
        }
    } else if ((2U == (IData)(vlSelf->tb_SA_core__DOT__dut__DOT__state))) {
        if ((2U == vlSelf->tb_SA_core__DOT__dut__DOT__drain_t)) {
            vlSelf->tb_SA_core__DOT__dut__DOT__next_state = 0U;
        }
    } else {
        vlSelf->tb_SA_core__DOT__dut__DOT__next_state = 0U;
    }
}

void Vtb_SA_core___024root___eval_act(Vtb_SA_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_SA_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SA_core___024root___eval_act\n"); );
    // Body
    if ((7ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_SA_core___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_SA_core___024root___nba_sequent__TOP__0(Vtb_SA_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_SA_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SA_core___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vdly__tb_SA_core__DOT__dut__DOT__t;
    __Vdly__tb_SA_core__DOT__dut__DOT__t = 0;
    IData/*31:0*/ __Vdly__tb_SA_core__DOT__dut__DOT__drain_t;
    __Vdly__tb_SA_core__DOT__dut__DOT__drain_t = 0;
    // Body
    __Vdly__tb_SA_core__DOT__dut__DOT__drain_t = vlSelf->tb_SA_core__DOT__dut__DOT__drain_t;
    __Vdly__tb_SA_core__DOT__dut__DOT__t = vlSelf->tb_SA_core__DOT__dut__DOT__t;
    if (vlSelf->tb_SA_core__DOT__rst_n) {
        if (vlSelf->tb_SA_core__DOT__dut__DOT__en) {
            vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__pe_ij__acc_out 
                = (vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__pe_ij__acc_out 
                   + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                   vlSelf->tb_SA_core__DOT__dut__DOT__a_in
                                                   [0U]), 
                                 VL_EXTENDS_II(32,8, 
                                               vlSelf->tb_SA_core__DOT__dut__DOT__b_in
                                               [0U])));
            vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__0__KET____DOT__pe_ij__acc_out 
                = (vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__0__KET____DOT__pe_ij__acc_out 
                   + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                   vlSelf->tb_SA_core__DOT__dut__DOT__a_in
                                                   [2U]), 
                                 VL_EXTENDS_II(32,8, 
                                               vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__b_pipe
                                               [1U]
                                               [0U])));
            vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__0__KET____DOT__pe_ij__acc_out 
                = (vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__0__KET____DOT__pe_ij__acc_out 
                   + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                   vlSelf->tb_SA_core__DOT__dut__DOT__a_in
                                                   [1U]), 
                                 VL_EXTENDS_II(32,8, 
                                               vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__b_pipe
                                               [0U]
                                               [0U])));
            vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__2__KET____DOT__pe_ij__acc_out 
                = (vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__2__KET____DOT__pe_ij__acc_out 
                   + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                   vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__a_pipe
                                                   [0U]
                                                   [1U]), 
                                 VL_EXTENDS_II(32,8, 
                                               vlSelf->tb_SA_core__DOT__dut__DOT__b_in
                                               [2U])));
            vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__1__KET____DOT__pe_ij__acc_out 
                = (vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__1__KET____DOT__pe_ij__acc_out 
                   + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                   vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__a_pipe
                                                   [0U]
                                                   [0U]), 
                                 VL_EXTENDS_II(32,8, 
                                               vlSelf->tb_SA_core__DOT__dut__DOT__b_in
                                               [1U])));
            vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__2__KET____DOT__pe_ij__acc_out 
                = (vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__2__KET____DOT__pe_ij__acc_out 
                   + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                   vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__a_pipe
                                                   [2U]
                                                   [1U]), 
                                 VL_EXTENDS_II(32,8, 
                                               vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__b_pipe
                                               [1U]
                                               [2U])));
            vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__1__KET____DOT__pe_ij__acc_out 
                = (vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__1__KET____DOT__pe_ij__acc_out 
                   + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                   vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__a_pipe
                                                   [2U]
                                                   [0U]), 
                                 VL_EXTENDS_II(32,8, 
                                               vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__b_pipe
                                               [1U]
                                               [1U])));
            vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__2__KET____DOT__pe_ij__acc_out 
                = (vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__2__KET____DOT__pe_ij__acc_out 
                   + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                   vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__a_pipe
                                                   [1U]
                                                   [1U]), 
                                 VL_EXTENDS_II(32,8, 
                                               vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__b_pipe
                                               [0U]
                                               [2U])));
            vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__1__KET____DOT__pe_ij__acc_out 
                = (vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__1__KET____DOT__pe_ij__acc_out 
                   + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                   vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__a_pipe
                                                   [1U]
                                                   [0U]), 
                                 VL_EXTENDS_II(32,8, 
                                               vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__b_pipe
                                               [0U]
                                               [1U])));
        }
        if (((1U == (IData)(vlSelf->tb_SA_core__DOT__dut__DOT__state)) 
             & (2U == (IData)(vlSelf->tb_SA_core__DOT__dut__DOT__next_state)))) {
            __Vdly__tb_SA_core__DOT__dut__DOT__drain_t = 0U;
        } else if ((2U == (IData)(vlSelf->tb_SA_core__DOT__dut__DOT__state))) {
            __Vdly__tb_SA_core__DOT__dut__DOT__drain_t 
                = ((IData)(1U) + vlSelf->tb_SA_core__DOT__dut__DOT__drain_t);
        }
        if (((0U == (IData)(vlSelf->tb_SA_core__DOT__dut__DOT__state)) 
             & (1U == (IData)(vlSelf->tb_SA_core__DOT__dut__DOT__next_state)))) {
            __Vdly__tb_SA_core__DOT__dut__DOT__t = 0U;
        } else if ((1U == (IData)(vlSelf->tb_SA_core__DOT__dut__DOT__state))) {
            __Vdly__tb_SA_core__DOT__dut__DOT__t = 
                ((IData)(1U) + vlSelf->tb_SA_core__DOT__dut__DOT__t);
        }
        vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__0__KET____DOT__pe_ij__a_out 
            = vlSelf->tb_SA_core__DOT__dut__DOT__a_in
            [2U];
        vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__0__KET____DOT__pe_ij__a_out 
            = vlSelf->tb_SA_core__DOT__dut__DOT__a_in
            [1U];
        vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__2__KET____DOT__pe_ij__b_out 
            = vlSelf->tb_SA_core__DOT__dut__DOT__b_in
            [2U];
        vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__1__KET____DOT__pe_ij__b_out 
            = vlSelf->tb_SA_core__DOT__dut__DOT__b_in
            [1U];
        vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__pe_ij__b_out 
            = vlSelf->tb_SA_core__DOT__dut__DOT__b_in
            [0U];
        vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__pe_ij__a_out 
            = vlSelf->tb_SA_core__DOT__dut__DOT__a_in
            [0U];
        vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__2__KET____DOT__pe_ij__b_out 
            = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__b_pipe
            [1U][2U];
        vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__2__KET____DOT__pe_ij__a_out 
            = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__a_pipe
            [2U][1U];
        vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__1__KET____DOT__pe_ij__b_out 
            = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__b_pipe
            [1U][1U];
        vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__1__KET____DOT__pe_ij__a_out 
            = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__a_pipe
            [2U][0U];
        vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__0__KET____DOT__pe_ij__b_out 
            = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__b_pipe
            [1U][0U];
        vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__2__KET____DOT__pe_ij__b_out 
            = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__b_pipe
            [0U][2U];
        vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__2__KET____DOT__pe_ij__a_out 
            = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__a_pipe
            [1U][1U];
        vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__1__KET____DOT__pe_ij__b_out 
            = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__b_pipe
            [0U][1U];
        vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__1__KET____DOT__pe_ij__a_out 
            = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__a_pipe
            [1U][0U];
        vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__0__KET____DOT__pe_ij__b_out 
            = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__b_pipe
            [0U][0U];
        vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__2__KET____DOT__pe_ij__a_out 
            = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__a_pipe
            [0U][1U];
        vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__1__KET____DOT__pe_ij__a_out 
            = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__a_pipe
            [0U][0U];
        vlSelf->tb_SA_core__DOT__dut__DOT__state = vlSelf->tb_SA_core__DOT__dut__DOT__next_state;
    } else {
        vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__pe_ij__acc_out = 0U;
        vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__0__KET____DOT__pe_ij__acc_out = 0U;
        vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__0__KET____DOT__pe_ij__acc_out = 0U;
        vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__2__KET____DOT__pe_ij__acc_out = 0U;
        vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__1__KET____DOT__pe_ij__acc_out = 0U;
        __Vdly__tb_SA_core__DOT__dut__DOT__drain_t = 0U;
        __Vdly__tb_SA_core__DOT__dut__DOT__t = 0U;
        vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__2__KET____DOT__pe_ij__acc_out = 0U;
        vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__1__KET____DOT__pe_ij__acc_out = 0U;
        vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__2__KET____DOT__pe_ij__acc_out = 0U;
        vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__1__KET____DOT__pe_ij__acc_out = 0U;
        vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__0__KET____DOT__pe_ij__a_out = 0U;
        vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__0__KET____DOT__pe_ij__a_out = 0U;
        vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__2__KET____DOT__pe_ij__b_out = 0U;
        vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__1__KET____DOT__pe_ij__b_out = 0U;
        vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__pe_ij__b_out = 0U;
        vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__pe_ij__a_out = 0U;
        vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__2__KET____DOT__pe_ij__b_out = 0U;
        vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__2__KET____DOT__pe_ij__a_out = 0U;
        vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__1__KET____DOT__pe_ij__b_out = 0U;
        vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__1__KET____DOT__pe_ij__a_out = 0U;
        vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__0__KET____DOT__pe_ij__b_out = 0U;
        vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__2__KET____DOT__pe_ij__b_out = 0U;
        vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__2__KET____DOT__pe_ij__a_out = 0U;
        vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__1__KET____DOT__pe_ij__b_out = 0U;
        vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__1__KET____DOT__pe_ij__a_out = 0U;
        vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__0__KET____DOT__pe_ij__b_out = 0U;
        vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__2__KET____DOT__pe_ij__a_out = 0U;
        vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__1__KET____DOT__pe_ij__a_out = 0U;
        vlSelf->tb_SA_core__DOT__dut__DOT__state = 0U;
    }
    vlSelf->tb_SA_core__DOT__dut__DOT__drain_t = __Vdly__tb_SA_core__DOT__dut__DOT__drain_t;
    vlSelf->tb_SA_core__DOT__dut__DOT__t = __Vdly__tb_SA_core__DOT__dut__DOT__t;
    vlSelf->tb_SA_core__DOT__C_out[0U][0U] = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__pe_ij__acc_out;
    vlSelf->tb_SA_core__DOT__C_out[2U][0U] = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__0__KET____DOT__pe_ij__acc_out;
    vlSelf->tb_SA_core__DOT__C_out[1U][0U] = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__0__KET____DOT__pe_ij__acc_out;
    vlSelf->tb_SA_core__DOT__C_out[0U][2U] = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__2__KET____DOT__pe_ij__acc_out;
    vlSelf->tb_SA_core__DOT__C_out[0U][1U] = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__1__KET____DOT__pe_ij__acc_out;
    vlSelf->tb_SA_core__DOT__C_out[2U][2U] = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__2__KET____DOT__pe_ij__acc_out;
    vlSelf->tb_SA_core__DOT__C_out[2U][1U] = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__1__KET____DOT__pe_ij__acc_out;
    vlSelf->tb_SA_core__DOT__C_out[1U][2U] = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__2__KET____DOT__pe_ij__acc_out;
    vlSelf->tb_SA_core__DOT__C_out[1U][1U] = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__1__KET____DOT__pe_ij__acc_out;
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__a_pipe[2U][0U] 
        = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__0__KET____DOT__pe_ij__a_out;
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__a_pipe[1U][0U] 
        = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__0__KET____DOT__pe_ij__a_out;
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__b_pipe[0U][2U] 
        = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__2__KET____DOT__pe_ij__b_out;
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__b_pipe[0U][1U] 
        = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__1__KET____DOT__pe_ij__b_out;
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__b_pipe[0U][0U] 
        = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__pe_ij__b_out;
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__a_pipe[0U][0U] 
        = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__pe_ij__a_out;
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__b_pipe[2U][2U] 
        = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__2__KET____DOT__pe_ij__b_out;
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__a_pipe[2U][2U] 
        = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__2__KET____DOT__pe_ij__a_out;
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__b_pipe[2U][1U] 
        = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__1__KET____DOT__pe_ij__b_out;
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__a_pipe[2U][1U] 
        = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__1__KET____DOT__pe_ij__a_out;
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__b_pipe[2U][0U] 
        = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__0__KET____DOT__pe_ij__b_out;
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__b_pipe[1U][2U] 
        = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__2__KET____DOT__pe_ij__b_out;
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__a_pipe[1U][2U] 
        = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__2__KET____DOT__pe_ij__a_out;
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__b_pipe[1U][1U] 
        = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__1__KET____DOT__pe_ij__b_out;
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__a_pipe[1U][1U] 
        = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__1__KET____DOT__pe_ij__a_out;
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__b_pipe[1U][0U] 
        = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__0__KET____DOT__pe_ij__b_out;
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__a_pipe[0U][2U] 
        = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__2__KET____DOT__pe_ij__a_out;
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__a_pipe[0U][1U] 
        = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__1__KET____DOT__pe_ij__a_out;
    vlSelf->tb_SA_core__DOT__dut__DOT__en = 0U;
    vlSelf->tb_SA_core__DOT__done = 0U;
    vlSelf->tb_SA_core__DOT__dut__DOT__a_in[0U] = 0U;
    vlSelf->tb_SA_core__DOT__dut__DOT__a_in[1U] = 0U;
    vlSelf->tb_SA_core__DOT__dut__DOT__a_in[2U] = 0U;
    vlSelf->tb_SA_core__DOT__dut__DOT__b_in[0U] = 0U;
    vlSelf->tb_SA_core__DOT__dut__DOT__b_in[1U] = 0U;
    vlSelf->tb_SA_core__DOT__dut__DOT__b_in[2U] = 0U;
    if ((0U != (IData)(vlSelf->tb_SA_core__DOT__dut__DOT__state))) {
        if ((1U == (IData)(vlSelf->tb_SA_core__DOT__dut__DOT__state))) {
            vlSelf->tb_SA_core__DOT__dut__DOT__en = 1U;
            vlSelf->tb_SA_core__DOT__dut__DOT__unnamedblk1__DOT__k_idx 
                = vlSelf->tb_SA_core__DOT__dut__DOT__t;
            if ((VL_LTES_III(32, 0U, vlSelf->tb_SA_core__DOT__dut__DOT__unnamedblk1__DOT__k_idx) 
                 & VL_GTS_III(32, 3U, vlSelf->tb_SA_core__DOT__dut__DOT__unnamedblk1__DOT__k_idx))) {
                vlSelf->tb_SA_core__DOT__dut__DOT____Vlvbound_ha66624c1__1 
                    = ((2U >= (3U & vlSelf->tb_SA_core__DOT__dut__DOT__unnamedblk1__DOT__k_idx))
                        ? vlSelf->tb_SA_core__DOT__A_mem
                       [0U][(3U & vlSelf->tb_SA_core__DOT__dut__DOT__unnamedblk1__DOT__k_idx)]
                        : 0U);
                vlSelf->tb_SA_core__DOT__dut__DOT__a_in[0U] 
                    = vlSelf->tb_SA_core__DOT__dut__DOT____Vlvbound_ha66624c1__1;
            } else {
                vlSelf->tb_SA_core__DOT__dut__DOT__a_in[0U] = 0U;
            }
            vlSelf->tb_SA_core__DOT__dut__DOT__unnamedblk1__DOT__k_idx 
                = (vlSelf->tb_SA_core__DOT__dut__DOT__t 
                   - (IData)(1U));
            if ((VL_LTES_III(32, 0U, vlSelf->tb_SA_core__DOT__dut__DOT__unnamedblk1__DOT__k_idx) 
                 & VL_GTS_III(32, 3U, vlSelf->tb_SA_core__DOT__dut__DOT__unnamedblk1__DOT__k_idx))) {
                vlSelf->tb_SA_core__DOT__dut__DOT____Vlvbound_ha66624c1__1 
                    = ((2U >= (3U & vlSelf->tb_SA_core__DOT__dut__DOT__unnamedblk1__DOT__k_idx))
                        ? vlSelf->tb_SA_core__DOT__A_mem
                       [1U][(3U & vlSelf->tb_SA_core__DOT__dut__DOT__unnamedblk1__DOT__k_idx)]
                        : 0U);
                vlSelf->tb_SA_core__DOT__dut__DOT__a_in[1U] 
                    = vlSelf->tb_SA_core__DOT__dut__DOT____Vlvbound_ha66624c1__1;
            } else {
                vlSelf->tb_SA_core__DOT__dut__DOT__a_in[1U] = 0U;
            }
            vlSelf->tb_SA_core__DOT__dut__DOT__unnamedblk1__DOT__k_idx 
                = (vlSelf->tb_SA_core__DOT__dut__DOT__t 
                   - (IData)(2U));
            if ((VL_LTES_III(32, 0U, vlSelf->tb_SA_core__DOT__dut__DOT__unnamedblk1__DOT__k_idx) 
                 & VL_GTS_III(32, 3U, vlSelf->tb_SA_core__DOT__dut__DOT__unnamedblk1__DOT__k_idx))) {
                vlSelf->tb_SA_core__DOT__dut__DOT____Vlvbound_ha66624c1__1 
                    = ((2U >= (3U & vlSelf->tb_SA_core__DOT__dut__DOT__unnamedblk1__DOT__k_idx))
                        ? vlSelf->tb_SA_core__DOT__A_mem
                       [2U][(3U & vlSelf->tb_SA_core__DOT__dut__DOT__unnamedblk1__DOT__k_idx)]
                        : 0U);
                vlSelf->tb_SA_core__DOT__dut__DOT__a_in[2U] 
                    = vlSelf->tb_SA_core__DOT__dut__DOT____Vlvbound_ha66624c1__1;
            } else {
                vlSelf->tb_SA_core__DOT__dut__DOT__a_in[2U] = 0U;
            }
            vlSelf->tb_SA_core__DOT__dut__DOT__unnamedblk2__DOT__k_idx 
                = vlSelf->tb_SA_core__DOT__dut__DOT__t;
            if ((VL_LTES_III(32, 0U, vlSelf->tb_SA_core__DOT__dut__DOT__unnamedblk2__DOT__k_idx) 
                 & VL_GTS_III(32, 3U, vlSelf->tb_SA_core__DOT__dut__DOT__unnamedblk2__DOT__k_idx))) {
                vlSelf->tb_SA_core__DOT__dut__DOT____Vlvbound_h236b139c__0 
                    = vlSelf->tb_SA_core__DOT__B_mem
                    [((2U >= (3U & vlSelf->tb_SA_core__DOT__dut__DOT__unnamedblk2__DOT__k_idx))
                       ? (3U & vlSelf->tb_SA_core__DOT__dut__DOT__unnamedblk2__DOT__k_idx)
                       : 0U)][0U];
                vlSelf->tb_SA_core__DOT__dut__DOT__b_in[0U] 
                    = vlSelf->tb_SA_core__DOT__dut__DOT____Vlvbound_h236b139c__0;
            } else {
                vlSelf->tb_SA_core__DOT__dut__DOT__b_in[0U] = 0U;
            }
            vlSelf->tb_SA_core__DOT__dut__DOT__unnamedblk2__DOT__k_idx 
                = (vlSelf->tb_SA_core__DOT__dut__DOT__t 
                   - (IData)(1U));
            if ((VL_LTES_III(32, 0U, vlSelf->tb_SA_core__DOT__dut__DOT__unnamedblk2__DOT__k_idx) 
                 & VL_GTS_III(32, 3U, vlSelf->tb_SA_core__DOT__dut__DOT__unnamedblk2__DOT__k_idx))) {
                vlSelf->tb_SA_core__DOT__dut__DOT____Vlvbound_h236b139c__0 
                    = vlSelf->tb_SA_core__DOT__B_mem
                    [((2U >= (3U & vlSelf->tb_SA_core__DOT__dut__DOT__unnamedblk2__DOT__k_idx))
                       ? (3U & vlSelf->tb_SA_core__DOT__dut__DOT__unnamedblk2__DOT__k_idx)
                       : 0U)][1U];
                vlSelf->tb_SA_core__DOT__dut__DOT__b_in[1U] 
                    = vlSelf->tb_SA_core__DOT__dut__DOT____Vlvbound_h236b139c__0;
            } else {
                vlSelf->tb_SA_core__DOT__dut__DOT__b_in[1U] = 0U;
            }
            vlSelf->tb_SA_core__DOT__dut__DOT__unnamedblk2__DOT__k_idx 
                = (vlSelf->tb_SA_core__DOT__dut__DOT__t 
                   - (IData)(2U));
            if ((VL_LTES_III(32, 0U, vlSelf->tb_SA_core__DOT__dut__DOT__unnamedblk2__DOT__k_idx) 
                 & VL_GTS_III(32, 3U, vlSelf->tb_SA_core__DOT__dut__DOT__unnamedblk2__DOT__k_idx))) {
                vlSelf->tb_SA_core__DOT__dut__DOT____Vlvbound_h236b139c__0 
                    = vlSelf->tb_SA_core__DOT__B_mem
                    [((2U >= (3U & vlSelf->tb_SA_core__DOT__dut__DOT__unnamedblk2__DOT__k_idx))
                       ? (3U & vlSelf->tb_SA_core__DOT__dut__DOT__unnamedblk2__DOT__k_idx)
                       : 0U)][2U];
                vlSelf->tb_SA_core__DOT__dut__DOT__b_in[2U] 
                    = vlSelf->tb_SA_core__DOT__dut__DOT____Vlvbound_h236b139c__0;
            } else {
                vlSelf->tb_SA_core__DOT__dut__DOT__b_in[2U] = 0U;
            }
        } else if ((2U == (IData)(vlSelf->tb_SA_core__DOT__dut__DOT__state))) {
            vlSelf->tb_SA_core__DOT__dut__DOT__en = 1U;
        }
        if ((1U != (IData)(vlSelf->tb_SA_core__DOT__dut__DOT__state))) {
            if ((2U == (IData)(vlSelf->tb_SA_core__DOT__dut__DOT__state))) {
                if ((2U == vlSelf->tb_SA_core__DOT__dut__DOT__drain_t)) {
                    vlSelf->tb_SA_core__DOT__done = 1U;
                }
            }
        }
    }
}

VL_INLINE_OPT void Vtb_SA_core___024root___nba_sequent__TOP__1(Vtb_SA_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_SA_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SA_core___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->__Vdlyvset__tb_SA_core__DOT__clk__v0) {
        vlSelf->tb_SA_core__DOT__clk = vlSelf->__Vdlyvval__tb_SA_core__DOT__clk__v0;
        vlSelf->__Vdlyvset__tb_SA_core__DOT__clk__v0 = 0U;
    }
}

void Vtb_SA_core___024root___eval_nba(Vtb_SA_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_SA_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SA_core___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_SA_core___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_SA_core___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_SA_core___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vtb_SA_core___024root___timing_resume(Vtb_SA_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_SA_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SA_core___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h2f7690cb__0.resume("@(posedge tb_SA_core.clk)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h904c2890__0.resume("@([changed] tb_SA_core.done)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_SA_core___024root___timing_commit(Vtb_SA_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_SA_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SA_core___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h2f7690cb__0.commit("@(posedge tb_SA_core.clk)");
    }
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h904c2890__0.commit("@([changed] tb_SA_core.done)");
    }
}

void Vtb_SA_core___024root___eval_triggers__act(Vtb_SA_core___024root* vlSelf);

bool Vtb_SA_core___024root___eval_phase__act(Vtb_SA_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_SA_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SA_core___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_SA_core___024root___eval_triggers__act(vlSelf);
    Vtb_SA_core___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_SA_core___024root___timing_resume(vlSelf);
        Vtb_SA_core___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_SA_core___024root___eval_phase__nba(Vtb_SA_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_SA_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SA_core___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_SA_core___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_SA_core___024root___dump_triggers__nba(Vtb_SA_core___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_SA_core___024root___dump_triggers__act(Vtb_SA_core___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_SA_core___024root___eval(Vtb_SA_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_SA_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SA_core___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_SA_core___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_SA_core.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_SA_core___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tb_SA_core.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_SA_core___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_SA_core___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_SA_core___024root___eval_debug_assertions(Vtb_SA_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_SA_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SA_core___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
