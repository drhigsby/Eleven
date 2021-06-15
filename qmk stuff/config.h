/* Copyright 2021 drhigsby
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

#pragma once

#include "config_common.h"

#define MANUFACTURER DrHigsby
#define PRODUCT Eleven
#define VENDOR_ID 0x0420
#define PRODUCT_ID 0xA421
#define DEVICE_VER 0xA420

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 10

/* Define encoder pads */
#define ENCODERS_PAD_A { F4 }
#define ENCODERS_PAD_B { F5 }

/* key matrix pins */
#define MATRIX_ROW_PINS { F6, F7, B2, B6}
#define MATRIX_COL_PINS { D3, D2, D1, D0, D4, C6, B4, B5, D7, B3}
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

#define COMBO_COUNT 8

#define COMBO_TERM 45
