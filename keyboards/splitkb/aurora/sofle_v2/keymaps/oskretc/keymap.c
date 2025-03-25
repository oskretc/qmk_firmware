#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif
#include "ppp.h"
#include "gpio.h"


#define A_LSFT LSFT_T(KC_A)
#define S_L6 LT(6,KC_S)
#define D_L2 LT(2,KC_D)
#define F_L3 LT(3,KC_F)
#define G_LSFT LSFT_T(KC_G)
#define H_RSFT RSFT_T(KC_H)
#define J_L4 LT(4,KC_J)
#define K_L1 LT(1,KC_K)
#define L_L5 LT(5,KC_L)
#define SC_RSFT RSFT_T(KC_SCLN)


#define X_LCTLM LCTL_T(KC_X)
#define C_LALT LALT_T(KC_C)
#define CM_RALT RALT_T(KC_COMM)
#define DO_RCTL RCTL_T(KC_DOT)
#define TAB_L8 LT(8,KC_TAB)
#define ENT_LCT LCTL_T(KC_ENT)
#define SPC_L7 LT(7,KC_SPC)

#define PRETAB RCS(KC_TAB)
#define NEXTAB LCTL(KC_TAB)
#define WINTAB LGUI(KC_TAB)
#define CSV RCS(KC_V)
#define CSP RCS(KC_P)


#define WS1 LALT(KC_1)
#define WS2 LALT(KC_2)
#define WS3 LALT(KC_3)
#define WS4 LALT(KC_4)
#define WS5 LALT(KC_5)
#define WS6 LALT(KC_6)
#define WS7 LALT(KC_7)
#define WS8 LALT(KC_8)
#define WS9 LALT(KC_9)
#define WS0 LALT(KC_0)

#define MV_LF LSA(KC_H)
#define MV_UP LSA(KC_K)
#define MV_DN LSA(KC_J)
#define MV_RG LSA(KC_L)
#define FO_LF LALT(KC_H)
#define FO_DN LALT(KC_J)
#define FO_UP LALT(KC_K)
#define FO_RG LALT(KC_L)

