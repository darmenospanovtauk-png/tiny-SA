// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_SA.h for the primary calling header

#include "Vtb_SA__pch.h"
#include "Vtb_SA___024root.h"

VL_ATTR_COLD void Vtb_SA___024root___eval_initial__TOP(Vtb_SA___024root* vlSelf);
VlCoroutine Vtb_SA___024root___eval_initial__TOP__Vtiming__0(Vtb_SA___024root* vlSelf);
VlCoroutine Vtb_SA___024root___eval_initial__TOP__Vtiming__1(Vtb_SA___024root* vlSelf);

void Vtb_SA___024root___eval_initial(Vtb_SA___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_SA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SA___024root___eval_initial\n"); );
    // Body
    Vtb_SA___024root___eval_initial__TOP(vlSelf);
    Vtb_SA___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_SA___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_SA__DOT__clk__0 
        = vlSelf->tb_SA__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vtb_SA___024root___eval_initial__TOP__Vtiming__0(Vtb_SA___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_SA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SA___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->tb_SA__DOT__rst_n = 0U;
    vlSelf->tb_SA__DOT__en = 0U;
    vlSelf->tb_SA__DOT__a_in[0U] = 0U;
    vlSelf->tb_SA__DOT__a_in[1U] = 0U;
    vlSelf->tb_SA__DOT__b_in[0U] = 0U;
    vlSelf->tb_SA__DOT__b_in[1U] = 0U;
    co_await vlSelf->__VtrigSched_h34e3e0b0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_SA.clk)", 
                                                       "tb/tb_SA.sv", 
                                                       40);
    co_await vlSelf->__VtrigSched_h34e3e0b0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_SA.clk)", 
                                                       "tb/tb_SA.sv", 
                                                       40);
    co_await vlSelf->__VtrigSched_h34e3e0b0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_SA.clk)", 
                                                       "tb/tb_SA.sv", 
                                                       40);
    vlSelf->tb_SA__DOT__rst_n = 1U;
    co_await vlSelf->__VtrigSched_h34e3e0b0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_SA.clk)", 
                                                       "tb/tb_SA.sv", 
                                                       43);
    vlSelf->tb_SA__DOT__a_in[0U] = 3U;
    vlSelf->tb_SA__DOT__a_in[1U] = 4U;
    vlSelf->tb_SA__DOT__b_in[0U] = 5U;
    vlSelf->tb_SA__DOT__b_in[1U] = 6U;
    vlSelf->tb_SA__DOT__en = 1U;
    co_await vlSelf->__VtrigSched_h34e3e0b0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_SA.clk)", 
                                                       "tb/tb_SA.sv", 
                                                       52);
    VL_WRITEF("t=%0t ns | acc_out_00=0%0d | acc_out_01=0%0d\nt=%0t ns | acc_out_10=0%0d | acc_out_11=0%0d\n",
              64,VL_TIME_UNITED_Q(1000),-9,32,vlSelf->tb_SA__DOT__acc_out
              [0U][0U],32,vlSelf->tb_SA__DOT__acc_out
              [0U][1U],64,VL_TIME_UNITED_Q(1000),-9,
              32,vlSelf->tb_SA__DOT__acc_out[1U][0U],
              32,vlSelf->tb_SA__DOT__acc_out[1U][1U]);
    co_await vlSelf->__VtrigSched_h34e3e0b0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_SA.clk)", 
                                                       "tb/tb_SA.sv", 
                                                       52);
    VL_WRITEF("t=%0t ns | acc_out_00=0%0d | acc_out_01=0%0d\nt=%0t ns | acc_out_10=0%0d | acc_out_11=0%0d\n",
              64,VL_TIME_UNITED_Q(1000),-9,32,vlSelf->tb_SA__DOT__acc_out
              [0U][0U],32,vlSelf->tb_SA__DOT__acc_out
              [0U][1U],64,VL_TIME_UNITED_Q(1000),-9,
              32,vlSelf->tb_SA__DOT__acc_out[1U][0U],
              32,vlSelf->tb_SA__DOT__acc_out[1U][1U]);
    co_await vlSelf->__VtrigSched_h34e3e0b0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_SA.clk)", 
                                                       "tb/tb_SA.sv", 
                                                       52);
    VL_WRITEF("t=%0t ns | acc_out_00=0%0d | acc_out_01=0%0d\nt=%0t ns | acc_out_10=0%0d | acc_out_11=0%0d\n",
              64,VL_TIME_UNITED_Q(1000),-9,32,vlSelf->tb_SA__DOT__acc_out
              [0U][0U],32,vlSelf->tb_SA__DOT__acc_out
              [0U][1U],64,VL_TIME_UNITED_Q(1000),-9,
              32,vlSelf->tb_SA__DOT__acc_out[1U][0U],
              32,vlSelf->tb_SA__DOT__acc_out[1U][1U]);
    co_await vlSelf->__VtrigSched_h34e3e0b0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_SA.clk)", 
                                                       "tb/tb_SA.sv", 
                                                       52);
    VL_WRITEF("t=%0t ns | acc_out_00=0%0d | acc_out_01=0%0d\nt=%0t ns | acc_out_10=0%0d | acc_out_11=0%0d\n",
              64,VL_TIME_UNITED_Q(1000),-9,32,vlSelf->tb_SA__DOT__acc_out
              [0U][0U],32,vlSelf->tb_SA__DOT__acc_out
              [0U][1U],64,VL_TIME_UNITED_Q(1000),-9,
              32,vlSelf->tb_SA__DOT__acc_out[1U][0U],
              32,vlSelf->tb_SA__DOT__acc_out[1U][1U]);
    vlSelf->tb_SA__DOT__en = 0U;
    co_await vlSelf->__VtrigSched_h34e3e0b0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_SA.clk)", 
                                                       "tb/tb_SA.sv", 
                                                       58);
    VL_WRITEF("FINAL: t=%0t ns | acc_out_00=0%0d | acc_out_01=0%0d\nFINAL: t=%0t ns | acc_out_10=0%0d | acc_out_11=0%0d\n",
              64,VL_TIME_UNITED_Q(1000),-9,32,vlSelf->tb_SA__DOT__acc_out
              [0U][0U],32,vlSelf->tb_SA__DOT__acc_out
              [0U][1U],64,VL_TIME_UNITED_Q(1000),-9,
              32,vlSelf->tb_SA__DOT__acc_out[1U][0U],
              32,vlSelf->tb_SA__DOT__acc_out[1U][1U]);
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "tb/tb_SA.sv", 
                                       62);
    VL_FINISH_MT("tb/tb_SA.sv", 63, "");
}

