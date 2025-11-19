// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_pe.h for the primary calling header

#include "Vtb_pe__pch.h"
#include "Vtb_pe___024root.h"

VL_ATTR_COLD void Vtb_pe___024root___eval_initial__TOP(Vtb_pe___024root* vlSelf);
VlCoroutine Vtb_pe___024root___eval_initial__TOP__Vtiming__0(Vtb_pe___024root* vlSelf);
VlCoroutine Vtb_pe___024root___eval_initial__TOP__Vtiming__1(Vtb_pe___024root* vlSelf);

void Vtb_pe___024root___eval_initial(Vtb_pe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pe___024root___eval_initial\n"); );
    // Body
    Vtb_pe___024root___eval_initial__TOP(vlSelf);
    Vtb_pe___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_pe___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_pe__DOT__clk__0 
        = vlSelf->tb_pe__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vtb_pe___024root___eval_initial__TOP__Vtiming__0(Vtb_pe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pe___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->tb_pe__DOT__rst_n = 0U;
    vlSelf->tb_pe__DOT__en = 0U;
    vlSelf->tb_pe__DOT__a_in = 0U;
    vlSelf->tb_pe__DOT__b_in = 0U;
    co_await vlSelf->__VtrigSched_hf2c5e7e1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_pe.clk)", 
                                                       "tb/tb_pe.sv", 
                                                       39);
    co_await vlSelf->__VtrigSched_hf2c5e7e1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_pe.clk)", 
                                                       "tb/tb_pe.sv", 
                                                       39);
    co_await vlSelf->__VtrigSched_hf2c5e7e1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_pe.clk)", 
                                                       "tb/tb_pe.sv", 
                                                       39);
    vlSelf->tb_pe__DOT__rst_n = 1U;
    co_await vlSelf->__VtrigSched_hf2c5e7e1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_pe.clk)", 
                                                       "tb/tb_pe.sv", 
                                                       53);
    vlSelf->tb_pe__DOT__a_in = 3U;
    vlSelf->tb_pe__DOT__b_in = 4U;
    vlSelf->tb_pe__DOT__en = 1U;
    co_await vlSelf->__VtrigSched_hf2c5e7e1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_pe.clk)", 
                                                       "tb/tb_pe.sv", 
                                                       59);
    VL_WRITEF("t=%0t ns acc_out=0%0d\nt=%0t ns | a_out=0%0d | b_out=0%0d\n",
              64,VL_TIME_UNITED_Q(1000),-9,32,vlSelf->tb_pe__DOT__acc_out,
              64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(vlSelf->tb_pe__DOT__a_out),
              8,vlSelf->tb_pe__DOT__b_out);
    co_await vlSelf->__VtrigSched_hf2c5e7e1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_pe.clk)", 
                                                       "tb/tb_pe.sv", 
                                                       59);
    VL_WRITEF("t=%0t ns acc_out=0%0d\nt=%0t ns | a_out=0%0d | b_out=0%0d\n",
              64,VL_TIME_UNITED_Q(1000),-9,32,vlSelf->tb_pe__DOT__acc_out,
              64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(vlSelf->tb_pe__DOT__a_out),
              8,vlSelf->tb_pe__DOT__b_out);
    co_await vlSelf->__VtrigSched_hf2c5e7e1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_pe.clk)", 
                                                       "tb/tb_pe.sv", 
                                                       59);
    VL_WRITEF("t=%0t ns acc_out=0%0d\nt=%0t ns | a_out=0%0d | b_out=0%0d\n",
              64,VL_TIME_UNITED_Q(1000),-9,32,vlSelf->tb_pe__DOT__acc_out,
              64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(vlSelf->tb_pe__DOT__a_out),
              8,vlSelf->tb_pe__DOT__b_out);
    co_await vlSelf->__VtrigSched_hf2c5e7e1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_pe.clk)", 
                                                       "tb/tb_pe.sv", 
                                                       59);
    VL_WRITEF("t=%0t ns acc_out=0%0d\nt=%0t ns | a_out=0%0d | b_out=0%0d\n",
              64,VL_TIME_UNITED_Q(1000),-9,32,vlSelf->tb_pe__DOT__acc_out,
              64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(vlSelf->tb_pe__DOT__a_out),
              8,vlSelf->tb_pe__DOT__b_out);
    vlSelf->tb_pe__DOT__en = 0U;
    co_await vlSelf->__VtrigSched_hf2c5e7e1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_pe.clk)", 
                                                       "tb/tb_pe.sv", 
                                                       65);
    VL_WRITEF("After en=0, t=%0t ns acc_out=0%0d (hold last value)\nAfter en=0, t=%0t ns a_out=0%0d | b_out=0%0d\n",
              64,VL_TIME_UNITED_Q(1000),-9,32,vlSelf->tb_pe__DOT__acc_out,
              64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(vlSelf->tb_pe__DOT__a_out),
              8,vlSelf->tb_pe__DOT__b_out);
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "tb/tb_pe.sv", 
                                       69);
    VL_FINISH_MT("tb/tb_pe.sv", 70, "");
}

