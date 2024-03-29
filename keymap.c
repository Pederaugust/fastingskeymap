#include QMK_KEYBOARD_H

#define PASTE LGUI(KC_V)
#define COPY LGUI(KC_C)
#define UNDO LGUI(KC_Z)
#define CUT LGUI(KC_X)
#define VIM_E LALT(KC_RIGHT)
#define VIM_B LALT(KC_LEFT)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

 [0] = LAYOUT(
      KC_NUBS, KC_1, KC_2, KC_3, KC_4,  KC_5,              KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,    KC_EQL,    KC_NO,    KC_BSPC,
      KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T,                KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_NUHS,
      KC_GESC, KC_A, KC_S, KC_D, KC_F, KC_G,                KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
      KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B,               KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_RSFT,
      MO(1),  KC_LCTL, KC_LALT, KC_LGUI,KC_SPC,            KC_SPC, KC_NO, KC_RGUI,KC_GRV, KC_NO, MO(2), TG(3)),

 [1] = LAYOUT(
      KC_TRNS,   KC_F1,    KC_F2,   KC_F3,   KC_F4,   KC_F5,                  KC_F6,  KC_F7,   KC_F8,   KC_F9,  KC_F10,    KC_F11,     KC_F12,   KC_NO,    KC_BSPC,
      KC_TRNS, KC_TRNS, KC_TRNS,    VIM_E, KC_TRNS, KC_TRNS,                  COPY, UNDO, KC_TRNS, KC_TRNS, PASTE,  KC_TRNS,    KC_TRNS,
      KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, CUT,   KC_TRNS, KC_TRNS,          KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_TRNS, KC_TRNS,  KC_TRNS,
      KC_TRNS,   KC_TRNS,   KC_TRNS, KC_TRNS, KC_SLCT, VIM_B,               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

 [2] = LAYOUT(
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
      KC_NO, KC_NO, KC_UP, KC_NO, KC_NO, KC_NO,            KC_NO, KC_NO, KC_NO, KC_MSTP, KC_MPLY, KC_NO, KC_NO,
      KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO, KC_NO,          KC_MRWD, KC__VOLDOWN, KC__VOLUP, KC_MFFD, KC_NO, KC_NO, KC_NO,
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                       KC_NO, KC_MUTE, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO),

 [3] = LAYOUT(
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,           KC_MS_LEFT, KC_MS_DOWN, KC_MS_UP, KC_MS_RIGHT, KC_NO, KC_NO, KC_NO,
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
      KC_NO, KC_NO, KC_NO, KC_NO, KC_MS_BTN2,              KC_MS_BTN1, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS)
};
