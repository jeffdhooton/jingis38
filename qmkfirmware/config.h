#pragma once

#define MATRIX_ROWS 4
#define MATRIX_COLS 4

#define MATRIX_ROW_PINS { B6, B2, B3, B1 }
#define MATRIX_COL_PINS { C6, D4, D0, D1 }

#define ENCODERS_PAD_A { D7, B5 }
#define ENCODERS_PAD_B { E6, F7 }
#define ENCODER_RESOLUTION 4

#define ENCODER_BUTTONS { B4, F6 }

#define DIODE_DIRECTION COL2ROW

#define DEBOUNCE 5
