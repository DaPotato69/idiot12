// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ortho_12x1(
        LSFT_T(KC_Q), LALT_T(KC_E), LGUI_T(KC_T), RGUI_T(KC_Y), RALT_T(KC_I), RSFT_T(KC_P),
        LCTL_T(KC_Z), KC_C, KC_B, KC_N, KC_COMMA, RCTL_T(KC_SLASH)
    ),
    [1] = LAYOUT_ortho_12x1(
       LSFT_T(KC_1), LALT_T(KC_3), LGUI_T(KC_5), RGUI_T(KC_6), RALT_T(KC_8), RSFT_T(KC_0),
       LCTL_T(KC_TAB), KC_LEFT_BRACKET, KC_RIGHT_BRACKET, KC_SEMICOLON, KC_MINUS, RCTL_T(KC_EQUAL)
    ),
    [2] = LAYOUT_ortho_12x1(
        LSFT_T(KC_ESCAPE), KC_F1, KC_F3, KC_F4, KC_F6, KC_F8,
        KC_F9, KC_F11, KC_F12, KC_GRAVE, TO(3), TO(0)
    ),
    [3] = LAYOUT_ortho_12x1(
        KC_MS_BTN1, KC_MS_UP, KC_MS_BTN2, KC_MS_WH_UP, KC_UP, KC_MS_WH_DOWN,
        KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT, KC_LEFT, KC_DOWN, KC_RIGHT
    )
};

const uint16_t PROGMEM W[] = {KC_Q, KC_E, COMBO_END};
const uint16_t PROGMEM R[] = {KC_E, KC_T, COMBO_END};
const uint16_t PROGMEM U[] = {KC_Y, KC_I, COMBO_END};
const uint16_t PROGMEM O[] = {KC_I, KC_P, COMBO_END};
const uint16_t PROGMEM A[] = {KC_Q, KC_Z, COMBO_END};
const uint16_t PROGMEM S[] = {KC_W, KC_X, COMBO_END};
const uint16_t PROGMEM D[] = {KC_E, KC_C, COMBO_END};
const uint16_t PROGMEM F[] = {KC_R, KC_V, COMBO_END};
const uint16_t PROGMEM G[] = {KC_T, KC_B, COMBO_END};
const uint16_t PROGMEM H[] = {KC_Y, KC_N, COMBO_END};
const uint16_t PROGMEM J[] = {KC_U, KC_M, COMBO_END};
const uint16_t PROGMEM K[] = {KC_I, KC_COMMA, COMBO_END};
const uint16_t PROGMEM L[] = {KC_O, KC_DOT, COMBO_END};
const uint16_t PROGMEM SEMICOLON[] = {KC_P, KC_SLASH, COMBO_END};
const uint16_t PROGMEM X[] = {KC_Z, KC_C, COMBO_END};
const uint16_t PROGMEM V[] = {KC_C, KC_B, COMBO_END};
const uint16_t PROGMEM M[] = {KC_N, KC_COMMA, COMBO_END};
const uint16_t PROGMEM DOT[] = {KC_COMMA, KC_SLASH, COMBO_END};
const uint16_t PROGMEM SPACE[] = {KC_N, KC_COMMA, KC_SLASH, COMBO_END};
const uint16_t PROGMEM ENTER[] = {KC_Y, KC_I, KC_P, COMBO_END};
const uint16_t PROGMEM BACKSPACE[] = {KC_Q, KC_E, KC_T, COMBO_END};
const uint16_t PROGMEM L1[] = {KC_Z, KC_C, KC_B, COMBO_END};
const uint16_t PROGMEM TWO[] = {KC_1, KC_3, COMBO_END};
const uint16_t PROGMEM FOUR[] = {KC_3, KC_5, COMBO_END};
const uint16_t PROGMEM SEVEN[] = {KC_6, KC_8, COMBO_END};
const uint16_t PROGMEM NINE[] = {KC_8, KC_0, COMBO_END};
const uint16_t PROGMEM BACKSLASH[] = {KC_0, KC_EQUAL, COMBO_END};
const uint16_t PROGMEM SPACE2[] = {KC_SEMICOLON, KC_MINUS, KC_EQUAL, COMBO_END};
const uint16_t PROGMEM ENTER2[] = {KC_6, KC_8, KC_0, COMBO_END};
const uint16_t PROGMEM BACKSPACE2[] = {KC_1, KC_3, KC_5, COMBO_END};
const uint16_t PROGMEM L0[] = {KC_TAB, KC_LEFT_BRACKET, KC_RIGHT_BRACKET, COMBO_END};
const uint16_t PROGMEM L2[] = {KC_TAB, KC_LEFT_BRACKET, KC_RIGHT_BRACKET, KC_SEMICOLON, KC_MINUS, KC_EQUAL, COMBO_END};
const uint16_t PROGMEM FTWO[] = {KC_F1, KC_F3, COMBO_END};
const uint16_t PROGMEM FFIVE[] = {KC_F4, KC_F6, COMBO_END};
const uint16_t PROGMEM FSEVEN[] = {KC_F6, KC_F8, COMBO_END};
const uint16_t PROGMEM FTEN[] = {KC_F9, KC_F11, COMBO_END};
const uint16_t PROGMEM GRAVE[] = {KC_ESCAPE, KC_F9, COMBO_END};

combo_t key_combos[] = {
    COMBO(W, KC_W),
    COMBO(R, KC_R),
    COMBO(U, KC_U),
    COMBO(O, KC_O),
    COMBO(A, KC_A),
    COMBO(S, KC_S),
    COMBO(D, KC_D),
    COMBO(F, KC_F),
    COMBO(G, KC_G),
    COMBO(H, KC_H),
    COMBO(J, KC_J),
    COMBO(K, KC_K),
    COMBO(L, KC_L),
    COMBO(SEMICOLON, KC_SEMICOLON),
    COMBO(X, KC_X),
    COMBO(V, KC_V),
    COMBO(M, KC_M),
    COMBO(DOT, KC_DOT),
    COMBO(SPACE, KC_SPACE),
    COMBO(ENTER, KC_ENTER),
    COMBO(BACKSPACE, KC_BACKSPACE),
    COMBO(L1, TO(1)),
    COMBO(TWO, KC_2),
    COMBO(FOUR, KC_4),
    COMBO(SEVEN, KC_7),
    COMBO(NINE, KC_9),
    COMBO(SPACE2, KC_SPACE),
    COMBO(ENTER2, KC_ENTER),
    COMBO(BACKSPACE2, KC_BACKSPACE),
    COMBO(L0, TO(0)),
    COMBO(L2, TO(2)),
    COMBO(FTWO, KC_F2),
    COMBO(FFIVE, KC_F5),
    COMBO(FSEVEN, KC_F7),
    COMBO(FTEN, KC_F10),
    COMBO(GRAVE, KC_GRAVE),
};
