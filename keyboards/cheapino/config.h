// Copyright 2023 Thomas Haukland (@tompi)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

// Force the usage of PIO1 peripheral, by default the WS2812 implementation uses the PIO0 peripheral.
#define WS2812_PIO_USE_PIO1
#define WS2812_BYTE_ORDER WS2812_BYTE_ORDER_RGB

#define TAPPING_TERM 460
#define AUTO_SHIFT_TIMEOUT 230
#define RETRO_TAPPING
#define RETRO_SHIFT 690
#define PERMISSIVE_HOLD
#define AUTO_SHIFT_REPEAT