#ifndef CONFIG_H
#define CONFIG_H

#include "quantum.h"

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 6

/* key matrix pins */
#define MATRIX_ROW_PINS { F4, B1, B2, B6, B5, B4, D7, D3 }
#define MATRIX_COL_PINS { F5, F6, F7, B3, D4, D0 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define TAPPING_TERM 200
#define IGNORE_MOD_TAP_INTERRUPT

#endif