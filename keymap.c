
#include QMK_KEYBOARD_H

#define PAD 0

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Single 5x5 board only
 * .--------------------------------------------.
 * |   F1   |  F2    |  F3    |  F4    |        |
 * |--------+--------+--------+--------+--------|
 * |   F5   |  F6    |  F7    |  F8    |        |
 * |--------+--------+--------+--------+--------|
 * |   F9   |  F10   |  F11   |  F12   |        |
 * |--------+--------+--------+--------+--------|
 * |  COPY  |  CUT   |   UP   |        |        |
 * |--------+--------+--------+--------+--------|
 * |  PASTE |  LEFT  |  DOWN  |  RIGHT |        |
 * '--------------------------------------------'
 */

  [PAD] = LAYOUT_ortho_5x5(
  KC_F1,     KC_F2,    KC_F3,    KC_F4,    _______,
  KC_F5,     KC_F6,    KC_F7,    KC_F8,    _______,
  KC_F9,     KC_F10,   KC_F11,   KC_F12,   _______,
  KC_COPY,   KC_CUT,   KC_UP,    _______,  _______,
  KC_PASTE,  KC_LEFT,  KC_DOWN,  KC_RIGHT, _______
  ),

};
