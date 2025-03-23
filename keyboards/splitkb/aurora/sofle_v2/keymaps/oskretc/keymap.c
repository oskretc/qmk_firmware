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
    [0] = LAYOUT(
XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                 XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
XXXXXXX, KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,                 KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , XXXXXXX,
XXXXXXX, LSFT_T(KC_A), LT(6,KC_S), LT(2,KC_D), LT(3,KC_F), LSFT_T(KC_G), RSFT_T(KC_H), LT(4,KC_J), LT(1,KC_K), LT(5,KC_L), RSFT_T(KC_SCLN), XXXXXXX,
XXXXXXX, KC_Z   , LCTL_T(KC_X), LALT_T(KC_C), KC_V, KC_B, XXXXXXX, XXXXXXX, KC_N, KC_M, RALT_T(KC_COMM), RCTL_T(KC_DOT), KC_SLSH, XXXXXXX,
XXXXXXX, XXXXXXX, KC_ESC, LT(8,KC_TAB), LCTL_T(KC_ENT), LT(7,KC_SPC), KC_BSPC, KC_RGUI, XXXXXXX, XXXXXXX),
    [1] = LAYOUT(
XXXXXXX  , XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
XXXXXXX  , _______, _______, MS_UP, MS_WHLU, _______, _______, _______, _______, _______, _______, XXXXXXX,
XXXXXXX  , _______, MS_LEFT, MS_DOWN, MS_RGHT, MS_BTN1, MS_BTN1, MS_BTN1, _______, MS_BTN2, _______, XXXXXXX,
XXXXXXX  , _______, _______, _______, MS_WHLD, DF(0), XXXXXXX, XXXXXXX, _______, _______, _______, _______,
XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, _______, _______, _______, XXXXXXX, XXXXXXX
),
    [2] = LAYOUT(
 XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
 XXXXXXX, _______, _______, _______, _______, _______, KC_HOME, KC_PGUP, KC_END, _______, _______, XXXXXXX,
XXXXXXX, _______, _______, _______, RCS(KC_TAB), LCTL(KC_TAB), KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, _______, XXXXXXX,
XXXXXXX, _______, _______, _______, _______, LGUI(KC_TAB), XXXXXXX, XXXXXXX, KC_DEL, KC_PGDN, KC_INS, _______,
_______, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, _______, _______, _______, XXXXXXX, XXXXXXX
),
    [3] = LAYOUT(
 XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
 XXXXXXX, _______, _______, _______, _______, _______, _______, KC_UNDS, KC_PIPE, KC_QUOT, _______, XXXXXXX,
XXXXXXX, KC_CIRC, KC_ASTR, KC_AMPR, _______, _______, KC_HASH, KC_TILD, KC_SLSH, KC_DQUO, KC_DLR, XXXXXXX,
XXXXXXX, _______, _______, _______, _______, _______, XXXXXXX, XXXXXXX, _______, KC_MINS, KC_BSLS, KC_GRV,
_______, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, _______, _______, _______, XXXXXXX, XXXXXXX
),
    [4] = LAYOUT(
 XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
 XXXXXXX, _______, KC_COLN, KC_LT, KC_GT, KC_SCLN, _______, _______, _______, _______, _______, XXXXXXX,
XXXXXXX, KC_LCBR, KC_RCBR, KC_LPRN, KC_RPRN, KC_AT, _______, _______, KC_EQL, KC_PLUS, KC_PERC, XXXXXXX,
XXXXXXX, _______, KC_EXLM, KC_LBRC, KC_RBRC, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, _______,
_______, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, _______, _______, _______, XXXXXXX, XXXXXXX
),
    [5] = LAYOUT(
 XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
 XXXXXXX, _______, KC_F1, KC_F2, KC_F3, KC_F10, _______, KC_F2, _______, _______, _______, XXXXXXX,
XXXXXXX, _______, KC_F4, KC_F5, KC_F6, KC_F11, _______, KC_F5, KC_F12, _______, _______, XXXXXXX,
XXXXXXX, _______, KC_F7, KC_F8, KC_F9, KC_F12, XXXXXXX, XXXXXXX, _______, _______, _______, _______,
_______, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, _______, _______, _______, XXXXXXX, XXXXXXX
),
    [6] = LAYOUT(
 XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
 XXXXXXX, _______, _______, _______, KC_ASTR, KC_PLUS, KC_0, KC_1, KC_2, KC_3, KC_PLUS, XXXXXXX,
XXXXXXX, _______, _______, _______, _______, KC_MINS, KC_SLSH, KC_4, KC_5, KC_6, KC_MINS, XXXXXXX,
XXXXXXX, _______, _______, _______, _______, KC_EQL, XXXXXXX, XXXXXXX, KC_DOT, KC_7, KC_8, KC_9,
KC_EQL, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, _______, _______, _______, XXXXXXX, XXXXXXX
),
    [7] = LAYOUT(
 XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
 XXXXXXX, XXXXXXX, KC_ASTR, KC_COLN, KC_ESC, KC_EQL, XXXXXXX, P2, P1, XXXXXXX, RCS(KC_P), XXXXXXX,
 XXXXXXX, XXXXXXX, KC_PERC, KC_SLSH, KC_ENT, KC_MINS, DF(0), KC_LGUI, KC_RSFT, XXXXXXX, XXXXXXX, XXXXXXX,
 XXXXXXX, XXXXXXX, XXXXXXX, KC_TILD, RCS(KC_V), RGUI(KC_TAB), XXXXXXX, XXXXXXX, DF(1), KC_RALT, KC_RCTL, XXXXXXX,
 XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, KC_TAB, _______, _______, _______, XXXXXXX, XXXXXXX
),
    [8] = LAYOUT(RGB_TOG, RGB_RMOD, RGB_MOD, XXXXXXX, XXXXXXX, QK_BOOT, QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, LALT(KC_1), LALT(KC_2), LALT(KC_3), LALT(KC_4), LALT(KC_5), LALT(KC_6), LALT(KC_7), LALT(KC_8), LALT(KC_9), LALT(KC_0), XXXXXXX, RGB_VAI, XXXXXXX, LSA(KC_H), LSA(KC_K), LSA(KC_J), LSA(KC_L), LALT(KC_H), LALT(KC_J), LALT(KC_K), LALT(KC_L), XXXXXXX, XXXXXXX, RGB_VAD, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, LSA(KC_A), LSA(KC_F), RALT(KC_D), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, LALT(KC_SPC), _______, _______, XXXXXXX, XXXXXXX)
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