VL_INLINE_OPT VlCoroutine Vtb_SA___024root___eval_initial__TOP__Vtiming__1(Vtb_SA___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_SA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SA___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "tb/tb_SA.sv", 
                                           29);
        vlSelf->__Vdlyvval__tb_SA__DOT__clk__v0 = (1U 
                                                   & (~ (IData)(vlSelf->tb_SA__DOT__clk)));
        vlSelf->__Vdlyvset__tb_SA__DOT__clk__v0 = 1U;
    }
}

void Vtb_SA___024root___eval_act(Vtb_SA___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_SA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SA___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtb_SA___024root___nba_sequent__TOP__0(Vtb_SA___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_SA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SA___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->tb_SA__DOT__rst_n) {
        if (vlSelf->tb_SA__DOT__en) {
            vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_00__acc_out 
                = (vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_00__acc_out 
                   + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                   vlSelf->tb_SA__DOT__a_in
                                                   [0U]), 
                                 VL_EXTENDS_II(32,8, 
                                               vlSelf->tb_SA__DOT__b_in
                                               [0U])));
            vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_10__acc_out 
                = (vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_10__acc_out 
                   + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                   vlSelf->tb_SA__DOT__a_in
                                                   [1U]), 
                                 VL_EXTENDS_II(32,8, 
                                               vlSelf->tb_SA__DOT__dut__DOT__b_pipe
                                               [0U]
                                               [0U])));
            vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_01__acc_out 
                = (vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_01__acc_out 
                   + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                   vlSelf->tb_SA__DOT__dut__DOT__a_pipe
                                                   [0U]
                                                   [0U]), 
                                 VL_EXTENDS_II(32,8, 
                                               vlSelf->tb_SA__DOT__b_in
                                               [1U])));
            vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_11__acc_out 
                = (vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_11__acc_out 
                   + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                   vlSelf->tb_SA__DOT__dut__DOT__a_pipe
                                                   [1U]
                                                   [0U]), 
                                 VL_EXTENDS_II(32,8, 
                                               vlSelf->tb_SA__DOT__dut__DOT__b_pipe
                                               [0U]
                                               [1U])));
        }
        vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_10__a_out 
            = vlSelf->tb_SA__DOT__a_in[1U];
        vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_01__b_out 
            = vlSelf->tb_SA__DOT__b_in[1U];
        vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_00__b_out 
            = vlSelf->tb_SA__DOT__b_in[0U];
        vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_00__a_out 
            = vlSelf->tb_SA__DOT__a_in[0U];
        vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_11__b_out 
            = vlSelf->tb_SA__DOT__dut__DOT__b_pipe[0U]
            [1U];
        vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_11__a_out 
            = vlSelf->tb_SA__DOT__dut__DOT__a_pipe[1U]
            [0U];
        vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_10__b_out 
            = vlSelf->tb_SA__DOT__dut__DOT__b_pipe[0U]
            [0U];
        vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_01__a_out 
            = vlSelf->tb_SA__DOT__dut__DOT__a_pipe[0U]
            [0U];
    } else {
        vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_00__acc_out = 0U;
        vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_10__acc_out = 0U;
        vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_01__acc_out = 0U;
        vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_11__acc_out = 0U;
        vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_10__a_out = 0U;
        vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_01__b_out = 0U;
        vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_00__b_out = 0U;
        vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_00__a_out = 0U;
        vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_11__b_out = 0U;
        vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_11__a_out = 0U;
        vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_10__b_out = 0U;
        vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_01__a_out = 0U;
    }
    vlSelf->tb_SA__DOT__acc_out[0U][0U] = vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_00__acc_out;
    vlSelf->tb_SA__DOT__acc_out[1U][0U] = vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_10__acc_out;
    vlSelf->tb_SA__DOT__acc_out[0U][1U] = vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_01__acc_out;
    vlSelf->tb_SA__DOT__acc_out[1U][1U] = vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_11__acc_out;
    vlSelf->tb_SA__DOT__dut__DOT__a_pipe[1U][0U] = vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_10__a_out;
    vlSelf->tb_SA__DOT__dut__DOT__b_pipe[0U][1U] = vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_01__b_out;
    vlSelf->tb_SA__DOT__dut__DOT__b_pipe[0U][0U] = vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_00__b_out;
    vlSelf->tb_SA__DOT__dut__DOT__a_pipe[0U][0U] = vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_00__a_out;
    vlSelf->tb_SA__DOT__dut__DOT__b_pipe[1U][1U] = vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_11__b_out;
    vlSelf->tb_SA__DOT__dut__DOT__a_pipe[1U][1U] = vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_11__a_out;
    vlSelf->tb_SA__DOT__dut__DOT__b_pipe[1U][0U] = vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_10__b_out;
    vlSelf->tb_SA__DOT__dut__DOT__a_pipe[0U][1U] = vlSelf->tb_SA__DOT__dut__DOT____Vcellout__pe_01__a_out;
}

