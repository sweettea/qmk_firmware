#include QMK_KEYBOARD_H

enum custom_keycodes {
	REPEAT = SAFE_RANGE,
        CTRL_ALT,
};

#include "g/keymap_combo.h"

#define CSHI(FROM,TO) const key_override_t S##FROM##TO = ko_make_basic(MOD_MASK_SHIFT, FROM, TO);
#define CCTL(FROM,TO) const key_override_t C##FROM##TO = ko_make_basic(MOD_MASK_CTRL, FROM, TO);
#include "shifts.def"
#undef CSHI
#undef CCTL
#define CSHI(FROM,TO) &S##FROM##TO,
#define CCTL(FROM,TO) &C##FROM##TO,
const key_override_t *key_overrides[] = {
#include "shifts.def"
};
#undef CSHI

enum layers {
    _BASE = 0,
    _SYM,
    _MOV,
};

#define KEYCODE_MEM 16
#define xxxx KC_NO
#define KC_CTLW C(KC_W)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
	KC_Q,	KC_W,	KC_E,	KC_R,	  KC_T,		KC_Y,	KC_U,	KC_I,	  KC_O,	  KC_P,
	KC_A,	KC_S,	KC_D,	KC_F,	  KC_G,		KC_H,	KC_J,	KC_K,	  KC_L,	  QK_REP,
	KC_Z,	KC_X,	KC_C,	KC_V,	  KC_B,		KC_N,	KC_M,	KC_COMM,  KC_DOT, KC_SLSH,
		MT(MOD_LSFT, KC_ESC), MO(_SYM),             KC_BSPC, MT(MOD_LCTL, KC_SPC)
	),
    [_SYM] = LAYOUT(
        KC_EXLM, KC_AT,   KC_HASH,  KC_DLR,   KC_PERC,   KC_CIRC, KC_AMPR, KC_ASTR, KC_LT,    KC_GT,
	KC_1,    KC_2,    KC_3,     KC_4,     KC_5,      KC_6,    KC_7,    KC_8,    KC_9,     KC_0,
	KC_GRV,  KC_TILD, KC_BSLS,  KC_PIPE,  KC_LBRC,   KC_RBRC, KC_EQL,   KC_PLUS, KC_DQT,   KC_QUOT,
                                    KC_LSFT, xxxx,        MO(_MOV), KC_UNDS
            ),

    [_MOV] = LAYOUT(
	xxxx, xxxx, xxxx, xxxx, xxxx,                   xxxx,    xxxx,    xxxx,    xxxx,    xxxx,
        KC_HOME, KC_PGUP, KC_PGDN,  KC_END,   xxxx,     xxxx,    KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT,
	C(A(KC_LEFT)), xxxx, xxxx, xxxx, xxxx,           xxxx,    xxxx,    xxxx,    xxxx,    C(A(KC_RIGHT)),
                                xxxx,     xxxx,      xxxx,    xxxx
    ),
};
