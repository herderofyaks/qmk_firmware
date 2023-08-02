#include QMK_KEYBOARD_H

#define _BASE 0
#define _RAISE 1
#define _LOWER 2
#define _ADJUST 3

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)
#define ADJUST MO(_ADJUST)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base (qwerty)
       +-----------------------------------------+                             +-----------------------------------------+
     * | ESC  |   1  |   2  |   3  |   4  |   5  |                             |   6  |   7  |   8  |   9  |   0  |   =  |
     * |------+------+------+------+------+------|                             |------+------+------+------+------+------|
     * | TAB  |   q  |   w  |   e  |   r  |   t  |                             |   y  |   u  |   i  |   o  |   p  |   -  |
     * |------+------+------+------+------+------|                             |------+------+------+------+------+------|
     * | CTRL |   a  |   s  |   d  |   f  |   g  |                             |   h  |   j  |   k  |   l  |   ;  |   '  |
     * |------+------+------+------+------+------|                             |------+------+------+------+------+------|
     * | SHFT |   z  |   x  |   c  |   v  |   b  |                             |   n  |   m  |   ,  |   .  |   /  | SHFT |
     * +------+------+------+------+-------------+                             +-------------+------+------+------+------+
     *        |  ALT |  INS |  RSE | BSPC | WIN  |                             |  ENT |  SPC |  LWR |   [  |   ]  |
     *        +------+------+------+-------------+                             +------+------+------+-------------+
     */
    [_BASE] = LAYOUT(
        QK_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_EQUAL,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINS,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,               KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                KC_LALT, KC_INS,  RAISE,   KC_BSPC, KC_LGUI,             KC_ENT,  KC_SPC,  LOWER,   KC_LBRC, KC_RBRC
    ),

    [_LOWER] = LAYOUT(
    KC_F1,   KC_F2,   KC_F3,    KC_F4,      KC_F5,    KC_F6,             KC_F7,    KC_F8,    KC_F9,    KC_F10,      KC_F11,    KC_F12,
    KC_GRV,  KC_NO,   KC_NO,    KC_NO,      KC_NO,    KC_NO,             KC_NO,    KC_HOME,  KC_UP,    KC_END,      KC_PGUP,    KC_DEL,
    KC_TRNS, KC_NO,   KC_NO,    KC_NO,      KC_NO,    KC_NO,             KC_NO,    KC_LEFT,  KC_DOWN,  KC_RIGHT,    KC_PGDN,    KC_NO,
    KC_TRNS, KC_NO,   KC_NO,    KC_NO,      KC_NO,    KC_NO,             KC_NO,    KC_NO,    KC_NO,    KC_NO,       KC_NO,      KC_TRNS,
             KC_TRNS, KC_TRNS,  ADJUST,      KC_NO,    KC_NO,             KC_NO,    KC_NO,    KC_TRNS,  KC_NO,       KC_NO
    ),

    [_RAISE] = LAYOUT(
    KC_F1,   KC_F2,   KC_F3,    KC_F4,      KC_F5,    KC_F6,             KC_F7,    KC_F8,    KC_F9,    KC_F10,      KC_F11,     KC_F12,
    KC_NO,  KC_NO,   KC_NO,    KC_NO,      KC_NO,    KC_NO,             KC_NO,    KC_HOME,  KC_UP,    KC_END,      KC_PGUP,    KC_DEL,
    KC_TRNS, KC_NO,   KC_NO,    KC_NO,      KC_NO,    KC_NO,             KC_NO,    KC_LEFT,  KC_DOWN,  KC_RIGHT,    KC_PGDN,    KC_NO,
    KC_TRNS, KC_NO,   KC_NO,    KC_NO,      KC_NO,    KC_NO,             KC_NO,    KC_NO,    KC_NO,    KC_NO,       KC_BSLS,      CW_TOGG,
             KC_TRNS, KC_TRNS,  KC_NO,      KC_NO,    KC_NO,             KC_PSCR,    KC_NO,    ADJUST,  KC_NO,       KC_NO
    ),

    [_ADJUST] = LAYOUT(
    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  EE_CLR,                      EE_CLR,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,                       KC_VOLU,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,                       KC_VOLD,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_CAPS,                     KC_MUTE,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
            KC_NO,  KC_NO,  KC_NO,  KC_NO,  QK_BOOT,                     QK_BOOT,  KC_NO,  KC_NO,  KC_NO,  KC_NO
    )


};

void persistent_default_layer_set(uint16_t default_layer) {
    eeconfig_update_default_layer(default_layer);
    default_layer_set(default_layer);
}
