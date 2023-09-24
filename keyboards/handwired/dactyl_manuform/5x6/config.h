/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

#define MASTER_RIGHT

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 12
#define MATRIX_COLS 6

// wiring of each half
#define MATRIX_COL_PINS { D4, C6, D7, E6, B4, B5 }
#define MATRIX_ROW_PINS { F6, F7, B1, B3, B2, B6 }

#define DIODE_DIRECTION COL2ROW

// WS2812 RGB LED strip input and number of LEDs
#define RGBLIGHT_SLEEP
#define RGBLIGHT_SPLIT
#define SPLIT_LAYER_STATE_ENABLE

#define RGB_DI_PIN D3
#define RGBLED_NUM 10
#define RGBLIGHT_SPLIT
#define RGBLIGHT_SLEEP
#define RGBLIGHT_HUE_STEP 5
#define RGBLIGHT_SAT_STEP 10
#define RGBLIGHT_VAL_STEP 5
#define RGBLIGHT_LIMIT_VAL 255
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_SNAKE
#define RGBLIGHT_EFFECT_STATIC_GRADIENT

#define RGBLIGHT_DEFAULT_VAL RGBLIGHT_LIMIT_VAL

#define RGBLIGHT_LAYERS

// Encoder Config
#define ENCODERS_PAD_A { F5 } //Pro Micro pin on Out A
#define ENCODERS_PAD_B { F4 } //Pro Micro pin on Out B
#define ENCODER_RESOLUTION 4 //Pulses the encoder registers between each detent

// Oneshot Key Settings
#define ONESHOT_TAP_TOGGLE 5  /* Tapping this number of times holds the key until tapped once again. */
#define ONESHOT_TIMEOUT 5000  /* Time (in ms) before the one shot key is released */

// Caps Word
#define DOUBLE_TAP_SHIFT_TURNS_ON_CAPS_WORD