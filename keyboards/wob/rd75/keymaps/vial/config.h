// Copyright 2026 Badi Labassi
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define VIAL_KEYBOARD_UID {0x6E, 0x23, 0x4C, 0xF6, 0x39, 0x2D, 0xD4, 0x83}

// Hold Escape and Enter while Vial requests an unlock.
#define VIAL_UNLOCK_COMBO_ROWS {0, 3}
#define VIAL_UNLOCK_COMBO_COLS {0, 13}

// The custom EEPROM driver reserves offsets 1088 and above.
#define DYNAMIC_KEYMAP_EEPROM_MAX_ADDR 1087

// Four 7x16 layers consume most of the RD75's persistent keymap area. Keep one
// slot for each advanced Vial feature and leave at least 100 bytes for macros.
#define VIAL_TAP_DANCE_ENTRIES   1
#define VIAL_COMBO_ENTRIES       1
#define VIAL_KEY_OVERRIDE_ENTRIES 1
// Alt Repeat entries and QMK Settings would push the macro area below Vial's
// 100-byte minimum; see rules.mk.
#define NO_ALT_REPEAT_KEY
