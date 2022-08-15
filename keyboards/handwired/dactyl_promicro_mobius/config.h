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
#define PRODUCT         "Bart's Dactyl (6x6)"

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 12
#define MATRIX_COLS 6

// wiring of each half
/* #define MATRIX_COL_PINS { D4, C6, D7, E6, B4, B5 } */
/* #define MATRIX_ROW_PINS { F6, F7, B1, B3, B2, B6 } */

#define MATRIX_COL_PINS { D4, C6, D7, E6, B4, B5 }
#define MATRIX_ROW_PINS { B6, B2, B3, B1, F7, F6 }

#define DIODE_DIRECTION COL2ROW

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x3060
#define DEVICE_VER      0x0001
//#define MANUFACTURER    tshort

/* mouse config */
#define MOUSEKEY_INTERVAL       20
#define MOUSEKEY_DELAY          0
#define MOUSEKEY_TIME_TO_MAX    60
#define MOUSEKEY_MAX_SPEED      7
#define MOUSEKEY_WHEEL_DELAY 0

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* /1* serial.c configuration for split keyboard *1/ */
/* #define SOFT_SERIAL_PIN D0 */

/* /1* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap *1/ */
/* #define LOCKING_SUPPORT_ENABLE */
/* /1* Locking resynchronize hack *1/ */
/* #define LOCKING_RESYNC_ENABLE */

/* Enables This makes it easier for fast typists to use dual-function keys */
#define PERMISSIVE_HOLD

/* /1* ws2812 RGB LED *1/ */
/* #define RGB_DI_PIN D3 */

/* #define RGBLED_NUM 12    // Number of LEDs */

#define SPLIT_LED_STATE_ENABLE
#define SPLIT_LAYER_STATE_ENABLE

/* backlight */
#define BACKLIGHT_PIN B7
#define BACKLIGHT_LEVELS	3                    // The number of brightness levels (maximum 31 excluding off)
#define BACKLIGHT_ON_STATE	1                    // The state of the backlight pin when the backlight is “on” - 1 for high, 0 for low
#define BACKLIGHT_LIMIT_VAL	255                  // The maximum duty cycle of the backlight – 255 allows for full brightness, any lower will decrease the maximum.

#define LED_NUM_LOCK_PIN    C7                   // The pin that controls the Num Lock LED
#define LED_CAPS_LOCK_PIN	F1                   // The pin that controls the Caps Lock LED
#define LED_SCROLL_LOCK_PIN F0                   // The pin that controls the Scroll Lock LED

#define TAPPING_TOGGLE 2
/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
// #define NO_DEBUG

/* disable print */
// #define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
