/* Copyright 2021 Jay Greco
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

#define TAPPING_TERM 200

// Encoders are defined in order. 1: B2 & B3, 2: B4 & B5, 3: D0 & D1, 4: D2 & D3
#define ENCODERS_PAD_A { B3 }
#define ENCODERS_PAD_B { B2 }

#define VIAL_KEYBOARD_UID {0x92, 0x25, 0x93, 0x92, 0x7B, 0x14, 0x97, 0x33}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 1 }
#define VIAL_UNLOCK_COMBO_COLS { 3, 3 }

#define VIAL_ENCODER_DEFAULT { KC_VOLD, KC_VOLU, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS }
