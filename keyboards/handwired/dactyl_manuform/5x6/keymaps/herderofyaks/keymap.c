#include QMK_KEYBOARD_H

#define _QWERTY 0

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =  { ENCODER_CCW_CW(KC_PAGE_UP, KC_PAGE_DOWN),	ENCODER_CCW_CW(KC_AUDIO_VOL_DOWN, KC_AUDIO_VOL_UP)  },
    [1] =  { ENCODER_CCW_CW(RGB_HUD, RGB_HUI),	ENCODER_CCW_CW(RGB_SAD, RGB_SAI)  },
    [2] =  { ENCODER_CCW_CW(RGB_VAD, RGB_VAI),	ENCODER_CCW_CW(RGB_HUI, RGB_HUD)  },
};
#endif

// Tap Dance declarations
enum {
    TD_SLASH_SLASH,
};

// Tap Dance definitions
qk_tap_dance_action_t tap_dance_actions[] = {
    // Tap once for Forward Slash, twice for backslash
    [TD_SLASH_SLASH] = ACTION_TAP_DANCE_DOUBLE(KC_SLSH, KC_BACKSLASH),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
        [0] = LAYOUT_5x6(
			KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, 		KC_6, KC_7, KC_8, KC_9, KC_0, KC_EQL, 
			KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, 		KC_Y, KC_U, KC_I, KC_O, KC_P, KC_MINS, 
			KC_LEFT_CTRL, KC_A, KC_S, KC_D, KC_F, KC_G, 		KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, 
			KC_LEFT_SHIFT, KC_Z, KC_X, KC_C, KC_V, KC_B, 		KC_N, KC_M, KC_COMM, KC_DOT, TD(TD_SLASH_SLASH), KC_RIGHT_SHIFT,
					MO(1), KC_LALT, 						KC_LBRC, KC_RBRC, 
							KC_BSPC, KC_TAB, 			KC_ENT, KC_SPC, 
								KC_LGUI, KC_HOME, 	KC_END, KC_APPLICATION, 
								KC_DELETE, KC_PRINT_SCREEN, 	KC_BACKSLASH, KC_INSERT),

        [1] = LAYOUT_5x6(
			KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, 	KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, 
			KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 	KC_NO, KC_HOME, KC_UP, KC_END, KC_NO, KC_NO, 
			KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 	KC_NO, KC_LEFT, KC_DOWN, KC_RIGHT, KC_NO, KC_NO, 
			KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 	KC_NO, KC_NO, KC_NO, KC_NO, KC_BSLS, KC_NO, 
					KC_TRNS, MO(2), 						KC_NO, KC_NO, 
							KC_NO, KC_NO, 			KC_NO, KC_NO, 
								KC_NO, KC_NO, 		KC_NO, KC_NO, 
								KC_NO, KC_NO, 		KC_PGUP, KC_PGDN),
								
        [2] = LAYOUT_5x6(
			KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 	KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
			KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 	KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
			KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 	KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
			KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 	KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
					KC_TRNS, KC_TRNS, 						KC_NO, KC_NO, 
							RGB_TOG, RGB_MODE_PLAIN, 			RGB_MODE_BREATHE, RGB_MODE_SNAKE, 
								KC_NO, KC_NO, 			RGB_MODE_GRADIENT, KC_NO, 
								KC_NO, KC_NO, 				KC_NO, KC_NO)

};


// Light LEDs 9 & 10 in cyan when keyboard layer 1 is active
const rgblight_segment_t PROGMEM my_layer1_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {1, 5, HSV_RED}
);
// Light LEDs 11 & 12 in purple when keyboard layer 2 is active
const rgblight_segment_t PROGMEM my_layer2_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {1, 5, HSV_YELLOW}
);
// Light LEDs 13 & 14 in green when keyboard layer 3 is active
const rgblight_segment_t PROGMEM my_layer3_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {1, 5, HSV_GREEN}
);