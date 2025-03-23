#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif
#include "ppp.h"

/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */


enum custom_keycodes {
  P1 = SAFE_RANGE,
  P2,
  
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case P1:
        if (record->event.pressed) {
            send_string_with_delay(P1_S, 30);
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case P2:
        if (record->event.pressed) {
            send_string_with_delay(P2_S, 30);
        } else {
            // when keycode QMKBEST is released
        }
        break;
    }
    return true;
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(KC_A, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_NO, KC_NO, LSFT_T(KC_A), LT(6,KC_S), LT(2,KC_D), LT(3,KC_F), LSFT_T(KC_G), RSFT_T(KC_H), LT(4,KC_J), LT(1,KC_K), LT(5,KC_L), RSFT_T(KC_SCLN), KC_NO, KC_NO, KC_Z, LCTL_T(KC_X), LALT_T(KC_C), KC_V, KC_B, KC_NO, KC_NO, KC_N, KC_M, RALT_T(KC_COMM), RCTL_T(KC_DOT), KC_SLSH, KC_NO, KC_NO, KC_NO, KC_ESC, LT(8,KC_TAB), LCTL_T(KC_ENT), LT(7,KC_SPC), KC_BSPC, KC_RGUI, KC_NO, KC_NO),
    [1] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, MS_UP, MS_WHLU, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_TRNS, MS_LEFT, MS_DOWN, MS_RGHT, MS_BTN1, MS_BTN1, MS_BTN1, KC_TRNS, MS_BTN2, KC_TRNS, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, MS_WHLD, DF(0), KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO),
    [2] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_HOME, KC_PGUP, KC_END, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, RCS(KC_TAB), LCTL(KC_TAB), KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_TRNS, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, LGUI(KC_TAB), KC_NO, KC_NO, KC_DEL, KC_PGDN, KC_INS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO),
    [3] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_UNDS, KC_PIPE, KC_QUOT, KC_TRNS, KC_NO, KC_NO, KC_CIRC, KC_ASTR, KC_AMPR, KC_TRNS, KC_TRNS, KC_HASH, KC_TILD, KC_SLSH, KC_DQUO, KC_DLR, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_TRNS, KC_MINS, KC_BSLS, KC_GRV, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO),
    [4] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_COLN, KC_LT, KC_GT, KC_SCLN, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_LCBR, KC_RCBR, KC_LPRN, KC_RPRN, KC_AT, KC_TRNS, KC_TRNS, KC_EQL, KC_PLUS, KC_PERC, KC_NO, KC_NO, KC_TRNS, KC_EXLM, KC_LBRC, KC_RBRC, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO),
    [5] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F10, KC_TRNS, KC_F2, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_TRNS, KC_F4, KC_F5, KC_F6, KC_F11, KC_TRNS, KC_F5, KC_F12, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_TRNS, KC_F7, KC_F8, KC_F9, KC_F12, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO),
    [6] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_ASTR, KC_PLUS, KC_0, KC_1, KC_2, KC_3, KC_PLUS, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MINS, KC_SLSH, KC_4, KC_5, KC_6, KC_MINS, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_EQL, KC_NO, KC_NO, KC_DOT, KC_7, KC_8, KC_9, KC_EQL, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO),
    [7] = LAYOUT(
 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
 KC_NO, KC_NO, KC_ASTR, KC_COLN, KC_ESC, KC_EQL, KC_NO, P2, P1, KC_NO, RCS(KC_P), KC_NO,
 KC_NO, KC_NO, KC_PERC, KC_SLSH, KC_ENT, KC_MINS, DF(0), KC_LGUI, KC_RSFT, KC_NO, KC_NO, KC_NO,
 KC_NO, KC_NO, KC_NO, KC_TILD, RCS(KC_V), RGUI(KC_TAB), KC_NO, KC_NO, DF(1), KC_RALT, KC_RCTL, KC_NO,
 KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TAB, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO
),
    [8] = LAYOUT(RGB_TOG, RGB_RMOD, RGB_MOD, KC_NO, KC_NO, QK_BOOT, QK_BOOT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LALT(KC_1), LALT(KC_2), LALT(KC_3), LALT(KC_4), LALT(KC_5), LALT(KC_6), LALT(KC_7), LALT(KC_8), LALT(KC_9), LALT(KC_0), KC_NO, RGB_VAI, KC_NO, LSA(KC_H), LSA(KC_K), LSA(KC_J), LSA(KC_L), LALT(KC_H), LALT(KC_J), LALT(KC_K), LALT(KC_L), KC_NO, KC_NO, RGB_VAD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LSA(KC_A), LSA(KC_F), RALT(KC_D), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, LALT(KC_SPC), KC_TRNS, KC_TRNS, KC_NO, KC_NO)
};

const uint16_t PROGMEM combo_del[] = {KC_V, KC_B, COMBO_END};
const uint16_t PROGMEM combo_esc[] = {KC_N, KC_M, COMBO_END};
const uint16_t PROGMEM combo_copy[] = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM combo_paste[] = {KC_C, KC_V, COMBO_END};
combo_t key_combos[] = {
    COMBO(combo_del, KC_DEL),
    COMBO(combo_esc, KC_ESC), // keycodes with modifiers are possible too!
    COMBO(combo_copy, LCTL(KC_C) ),
    COMBO(combo_paste, LCTL(KC_V) ),
};





#ifdef OTHER_KEYMAP_C
#    include OTHER_KEYMAP_C
#endif // OTHER_KEYMAP_C

