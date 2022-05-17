// SPDX-License-Identifier: GPL-2.0

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    // base layer
    [0] =  LAYOUT_split_3x6_3(
      KC_ESC,       KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,                            KC_Y,  KC_U,  KC_I,    KC_O,   KC_P,   KC_PSCR,
      KC_TAB, KC_A, LALT_T(KC_S), LSFT_T(KC_D), LCTL_T(KC_F), KC_G,              KC_H, RCTL_T(KC_J), RSFT_T(KC_K), RALT_T(KC_L), KC_QUOT, KC_MPLY,
      OSM(KC_LSFT), KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,                            KC_N,  KC_M,  KC_COMM, KC_DOT, KC_GRV, KC_CIRC,
                                    KC_LGUI,  KC_SPC,  LALT_T(KC_ENT),  RALT_T(KC_DEL),  KC_BSPC, TO(1)
    ),

    // symbols layer
    [1] = LAYOUT_split_3x6_3(
      KC_ESC,       KC_PIPE,  KC_BSLS,  KC_SLSH,  KC_MINS,  KC_UNDS,                     KC_EXLM,  KC_DQT,   KC_TILD,  KC_COLN,  XXXXXXX,  KC_PSCR,
      KC_TAB,       KC_AMPR,  KC_LABK,  KC_LCBR,  KC_LPRN,  KC_LBRC,                     KC_QUES,  KC_QUOT,  KC_GRV,   KC_SCLN,  XXXXXXX,  KC_MPLY,
      OSM(KC_LSFT), KC_HASH,  KC_RABK,  KC_RCBR,  KC_RPRN,  KC_RBRC,                     KC_CIRC,  KC_AT,    KC_DLR,   XXXXXXX,  XXXXXXX,  KC_CIRC,
                                    TO(0),  KC_SPC,  LALT_T(KC_ENT),    RALT_T(KC_DEL),  KC_BSPC,  TO(2)
    ),

    // navigation layer
    [2] = LAYOUT_split_3x6_3(
      KC_ESC,       XXXXXXX,  XXXXXXX,  KC_PGUP,  KC_PGDN,  XXXXXXX,                     XXXXXXX,  KC_MPRV,  KC_VOLD,  KC_VOLU,  KC_MNXT,  KC_PSCR,
      KC_TAB,       XXXXXXX,  XXXXXXX,  KC_HOME,  KC_END,   KC_INS,                      XXXXXXX,  KC_LEFT,  KC_DOWN,    KC_UP,  KC_RGHT,  KC_MPLY,
      OSM(KC_LSFT), XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                     XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_CIRC,
                                    TO(0),  KC_SPC,  LALT_T(KC_ENT),    RALT_T(KC_DEL),  KC_BSPC,  TO(3)
    ),

    // numbers layer
    [3] = LAYOUT_split_3x6_3(
      KC_ESC,       XXXXXXX,  KC_F7,  KC_F8,  KC_F9,  KC_F10,                     KC_MINS,  KC_7,   KC_P8,  KC_P9,  KC_SLASH, KC_PSCR,
      KC_TAB,       XXXXXXX,  KC_F4,  KC_F5,  KC_F6,  KC_F11,                     KC_PLUS,  KC_P4,  KC_P5,  KC_P6,  KC_EQL,   KC_MPLY,
      OSM(KC_LSFT), XXXXXXX,  KC_F1,  KC_F2,  KC_F3,  KC_F12,                     KC_P0,    KC_P1,  KC_P2,  KC_P3,  KC_ASTR,  KC_CIRC,
                                    TO(0),  KC_SPC,  LALT_T(KC_ENT),    RALT_T(KC_DEL),  KC_BSPC,  KC_PENT
    )
};
