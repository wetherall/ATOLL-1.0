#include QMK_KEYBOARD_H


#define _______ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,
        KC_LSFT,       KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM,  KC_DOT,  KC_SLSH, KC_RSFT,
                     KC_LALT,   MO(2),    MO(1),              KC_SPC,                  KC_RGUI,   KC_RCTL
    ),
    [1] = LAYOUT(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
        KC_CAPS,   _______, _______, _______, _______, _______, _______, _______, KC_LBRC, KC_RBRC, KC_QUOT, KC_ENT,
        _______,       KC_BSLS, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                     _______,   _______,    _______,            _______,                 _______, _______
    ),
    [2] = LAYOUT(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_MINS, KC_EQL,
        KC_TAB,   _______, _______, _______, RESET,   _______, _______, _______, _______, _______, _______, _______,
        _______,       _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                     _______,   _______,    _______,            _______,                 _______, _______
    ),
	[3] = LAYOUT(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_MINS, KC_EQL,
        _______,   _______, _______, _______, RESET,   _______, _______, _______, _______, _______, _______, _______,
        _______,       _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                     _______,   _______,    _______,            _______,                 _______, _______
    ),

};


void led_set_user(uint8_t usb_led) {


	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
		DDRE |= (1 << 6); PORTE &= ~(1 << 6);
	} else {
		DDRE &= ~(1 << 6); PORTE &= ~(1 << 6);
	}
}
