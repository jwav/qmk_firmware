#include QMK_KEYBOARD_H

/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x6_3(LCTL_T(KC_ESC), KC_A, KC_Z, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, RCTL_T(KC_ESC), LALT_T(KC_ESC), KC_Q, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, FR_M, LALT_T(KC_4), LGUI_T(KC_SPC), KC_W, KC_X, KC_C, KC_V, KC_B, KC_N, fCOMM, fDOT, fSLSH, fCOLN, RGUI_T(KC_ENT), LALT_T(KC_DEL), LT(2,KC_ENT), LSFT_T(KC_TAB), RSFT_T(KC_BSPC), LT(1,KC_SPC), RCTL_T(KC_ENT)),
	[1] = LAYOUT_split_3x6_3(KC_TRNS, fAMP, fHASH, fLCBR, fLABK, fTILD, fDEG, fRABK, fRCBR, KC_EQL, KC_PPLS, KC_TRNS, KC_TRNS, fPIPE, fDQUO, fLBRC, fLPRN, fDLR, fCIRC, fRPRN, fRBRC, KC_PMNS, KC_PAST, KC_TRNS, LGUI_T(KC_ENT), fMICR, fBSLS, FR_AT, fUNDS, fPERC, fGRV, fQUES, fSCLN, fEXLM, fCOLN, KC_TRNS, KC_RALT, LT(3,KC_SPC), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[2] = LAYOUT_split_3x6_3(KC_TRNS, KC_PSLS, KC_P4, KC_P5, KC_P6, KC_PMNS, KC_PGUP, KC_HOME, KC_UP, KC_END, KC_PSCR, KC_TRNS, LALT_T(KC_BSPC), KC_P0, KC_P1, KC_P2, KC_P3, KC_PDOT, LCTL(KC_LEFT), KC_LEFT, KC_DOWN, KC_RGHT, LCTL(KC_RGHT), KC_TRNS, LGUI_T(KC_SPC), KC_TRNS, KC_P7, KC_P8, KC_P9, KC_PPLS, KC_PGDN, KC_BSPC, KC_CAPS, KC_DEL, KC_NLCK, LGUI_T(KC_SPC), LALT_T(KC_DEL), DF(0), DF(2), KC_TRNS, LT(3,KC_ENT), KC_APP),
	[3] = LAYOUT_split_3x6_3(KC_TRNS, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_TRNS, KC_TRNS, LGUI_T(KC_F1), LCTL_T(KC_F2), LALT_T(KC_F3), LSFT_T(KC_F4), KC_F5, KC_F6, LSFT_T(KC_F7), LALT_T(KC_F8), LCTL_T(KC_F9), LGUI_T(KC_F10), KC_TRNS, KC_TRNS, TO(4), KC_MRWD, KC_MPLY, KC_MFFD, KC_F11, KC_F12, KC_VOLD, KC_MUTE, KC_VOLU, KC_NO, LGUI_T(KC_ENT), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[4] = LAYOUT_split_3x6_3(KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_WH_U, KC_MS_U, KC_WH_D, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_ACL0, KC_ACL1, KC_ACL2, KC_NO, KC_WH_L, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_R, KC_TRNS, KC_TRNS, TO(5), TO(6), KC_NO, KC_NO, KC_NO, KC_BTN4, KC_BTN1, KC_BTN3, KC_BTN2, KC_BTN5, KC_TRNS, KC_NO, TO(0), KC_NO, KC_BTN1, KC_ACL2, KC_NO),
	[5] = LAYOUT_split_3x6_3(KC_TRNS, KC_A, KC_Z, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, fCOLN, KC_TRNS, KC_TRNS, KC_Q, KC_R, KC_S, KC_T, KC_G, FR_M, KC_N, KC_E, KC_I, KC_O, KC_TRNS, KC_TRNS, KC_W, KC_X, KC_C, KC_D, KC_V, KC_K, KC_H, fCOMM, fDOT, fSLSH, KC_TRNS, TO(0), KC_ENT, KC_TAB, KC_BSPC, KC_SPC, KC_NO),
	[6] = LAYOUT_split_3x6_3(KC_TRNS, KC_A, KC_Z, KC_D, KC_F, fCOMM, fDOT, KC_J, KC_K, KC_L, KC_Y, KC_TRNS, KC_TRNS, KC_Q, KC_S, KC_E, KC_T, KC_G, KC_H, KC_N, KC_O, KC_I, KC_R, KC_TRNS, KC_TRNS, KC_W, KC_X, KC_C, KC_V, KC_B, FR_M, KC_U, KC_P, fSLSH, fCOLN, KC_TRNS, TO(0), KC_ENT, KC_TAB, KC_BSPC, KC_SPC, KC_NO)
};
