#include QMK_KEYBOARD_H

enum custom_keycodes {
	REPEAT = SAFE_RANGE,
        CTRL_ALT,
};

#include "g/keymap_combo.h"

enum layers {
    _BASE = 0,
    _NUM,
    _NAV,
    _SYM,
    _OPT,
    _SPEC
};

#define KEYCODE_MEM 16
#define xxxx KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
	KC_Q,	KC_W,	KC_E,	KC_R,	KC_T,		KC_Y,	KC_U,	KC_I,	KC_O,	KC_P,
	KC_A,	KC_S,	KC_D,	KC_F,	KC_G,		KC_H,	KC_J,	KC_K,	KC_L,	KC_SCLN,
	KC_Z, KC_X, KC_C, KC_V, KC_B,			KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH,
				KC_LSFT, MO(_NUM), KC_BSPC,	KC_SPC
	),
    [_NUM] = LAYOUT(
        KC_1,  KC_2, KC_3,  KC_4, KC_5,                       KC_6, KC_7 , KC_8 , KC_9 ,KC_0,
        KC_EXLM, KC_AT,KC_HASH,KC_DLR,KC_PERC,			KC_CIRC,KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,
        KC_GRV,KC_EQL,KC_BSLS,KC_QUOT,KC_MINS,                   xxxx, KC_LCBR, KC_RCBR, KC_LBRC,KC_RBRC,
                                    KC_TRNS,  xxxx,      MO(_SYM), OSM(MOD_LGUI) 
            ),

    [_SYM] = LAYOUT(
	xxxx, xxxx, xxxx, xxxx, xxxx, 	xxxx, xxxx, xxxx, xxxx, xxxx,
	xxxx, xxxx, xxxx, xxxx, xxxx, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, xxxx,
	xxxx, xxxx, xxxx, xxxx, xxxx, xxxx, xxxx, xxxx, xxxx, xxxx,
				xxxx,	xxxx,		xxxx,	xxxx
    ),
/*    [_RMOD] = LAYOUT(
      TILD,    KC_PLUS, KC_ASTR, KC_PERC, xxxxxxx,      xxxxxxx, xxxxxxx, xxxxxxx, OPT,     SPEC,
      KC_PIPE, KC_LCBR, KC_RCBR, KC_MINS, KC_BSLS,      xxxxxxx, OS_GUI,  OS_CTRL, OS_SHFT, OS_ALT,
      KC_COMM, KC_LABK, KC_RABK, KC_EXLM, xxxxxxx,      xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, MY_RALT,
                                 FUN,     _______,      CLEAR,  _______
    ),*/
};

//************************
// Repeat