VL_INLINE_OPT void Vtb_SA___024root___nba_sequent__TOP__1(Vtb_SA___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_SA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SA___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->__Vdlyvset__tb_SA__DOT__clk__v0) {
        vlSelf->tb_SA__DOT__clk = vlSelf->__Vdlyvval__tb_SA__DOT__clk__v0;
        vlSelf->__Vdlyvset__tb_SA__DOT__clk__v0 = 0U;
    }
}

void Vtb_SA___024root___eval_nba(Vtb_SA___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_SA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SA___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_SA___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_SA___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void Vtb_SA___024root___timing_resume(Vtb_SA___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_SA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SA___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h34e3e0b0__0.resume("@(posedge tb_SA.clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_SA___024root___timing_commit(Vtb_SA___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_SA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SA___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h34e3e0b0__0.commit("@(posedge tb_SA.clk)");
    }
}

void Vtb_SA___024root___eval_triggers__act(Vtb_SA___024root* vlSelf);

bool Vtb_SA___024root___eval_phase__act(Vtb_SA___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_SA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SA___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_SA___024root___eval_triggers__act(vlSelf);
    Vtb_SA___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_SA___024root___timing_resume(vlSelf);
        Vtb_SA___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_SA___024root___eval_phase__nba(Vtb_SA___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_SA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SA___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_SA___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_SA___024root___dump_triggers__nba(Vtb_SA___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_SA___024root___dump_triggers__act(Vtb_SA___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_SA___024root___eval(Vtb_SA___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_SA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SA___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_SA___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_SA.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_SA___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tb_SA.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_SA___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_SA___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_SA___024root___eval_debug_assertions(Vtb_SA___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_SA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SA___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
