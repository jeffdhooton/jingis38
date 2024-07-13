#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC,
    KC_ESC, MT(MOD_LGUI, KC_A), MT(MOD_LALT, KC_S), MT(MOD_LCTL, KC_D), MT(MOD_LSFT, KC_F), KC_G, KC_H, MT(MOD_LSFT, KC_J), MT(MOD_LCTL, KC_K), MT(MOD_LALT, KC_L), MT(MOD_LGUI, KC_SCLN), KC_QUOT,
    KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLSH,
    KC_ESC, KC_SPC, KC_ENT, KC_ESC
    // MO(1), KC_SPC, KC_ENT, MO(2),
  )
  // [1] = LAYOUT(
  //   KC_GRAVE, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC,
  //   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_TRANSPARENT, KC_TRANSPARENT,
  //   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
  //   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
  // ),
  // [2] = LAYOUT(
  //   KC_GRAVE, KC_EXCLAIM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
  //   KC_TRANSPARENT, KC_TRANSPARENT, KC_LCBR, KC_RCBR, KC_LBRC, KC_RBRC, KC_MINS, KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS, KC_GRAVE,
  //   KC_TRANSPARENT, KC_LPRN, KC_RPRN, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_UNDS, KC_PLUS, KC_TRANSPARENT, KC_PIPE,
  //   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
  // ),
};
