// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_SA_core.h for the primary calling header

#include "Vtb_SA_core__pch.h"
#include "Vtb_SA_core___024root.h"

VL_ATTR_COLD void Vtb_SA_core___024root___eval_static(Vtb_SA_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_SA_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SA_core___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtb_SA_core___024root___eval_initial__TOP(Vtb_SA_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_SA_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SA_core___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->tb_SA_core__DOT__clk = 0U;
}

VL_ATTR_COLD void Vtb_SA_core___024root___eval_final(Vtb_SA_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_SA_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SA_core___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_SA_core___024root___dump_triggers__stl(Vtb_SA_core___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_SA_core___024root___eval_phase__stl(Vtb_SA_core___024root* vlSelf);

VL_ATTR_COLD void Vtb_SA_core___024root___eval_settle(Vtb_SA_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_SA_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SA_core___024root___eval_settle\n"); );
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
            Vtb_SA_core___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_SA_core.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_SA_core___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_SA_core___024root___dump_triggers__stl(Vtb_SA_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_SA_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SA_core___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_SA_core___024root___stl_sequent__TOP__0(Vtb_SA_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_SA_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SA_core___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb_SA_core__DOT__dut__DOT__en = 0U;
    vlSelf->tb_SA_core__DOT__done = 0U;
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
    vlSelf->tb_SA_core__DOT__C_out[0U][0U] = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__pe_ij__acc_out;
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__b_pipe[0U][0U] 
        = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__pe_ij__b_out;
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__a_pipe[0U][0U] 
        = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__pe_ij__a_out;
    vlSelf->tb_SA_core__DOT__C_out[0U][1U] = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__1__KET____DOT__pe_ij__acc_out;
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__b_pipe[0U][1U] 
        = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__1__KET____DOT__pe_ij__b_out;
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__a_pipe[0U][1U] 
        = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__1__KET____DOT__pe_ij__a_out;
    vlSelf->tb_SA_core__DOT__C_out[0U][2U] = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__2__KET____DOT__pe_ij__acc_out;
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__b_pipe[0U][2U] 
        = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__2__KET____DOT__pe_ij__b_out;
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__a_pipe[0U][2U] 
        = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__2__KET____DOT__pe_ij__a_out;
    vlSelf->tb_SA_core__DOT__C_out[1U][0U] = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__0__KET____DOT__pe_ij__acc_out;
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__b_pipe[1U][0U] 
        = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__0__KET____DOT__pe_ij__b_out;
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__a_pipe[1U][0U] 
        = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__0__KET____DOT__pe_ij__a_out;
    vlSelf->tb_SA_core__DOT__C_out[1U][1U] = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__1__KET____DOT__pe_ij__acc_out;
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__b_pipe[1U][1U] 
        = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__1__KET____DOT__pe_ij__b_out;
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__a_pipe[1U][1U] 
        = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__1__KET____DOT__pe_ij__a_out;
    vlSelf->tb_SA_core__DOT__C_out[1U][2U] = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__2__KET____DOT__pe_ij__acc_out;
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__b_pipe[1U][2U] 
        = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__2__KET____DOT__pe_ij__b_out;
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__a_pipe[1U][2U] 
        = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__2__KET____DOT__pe_ij__a_out;
    vlSelf->tb_SA_core__DOT__C_out[2U][0U] = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__0__KET____DOT__pe_ij__acc_out;
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__b_pipe[2U][0U] 
        = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__0__KET____DOT__pe_ij__b_out;
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__a_pipe[2U][0U] 
        = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__0__KET____DOT__pe_ij__a_out;
    vlSelf->tb_SA_core__DOT__C_out[2U][1U] = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__1__KET____DOT__pe_ij__acc_out;
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__b_pipe[2U][1U] 
        = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__1__KET____DOT__pe_ij__b_out;
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__a_pipe[2U][1U] 
        = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__1__KET____DOT__pe_ij__a_out;
    vlSelf->tb_SA_core__DOT__C_out[2U][2U] = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__2__KET____DOT__pe_ij__acc_out;
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__b_pipe[2U][2U] 
        = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__2__KET____DOT__pe_ij__b_out;
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__a_pipe[2U][2U] 
        = vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__2__KET____DOT__pe_ij__a_out;
}

VL_ATTR_COLD void Vtb_SA_core___024root___eval_stl(Vtb_SA_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_SA_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SA_core___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_SA_core___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_SA_core___024root___eval_triggers__stl(Vtb_SA_core___024root* vlSelf);

VL_ATTR_COLD bool Vtb_SA_core___024root___eval_phase__stl(Vtb_SA_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_SA_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SA_core___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_SA_core___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_SA_core___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_SA_core___024root___dump_triggers__act(Vtb_SA_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_SA_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SA_core___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_SA_core.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([changed] tb_SA_core.done)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_SA_core___024root___dump_triggers__nba(Vtb_SA_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_SA_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SA_core___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_SA_core.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([changed] tb_SA_core.done)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_SA_core___024root___ctor_var_reset(Vtb_SA_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_SA_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_SA_core___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_SA_core__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_SA_core__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_SA_core__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->tb_SA_core__DOT__done = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->tb_SA_core__DOT__A_mem[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->tb_SA_core__DOT__B_mem[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->tb_SA_core__DOT__C_out[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->tb_SA_core__DOT__A_in[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->tb_SA_core__DOT__B_in[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->tb_SA_core__DOT__ACC_ref[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_SA_core__DOT__dut__DOT__a_in[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_SA_core__DOT__dut__DOT__b_in[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_SA_core__DOT__dut__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->tb_SA_core__DOT__dut__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->tb_SA_core__DOT__dut__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->tb_SA_core__DOT__dut__DOT__t = 0;
    vlSelf->tb_SA_core__DOT__dut__DOT__drain_t = 0;
    vlSelf->tb_SA_core__DOT__dut__DOT__unnamedblk1__DOT__k_idx = 0;
    vlSelf->tb_SA_core__DOT__dut__DOT__unnamedblk2__DOT__k_idx = 0;
    vlSelf->tb_SA_core__DOT__dut__DOT____Vlvbound_ha66624c1__1 = VL_RAND_RESET_I(8);
    vlSelf->tb_SA_core__DOT__dut__DOT____Vlvbound_h236b139c__0 = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__a_pipe[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT__b_pipe[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__pe_ij__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__pe_ij__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__pe_ij__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__1__KET____DOT__pe_ij__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__1__KET____DOT__pe_ij__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__1__KET____DOT__pe_ij__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__2__KET____DOT__pe_ij__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__2__KET____DOT__pe_ij__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__2__KET____DOT__pe_ij__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__0__KET____DOT__pe_ij__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__0__KET____DOT__pe_ij__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__0__KET____DOT__pe_ij__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__1__KET____DOT__pe_ij__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__1__KET____DOT__pe_ij__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__1__KET____DOT__pe_ij__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__2__KET____DOT__pe_ij__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__2__KET____DOT__pe_ij__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__2__KET____DOT__pe_ij__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__0__KET____DOT__pe_ij__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__0__KET____DOT__pe_ij__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__0__KET____DOT__pe_ij__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__1__KET____DOT__pe_ij__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__1__KET____DOT__pe_ij__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__1__KET____DOT__pe_ij__a_out = VL_RAND_RESET_I(8);
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__2__KET____DOT__pe_ij__acc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__2__KET____DOT__pe_ij__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_SA_core__DOT__dut__DOT__SA_pure__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__2__KET____DOT__pe_ij__a_out = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tb_SA_core__DOT__clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__tb_SA_core__DOT__clk__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_SA_core__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_SA_core__DOT__done__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
