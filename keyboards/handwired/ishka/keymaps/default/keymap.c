/* Copyright 2024 Jordi Cunillera
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

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
		KC_1,         KC_2,         KC_3,         KC_4,         KC_5,                                   KC_6,        KC_7,         KC_8,         KC_9,         KC_0, 
		KC_Q,         KC_W,         KC_E,         KC_R,         KC_T,                                   KC_Y,        KC_U,         KC_I,         KC_O,         KC_P, 
		LGUI_T(KC_A), LALT_T(KC_S), LCTL_T(KC_D), LSFT_T(KC_F), KC_G,                                   KC_H,        RSFT_T(KC_J), RCTL_T(KC_K), RALT_T(KC_L), RGUI_T(KC_SCLN), 
		KC_Z,         KC_X,         KC_C,         KC_V,         KC_B,                                   KC_N,        KC_M,         KC_COMM,      KC_DOT,       KC_SLSH, 
		                            KC_DEL,       MO(1),        KC_SPC,                                 KC_ENT,      MO(2),        KC_BSPC
		),
	[1] = LAYOUT(
		KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,                                KC_TRNS,     KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS, 
		KC_TRNS,      KC_HOME,      KC_UP,        KC_END,       KC_TRNS,                                KC_PMNS,     KC_7,         KC_8,         KC_9,         KC_PSLS, 
		LCTL(KC_LEFT),KC_LEFT,      KC_DOWN,      KC_RGHT,      LCTL(KC_RGHT),                          KC_PPLS,     KC_4,         KC_5,         KC_6,         KC_PAST, 
		QK_BOOT,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_RALT,                                KC_0,        KC_1,         KC_2,         KC_3,         KC_RPRN, 
		                            KC_TRNS,      KC_TRNS,      KC_TRNS,                                KC_LSFT,     KC_TRNS,      KC_LCTL
		),
	[2] = LAYOUT(
		KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,                                KC_TRNS,     KC_TRNS,      KC_TRNS,      KC_TRNS,      RALT(KC_TRNS), 
		KC_WH_U,      KC_BTN1,      KC_MS_U,      KC_BTN2,      KC_TRNS,                                RALT(KC_3),  KC_CIRC,      RALT(KC_1),   KC_LBRC,      KC_RBRC, 
		KC_WH_D,      KC_MS_L,      KC_MS_D,      KC_MS_R,      TG(3),                                  KC_NUBS,     RSFT(KC_2),   KC_AMPR,      RSFT(KC_8),   RSFT(KC_9), 
		KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,                                KC_EXLM,     RSFT(KC_UNDS),RALT(KC_2),   KC_QUOT,      KC_NUHS, 
		                            KC_LSFT,      KC_TRNS,      KC_RALT,                                KC_TRNS,     KC_TRNS,      KC_TRNS
		),
	[3] = LAYOUT(
		KC_ESC,       KC_1,         KC_2,         KC_3,         KC_4,                                   KC_5,        KC_6,         KC_7,         KC_8,         KC_9, 
		KC_TAB,       KC_Q,         KC_W,         KC_E,         KC_R,                                   KC_T,        KC_Y,         KC_U,         KC_I,         KC_O, 
		KC_LSFT,      KC_A,         KC_S,         KC_D,         KC_F,                                   KC_G,        KC_H,         KC_J,         KC_K,         KC_L, 
		KC_LCTL,      KC_Z,         KC_X,         KC_C,         KC_V,                                   KC_B,        KC_N,         KC_M,         KC_P,         KC_MPLY, 
		                            MO(4),        KC_LALT,      KC_SPC,                                 KC_ENT,      TG(3),        KC_RALT
		),
	[4] = LAYOUT(
		KC_0,         KC_F1,        KC_F2,        KC_F3,        KC_F4,                                  KC_F5,       KC_F6,        KC_F7,        KC_F8,        KC_F9, 
		KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,                                KC_TRNS,     KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS, 
		KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,                                KC_TRNS,     KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS, 
		KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,                                KC_TRNS,     KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS, 
		                            KC_TRNS,      KC_TRNS,      KC_TRNS,                                KC_TRNS,     KC_TRNS,      KC_TRNS
	    )
};
