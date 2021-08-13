

#pragma once


#include "config_common.h"

#define VENDOR_ID       0x4257  // "BW"
#define PRODUCT_ID      0x4154
#define DEVICE_VER      0x0001
#define MANUFACTURER    WTHRLL
#define PRODUCT         WTHRLL ATOLL

/* matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 12
#define MATRIX_ROW_PINS { D3, D2, D1, D5, F0 }
#define MATRIX_COL_PINS { F5, B1, F4, B2, F1, B3, D7, B4, B5, B6, C6, C7 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Encoder Pins*/
#define ENCODERS_PAD_A { F7 }
#define ENCODERS_PAD_B { F6 }


/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* LED pin location for capslock*/
#define LED_CAPS_LOCK_PIN E6