#define WS_LF LSA(KC_A)
#define WS_RG LSA(KC_F)
#define WS_TAB RALT(KC_D)

        
void keyboard_pre_init_user(void) {
    gpio_set_pin_output(24);
    gpio_write_pin_high(24);
}

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
            send_string_with_delay(P1_S, 20);
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case P2:
        if (record->event.pressed) {
            send_string_with_delay(P2_S, 20);
        } else {
            // when keycode QMKBEST is released
        }
        break;
    }
    return true;
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
XXXXXXX, KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,                   KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , XXXXXXX,
XXXXXXX, A_LSFT , S_L6   , D_L2   , F_L3   , G_LSFT ,                   H_RSFT , J_L4   , K_L1   , L_L5   , SC_RSFT, XXXXXXX,
XXXXXXX, KC_Z   , X_LCTLM, C_LALT , KC_V   , KC_B   , XXXXXXX, XXXXXXX, KC_N   , KC_M   , CM_RALT, DO_RCTL, KC_SLSH, XXXXXXX,
                  XXXXXXX, XXXXXXX, KC_ESC , TAB_L8 , ENT_LCT, SPC_L7 , KC_BSPC, KC_RGUI, XXXXXXX, XXXXXXX
              ),
    [1] = LAYOUT(
XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
XXXXXXX, _______, _______, MS_UP  , MS_WHLU, _______,                   _______, _______, _______, _______, _______, XXXXXXX,
XXXXXXX, _______, MS_LEFT, MS_DOWN, MS_RGHT, MS_BTN1,                   MS_BTN1, MS_BTN1, _______, MS_BTN2, _______, XXXXXXX,
XXXXXXX, _______, _______, _______, MS_WHLD, DF(0)  , XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, XXXXXXX,
                  XXXXXXX, XXXXXXX, _______, _______, _______, _______, _______, _______, XXXXXXX, XXXXXXX
),
    [2] = LAYOUT(
XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
XXXXXXX, _______, _______, _______, _______, _______,                   KC_HOME, KC_PGUP, KC_END , _______, _______, XXXXXXX,
XXXXXXX, _______, _______, _______, PRETAB , NEXTAB ,                   KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, _______, XXXXXXX,
XXXXXXX, _______, _______, _______, _______, WINTAB , XXXXXXX, XXXXXXX, KC_DEL , KC_PGDN, KC_INS , _______, _______, XXXXXXX,
                  XXXXXXX, XXXXXXX, _______, _______, _______, _______, _______, _______, XXXXXXX, XXXXXXX
),
    [3] = LAYOUT(
XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
XXXXXXX, _______, _______, _______, _______, _______,                   _______, KC_UNDS, KC_PIPE, KC_QUOT, _______, XXXXXXX,
XXXXXXX, KC_CIRC, KC_ASTR, KC_AMPR, _______, _______,                   KC_HASH, KC_TILD, KC_SLSH, KC_DQUO, KC_DLR , XXXXXXX,
XXXXXXX, _______, _______, _______, _______, _______, XXXXXXX, XXXXXXX, _______, KC_MINS, KC_BSLS, KC_GRV , _______, XXXXXXX,
                  XXXXXXX, XXXXXXX, _______, _______, _______, _______, _______, _______, XXXXXXX, XXXXXXX
),
    [4] = LAYOUT(
XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
XXXXXXX, _______, KC_COLN, KC_LT  , KC_GT  , KC_SCLN,                   _______, _______, _______, _______, _______, XXXXXXX,
XXXXXXX, KC_LCBR, KC_RCBR, KC_LPRN, KC_RPRN, KC_AT  ,                   _______, _______, KC_EQL , KC_PLUS, KC_PERC, XXXXXXX,
XXXXXXX, _______, KC_EXLM, KC_LBRC, KC_RBRC, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, _______, _______, XXXXXXX,
                  XXXXXXX, XXXXXXX, _______, _______, _______, _______, _______, _______, XXXXXXX, XXXXXXX
),
    [5] = LAYOUT(
XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
XXXXXXX, _______, KC_F1  , KC_F2  , KC_F3  , KC_F10 ,                   _______, KC_F2  , _______, _______, _______, XXXXXXX,
XXXXXXX, _______, KC_F4  , KC_F5  , KC_F6  , KC_F11 ,                   _______, KC_F5  , KC_F12 , _______, _______, XXXXXXX,
XXXXXXX, _______, KC_F7  , KC_F8  , KC_F9  , KC_F12 , XXXXXXX, XXXXXXX, _______, _______, _______, _______, _______, XXXXXXX,
                  XXXXXXX, XXXXXXX, _______, _______, _______, _______, _______, _______, XXXXXXX, XXXXXXX
),
    [6] = LAYOUT(
XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
XXXXXXX, _______, _______, _______, KC_ASTR, KC_PLUS,                   KC_0   , KC_1   , KC_2   , KC_3   , KC_PLUS, XXXXXXX,
XXXXXXX, _______, _______, _______, _______, KC_MINS,                   KC_SLSH, KC_4   , KC_5   , KC_6   , KC_MINS, XXXXXXX,
XXXXXXX, _______, _______, _______, _______, KC_EQL , XXXXXXX, XXXXXXX, KC_DOT , KC_7   , KC_8   , KC_9   , KC_EQL , XXXXXXX,
                  XXXXXXX, XXXXXXX, _______, _______, _______, _______, _______, _______, XXXXXXX, XXXXXXX
),
    [7] = LAYOUT(
DB_TOGG	, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
XXXXXXX, CW_TOGG, KC_ASTR, KC_COLN, KC_ESC , KC_EQL ,                   XXXXXXX, P2     , P1     , XXXXXXX, CSP    , XXXXXXX,
XXXXXXX, XXXXXXX, KC_PERC, KC_SLSH, KC_ENT , KC_MINS,                   DF(0)  , KC_LGUI, KC_RSFT, XXXXXXX, XXXXXXX, XXXXXXX,
XXXXXXX, XXXXXXX, XXXXXXX, KC_TILD, CSV    , WINTAB , XXXXXXX, XXXXXXX, DF(1)  , KC_RALT, KC_RCTL, XXXXXXX, XXXXXXX, XXXXXXX,
                  XXXXXXX, XXXXXXX, _______, _______, KC_TAB , _______, _______, _______, XXXXXXX, XXXXXXX
),
    [8] = LAYOUT(
RGB_TOG,RGB_RMOD, RGB_MOD, XXXXXXX, XXXXXXX, QK_BOOT,                   QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
XXXXXXX, WS1    , WS2    , WS3    , WS4    , WS5    ,                   WS6    , WS7    , WS8    , WS9    , WS0    , XXXXXXX,
RGB_VAI, XXXXXXX, MV_LF  , MV_UP  , MV_DN  , MV_RG  ,                   FO_LF  , FO_DN  , FO_UP  , FO_RG  , XXXXXXX, XXXXXXX,
RGB_VAD, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, WS_LF  , WS_RG  , WS_TAB , XXXXXXX, XXXXXXX, XXXXXXX,
                  XXXXXXX, XXXXXXX, _______, _______, _______, LALT(KC_SPC), _______, _______, XXXXXXX, XXXXXXX)
};

const uint16_t PROGMEM combo_del[] = {KC_V, KC_B, COMBO_END};
const uint16_t PROGMEM combo_esc[] = {KC_N, KC_M, COMBO_END};
const uint16_t PROGMEM combo_copy[] = {KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM combo_paste[] = {KC_E, KC_R, COMBO_END};
combo_t key_combos[] = {
    COMBO(combo_del, KC_DEL),
    COMBO(combo_esc, KC_ESC), // keycodes with modifiers are possible too!
    COMBO(combo_copy, LCTL(KC_C) ),
    COMBO(combo_paste, LCTL(KC_V) ),
};


void caps_word_set_user(bool active) {
    if (active) {
        // Do something when Caps Word activates.
        gpio_write_pin_low(24);
    } else {
        gpio_write_pin_high(24);
    }
}

#ifdef OTHER_KEYMAP_C
#    include OTHER_KEYMAP_C
#endif // OTHER_KEYMAP_C