VL_INLINE_OPT VlCoroutine Vtb_pe___024root___eval_initial__TOP__Vtiming__1(Vtb_pe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pe___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "tb/tb_pe.sv", 
                                           30);
        vlSelf->__Vdlyvval__tb_pe__DOT__clk__v0 = (1U 
                                                   & (~ (IData)(vlSelf->tb_pe__DOT__clk)));
        vlSelf->__Vdlyvset__tb_pe__DOT__clk__v0 = 1U;
    }
}

void Vtb_pe___024root___eval_act(Vtb_pe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pe___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtb_pe___024root___nba_sequent__TOP__0(Vtb_pe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pe___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->tb_pe__DOT__rst_n) {
        if (vlSelf->tb_pe__DOT__en) {
            vlSelf->tb_pe__DOT__acc_out = (vlSelf->tb_pe__DOT__acc_out 
                                           + VL_MULS_III(32, 
                                                         VL_EXTENDS_II(32,8, (IData)(vlSelf->tb_pe__DOT__a_in)), 
                                                         VL_EXTENDS_II(32,8, (IData)(vlSelf->tb_pe__DOT__b_in))));
        }
        vlSelf->tb_pe__DOT__b_out = vlSelf->tb_pe__DOT__b_in;
        vlSelf->tb_pe__DOT__a_out = vlSelf->tb_pe__DOT__a_in;
    } else {
        vlSelf->tb_pe__DOT__acc_out = 0U;
        vlSelf->tb_pe__DOT__b_out = 0U;
        vlSelf->tb_pe__DOT__a_out = 0U;
    }
}

VL_INLINE_OPT void Vtb_pe___024root___nba_sequent__TOP__1(Vtb_pe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pe___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->__Vdlyvset__tb_pe__DOT__clk__v0) {
        vlSelf->tb_pe__DOT__clk = vlSelf->__Vdlyvval__tb_pe__DOT__clk__v0;
        vlSelf->__Vdlyvset__tb_pe__DOT__clk__v0 = 0U;
    }
}

void Vtb_pe___024root___eval_nba(Vtb_pe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pe___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_pe___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_pe___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void Vtb_pe___024root___timing_resume(Vtb_pe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pe___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hf2c5e7e1__0.resume("@(posedge tb_pe.clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_pe___024root___timing_commit(Vtb_pe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pe___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hf2c5e7e1__0.commit("@(posedge tb_pe.clk)");
    }
}

void Vtb_pe___024root___eval_triggers__act(Vtb_pe___024root* vlSelf);

bool Vtb_pe___024root___eval_phase__act(Vtb_pe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pe___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_pe___024root___eval_triggers__act(vlSelf);
    Vtb_pe___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_pe___024root___timing_resume(vlSelf);
        Vtb_pe___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_pe___024root___eval_phase__nba(Vtb_pe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pe___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_pe___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_pe___024root___dump_triggers__nba(Vtb_pe___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_pe___024root___dump_triggers__act(Vtb_pe___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_pe___024root___eval(Vtb_pe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pe___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_pe___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_pe.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_pe___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tb_pe.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_pe___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_pe___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_pe___024root___eval_debug_assertions(Vtb_pe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pe___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
