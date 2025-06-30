/* Copyright 2022 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

// clang-format off

enum layers {
    MAC_BASE,
    NUM_PAD,
    LINUX_BASE,
    LINUX_SYS
};

;

/* Keychron defined Windows keycodes
#define KC_TASK LGUI(KC_TAB)
#define KC_FLXP LGUI(KC_E)
*/

#define KC_TASK LGUI(KC_TAB)
#define KC_FLXP LGUI(KC_E)




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [MAC_BASE] = LAYOUT_75_ansi(
        LT(NUM_PAD, KC_ESC), KC_F1,   KC_F2, KC_F3,   KC_F4,   KC_F5,   KC_F6,  KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_F13,  KC_F14,  KC_F15,
        MT(MOD_MEH, KC_GRV), KC_1,    KC_2,  KC_3,    KC_4,    KC_5,    KC_6,   KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, QK_MAKE,
        KC_TAB,              KC_Q,    KC_W,  KC_E,    KC_R,    KC_T,    KC_Y,   KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_PGDN,
                             KC_CAPS, KC_A,  KC_S,    KC_D,    KC_F,    KC_G,   KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,  KC_HOME,
                             KC_LSFT, KC_Z,  KC_X,    KC_C,    KC_V,    KC_B,   KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   KC_END,
                                             MT(KC_LCTL, MS_BTN1), KC_LOPT, KC_LCMD, KC_SPC, KC_RCMD, KC_ROPT, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    ),

    [NUM_PAD] = LAYOUT_75_ansi(
        _______, KC_F1,   KC_F2,    KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, _______, RGB_TOG,
        _______, _______, _______,  _______, _______, _______, _______, _______, KC_PSLS, KC_PAST, KC_PMNS, _______, _______, _______, _______,
        RGB_TOG, RGB_MOD, RGB_VAI,  RGB_HUI, RGB_SAI, RGB_SPI, _______, KC_7,    KC_8,    KC_9,    KC_PPLS, _______, _______, _______, _______,
                 RGB_M_P, RGB_RMOD, RGB_VAD, RGB_HUD, RGB_SAD, RGB_SPD, KC_BSPC, KC_4,    KC_5,    KC_6,    KC_PENT, _______, _______, _______,
                 _______, _______,  _______, _______, _______, KC_0,    KC_1,    KC_2,    KC_3,    KC_PDOT, _______, _______, _______, _______,
                                    _______, KC_NO,   _______, _______, _______, _______, _______, _______, _______, _______
    ),

    [LINUX_BASE] = LAYOUT_75_ansi(
        KC_ESC,              KC_F1,          KC_F2, KC_F3,   KC_F4,   KC_F5,         KC_F6,  KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR, KC_F14,  KC_F15,
        MT(MOD_MEH, KC_GRV), KC_1,           KC_2,  KC_3,    KC_4,    KC_5,          KC_6,   KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, QK_MAKE,
        RCAG_T(KC_TAB),      KC_Q,           KC_W,  KC_E,    KC_R,    KC_T,          KC_Y,   KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_PGDN,
                             HYPR_T(KC_ESC), KC_A,  KC_S,    KC_D,    KC_F,          KC_G,   KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,  KC_HOME,
                             KC_LSFT,        KC_Z,  KC_X,    KC_C,    KC_V,          KC_B,   KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   KC_END,
                                                    KC_LCTL, KC_LALT, MO(LINUX_SYS), KC_SPC, KC_RCMD, KC_RALT, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    ),

    [LINUX_SYS] = LAYOUT_75_ansi(
        KC_ESC,              KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,    KC_F6,  KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR, KC_F14,  KC_F15,
        MT(MOD_MEH, KC_GRV), KC_1,    KC_2,    KC_3,    KC_4,    KC_5,     KC_6,   KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, QK_MAKE,
        RCAG_T(KC_TAB),      KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,     KC_Y,   KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_PGDN,
                             KC_CAPS, KC_A,    KC_S,    KC_D,    KC_FIND,  KC_G,   KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,  KC_HOME,
                             KC_LSFT, KC_UNDO, KC_CUT,  KC_COPY, KC_PASTE, KC_B,   KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   KC_END,
                                               KC_LCTL, KC_LALT, KC_LCMD,  KC_SPC, KC_RCMD, KC_RALT, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    )
};
// option + h to backspace
/* const key_override_t backspace_key_override = ko_make_basic(MOD_MASK_ALT, KC_H, KC_BSPC);

const key_override_t *key_overrides[] = {
    &backspace_key_override,
};
*/
// Arrow Keys, compile errors to do with layer detection
const key_override_t up_arrow = ko_make_with_layers_and_negmods(MOD_MASK_ALT, KC_I, KC_UP, ~0, MOD_MASK_CSG);

const key_override_t left_arrow = ko_make_with_layers_and_negmods(MOD_MASK_ALT, KC_J, KC_LEFT, ~0, MOD_MASK_CSG);

const key_override_t down_arrow = ko_make_with_layers_and_negmods(MOD_MASK_ALT, KC_K, KC_DOWN, ~0, MOD_MASK_CSG);

const key_override_t right_arrow = ko_make_with_layers_and_negmods(MOD_MASK_ALT, KC_L, KC_RIGHT, ~0, MOD_MASK_CSG);

const key_override_t *key_overrides[] = {
    &up_arrow,
    &left_arrow,
    &down_arrow,
    &right_arrow
};

/*
const key_override_t up_arrow = ko_make_basic(MOD_MASK_ALT, KC_I, KC_UP);

const key_override_t left_arrow = ko_make_basic(MOD_MASK_ALT, KC_J, KC_LEFT);

const key_override_t down_arrow = ko_make_basic(MOD_MASK_ALT, KC_K, KC_DOWN);

const key_override_t right_arrow = ko_make_basic(MOD_MASK_ALT, KC_L, KC_RIGHT);

const key_override_t *key_overrides[] = {
    &up_arrow,
    &left_arrow,
    &down_arrow,
    &right_arrow
}
*/
