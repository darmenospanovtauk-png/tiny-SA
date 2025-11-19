// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmac.h for the primary calling header

#include "Vmac__pch.h"
#include "Vmac___024root.h"

VL_ATTR_COLD void Vmac___024root___eval_initial__TOP(Vmac___024root* vlSelf);
VlCoroutine Vmac___024root___eval_initial__TOP__Vtiming__0(Vmac___024root* vlSelf);
VlCoroutine Vmac___024root___eval_initial__TOP__Vtiming__1(Vmac___024root* vlSelf);

void Vmac___024root___eval_initial(Vmac___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmac__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac___024root___eval_initial\n"); );
    // Body
    Vmac___024root___eval_initial__TOP(vlSelf);
    Vmac___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vmac___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_mac__DOT__clk__0 
        = vlSelf->tb_mac__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vmac___024root___eval_initial__TOP__Vtiming__0(Vmac___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmac__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->tb_mac__DOT__rst_n = 0U;
    vlSelf->tb_mac__DOT__en = 0U;
    vlSelf->tb_mac__DOT__a = 0U;
    vlSelf->tb_mac__DOT__b = 0U;
    co_await vlSelf->__VtrigSched_he64403f2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mac.clk)", 
                                                       "tb/tb_mac.sv", 
                                                       40);
    co_await vlSelf->__VtrigSched_he64403f2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mac.clk)", 
                                                       "tb/tb_mac.sv", 
                                                       40);
    co_await vlSelf->__VtrigSched_he64403f2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mac.clk)", 
                                                       "tb/tb_mac.sv", 
                                                       40);
    vlSelf->tb_mac__DOT__rst_n = 1U;
    co_await vlSelf->__VtrigSched_he64403f2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mac.clk)", 
                                                       "tb/tb_mac.sv", 
                                                       43);
    vlSelf->tb_mac__DOT__a = 3U;
    vlSelf->tb_mac__DOT__b = 4U;
    vlSelf->tb_mac__DOT__en = 1U;
    co_await vlSelf->__VtrigSched_he64403f2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mac.clk)", 
                                                       "tb/tb_mac.sv", 
                                                       49);
    VL_WRITEF("t=%0t ns acc_out=0%0d\n",64,VL_TIME_UNITED_Q(1000),
              -9,32,vlSelf->tb_mac__DOT__acc_out);
    co_await vlSelf->__VtrigSched_he64403f2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mac.clk)", 
                                                       "tb/tb_mac.sv", 
                                                       49);
    VL_WRITEF("t=%0t ns acc_out=0%0d\n",64,VL_TIME_UNITED_Q(1000),
              -9,32,vlSelf->tb_mac__DOT__acc_out);
    co_await vlSelf->__VtrigSched_he64403f2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mac.clk)", 
                                                       "tb/tb_mac.sv", 
                                                       49);
    VL_WRITEF("t=%0t ns acc_out=0%0d\n",64,VL_TIME_UNITED_Q(1000),
              -9,32,vlSelf->tb_mac__DOT__acc_out);
    co_await vlSelf->__VtrigSched_he64403f2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mac.clk)", 
                                                       "tb/tb_mac.sv", 
                                                       49);
    VL_WRITEF("t=%0t ns acc_out=0%0d\n",64,VL_TIME_UNITED_Q(1000),
              -9,32,vlSelf->tb_mac__DOT__acc_out);
    vlSelf->tb_mac__DOT__en = 0U;
    co_await vlSelf->__VtrigSched_he64403f2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mac.clk)", 
                                                       "tb/tb_mac.sv", 
                                                       54);
    VL_WRITEF("After en=0, t=%0t ns acc_out=0%0d (hold last value)\n",
              64,VL_TIME_UNITED_Q(1000),-9,32,vlSelf->tb_mac__DOT__acc_out);
    co_await vlSelf->__VdlySched.delay(0x4e20ULL, nullptr, 
                                       "tb/tb_mac.sv", 
                                       57);
    VL_FINISH_MT("tb/tb_mac.sv", 58, "");
}

VL_INLINE_OPT VlCoroutine Vmac___024root___eval_initial__TOP__Vtiming__1(Vmac___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmac__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "tb/tb_mac.sv", 
                                           31);
        vlSelf->__Vdlyvval__tb_mac__DOT__clk__v0 = 
            (1U & (~ (IData)(vlSelf->tb_mac__DOT__clk)));
        vlSelf->__Vdlyvset__tb_mac__DOT__clk__v0 = 1U;
    }
}

void Vmac___024root___eval_act(Vmac___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmac__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vmac___024root___nba_sequent__TOP__0(Vmac___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmac__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->tb_mac__DOT__rst_n) {
        if (vlSelf->tb_mac__DOT__en) {
            vlSelf->tb_mac__DOT__acc_out = (vlSelf->tb_mac__DOT__acc_out 
                                            + VL_MULS_III(32, 
                                                          VL_EXTENDS_II(32,8, (IData)(vlSelf->tb_mac__DOT__a)), 
                                                          VL_EXTENDS_II(32,8, (IData)(vlSelf->tb_mac__DOT__b))));
        }
    } else {
        vlSelf->tb_mac__DOT__acc_out = 0U;
    }
}

VL_INLINE_OPT void Vmac___024root___nba_sequent__TOP__1(Vmac___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmac__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->__Vdlyvset__tb_mac__DOT__clk__v0) {
        vlSelf->tb_mac__DOT__clk = vlSelf->__Vdlyvval__tb_mac__DOT__clk__v0;
        vlSelf->__Vdlyvset__tb_mac__DOT__clk__v0 = 0U;
    }
}

void Vmac___024root___eval_nba(Vmac___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmac__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmac___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmac___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void Vmac___024root___timing_resume(Vmac___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmac__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_he64403f2__0.resume("@(posedge tb_mac.clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vmac___024root___timing_commit(Vmac___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmac__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_he64403f2__0.commit("@(posedge tb_mac.clk)");
    }
}

void Vmac___024root___eval_triggers__act(Vmac___024root* vlSelf);

bool Vmac___024root___eval_phase__act(Vmac___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmac__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vmac___024root___eval_triggers__act(vlSelf);
    Vmac___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vmac___024root___timing_resume(vlSelf);
        Vmac___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vmac___024root___eval_phase__nba(Vmac___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmac__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vmac___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmac___024root___dump_triggers__nba(Vmac___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmac___024root___dump_triggers__act(Vmac___024root* vlSelf);
#endif  // VL_DEBUG

void Vmac___024root___eval(Vmac___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmac__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vmac___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_mac.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vmac___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tb_mac.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vmac___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vmac___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vmac___024root___eval_debug_assertions(Vmac___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmac__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
