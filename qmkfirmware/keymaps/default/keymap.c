#include QMK_KEYBOARD_H

#include "quantum.h"

#define ENCODER_BTN_1 B4
#define ENCODER_BTN_2 F6

enum layers {
  BASE,
  DESIGN
};

enum custom_keycodes {
    REDO = SAFE_RANGE,
    KC_COMMENT,
    ZOOM_IN,
    ZOOM_OUT,
    PAN,
    ROTATE,
    EXTRUDE,
    SCALE,
    SLICE,
    VMOD_TOGGLE,
    TOOL_SWITCH,
    LAYER_UP,
    LAYER_DOWN,
    WIRE_SHADE_TOGGLE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT_ortho_4x4(
        KC_MPRV, KC_MPLY, KC_MNXT, TG(DESIGN),  // Row 1: Media controls and toggle layer
        KC_COPY, KC_PASTE, KC_CUT, KC_UNDO,     // Row 2: Common editing commands
        KC_O,    KC_S,    KC_W,   KC_B,         // Row 3: Open, Save, Close Tab, Compile/Run
        KC_COMMENT, KC_COMMENT,    KC_BRIU, KC_BRID      // Row 4: Comment, Uncomment, Brightness up, Brightness down
    ),
    [DESIGN] = LAYOUT_ortho_4x4(
        ZOOM_IN, ZOOM_OUT, PAN, TG(BASE),         // Row 1: Zoom in, Zoom out, Pan, Toggle Base
        EXTRUDE, SCALE, SLICE, VMOD_TOGGLE,     // Row 2: Extrude, Scale, Slice, View Mode Toggle
        TOOL_SWITCH, LAYER_UP, LAYER_DOWN, KC_F11, // Row 3: Tool Switch, Layer Up, Layer Down, Fullscreen Toggle
        WIRE_SHADE_TOGGLE, KC_UNDO, REDO, TG(BASE) // Row 4: Wireframe/Shade Toggle, Undo, Redo, Toggle back to Layer 0
    )
};

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [BASE] = { ENCODER_CCW_CW(KC_VOLU, KC_VOLD), ENCODER_CCW_CW(KC_PGUP, KC_PGDN) },
    [DESIGN] = { ENCODER_CCW_CW(KC_VOLU, KC_VOLD), ENCODER_CCW_CW(KC_PGUP, KC_PGDN) },
};

void matrix_init_user(void) {
    // Configure ENCODER_BTN_1 (B4)
    DDRB &= ~(1<<4);  // Set pin B4 as input
    PORTB |= (1<<4);  // Enable pull-up resistor on B4

    // Configure ENCODER_BTN_2 (F6)
    DDRF &= ~(1<<6);  // Set pin F6 as input
    PORTF |= (1<<6);  // Enable pull-up resistor on F6
}

void keyboard_post_init_user(void) {
  debug_enable = true;
  debug_matrix = true;
  debug_keyboard = true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
switch (keycode) {
        case KC_COPY:
            if (record->event.pressed) {
                // Send Cmd+C for Copy
                register_code(KC_LGUI);
                tap_code(KC_C);
                unregister_code(KC_LGUI);
            }
            break;
        case KC_PASTE:
            if (record->event.pressed) {
                // Send Cmd+V for Paste
                register_code(KC_LGUI);
                tap_code(KC_V);
                unregister_code(KC_LGUI);
            }
            break;
        case KC_CUT:
            if (record->event.pressed) {
                // Send Cmd+X for Cut
                register_code(KC_LGUI);
                tap_code(KC_X);
                unregister_code(KC_LGUI);
            }
            break;
        case KC_UNDO:
            if (record->event.pressed) {
                // Send Cmd+X for Cut
                register_code(KC_LGUI);
                tap_code(KC_U);
                unregister_code(KC_LGUI);
            }
            break;
        case REDO:
            if (record->event.pressed) {
                // Simulate Ctrl + Y for redo
                register_code(KC_LGUI);
                tap_code(KC_Y);
                unregister_code(KC_LGUI);
            }
            break;

        // Open - Using Cmd+O
        case KC_O:
            if (record->event.pressed) {
                register_code(KC_LGUI);
                tap_code(KC_O);
                unregister_code(KC_LGUI);
            }
            break;

        // Save - Using Cmd+S
        case KC_S:
            if (record->event.pressed) {
                register_code(KC_LGUI);
                tap_code(KC_S);
                unregister_code(KC_LGUI);
            }
            break;

        // Close Tab - Using Cmd+W
        case KC_W:
            if (record->event.pressed) {
                register_code(KC_LGUI);
                tap_code(KC_W);
                unregister_code(KC_LGUI);
            }
            break;

        // Compile/Run - Using Cmd+B (commonly used in IDEs like Xcode)
        case KC_B:
            if (record->event.pressed) {
                register_code(KC_LGUI);
                tap_code(KC_B);
                unregister_code(KC_LGUI);
            }
            break;

        // Comment - Using Cmd+/
        case KC_COMMENT:
            if (record->event.pressed) {
                register_code(KC_LGUI);
                tap_code(KC_SLASH);
                unregister_code(KC_LGUI);
            }
            break;

        // Uncomment - Using Cmd+/
        case KC_V:  // Assuming 'V' is meant for 'Uncomment' based on your keymap setup
            if (record->event.pressed) {
                register_code(KC_LGUI);
                tap_code(KC_SLASH);
                unregister_code(KC_LGUI);
            }
            break;

        // Brightness Up - Using native keycode
        case KC_BRIU:
            if (record->event.pressed) {
                tap_code(KC_BRIU);
            }
            break;

        // Brightness Down - Using native keycode
        case KC_BRID:
            if (record->event.pressed) {
                tap_code(KC_BRID);
            }
            break;
    

        // DESIGN
        case ZOOM_IN:
            if (record->event.pressed) {
                // Simulate pressing Shift + '=' for '+'
                register_code(KC_LSFT);
                tap_code(KC_EQL);
                unregister_code(KC_LSFT);
            }
            break;
        case ZOOM_OUT:
            if (record->event.pressed) {
                // Simulate pressing '-'
                tap_code(KC_MINS);
            }
            break;
        case PAN:
            if (record->event.pressed) {
                // Example: Simulate holding down middle mouse button and moving mouse (not possible directly, pseudocode)
                // This is typically not possible directly through a keyboard and would require additional software or macros outside of QMK
                tap_code16(S(KC_M)); // Placeholder: shift + M for example
            }
            break;
        case EXTRUDE:
            if (record->event.pressed) {
                // Simulate pressing 'E' for extrude
                tap_code(KC_E);
            }
            break;
        case SCALE:
            if (record->event.pressed) {
                // Simulate pressing 'S' for scale
                tap_code(KC_S);
            }
            break;
        case SLICE:
            if (record->event.pressed) {
                // Placeholder for slicing, no direct keyboard shortcut
                tap_code16(S(KC_SLASH)); // Shift + '/' as a placeholder
            }
            break;
        case VMOD_TOGGLE:
            if (record->event.pressed) {
                // Placeholder to toggle between different view modes
                tap_code16(S(KC_V)); // Shift + V as a placeholder
            }
            break;
        case TOOL_SWITCH:
            if (record->event.pressed) {
                // Placeholder to switch tools
                tap_code16(S(KC_T)); // Shift + T as a placeholder
            }
            break;
        case LAYER_UP:
            if (record->event.pressed) {
                // Placeholder to move up a layer
                tap_code(KC_PGUP);
            }
            break;
        case LAYER_DOWN:
            if (record->event.pressed) {
                // Placeholder to move down a layer
                tap_code(KC_PGDN);
            }
            break;
        case WIRE_SHADE_TOGGLE:
            if (record->event.pressed) {
                // Placeholder to toggle wireframe/shaded mode
                tap_code16(S(KC_W)); // Shift + W as a placeholder
            }
            break;
    }
    return true;
}

void matrix_scan_user(void) {
  static uint8_t encoderBtn1State = 0;
  static uint8_t encoderBtn2State = 0;

  // Check if button is pressed
  uint8_t currentEncoderBtn1State = readPin(ENCODER_BTN_1);
  uint8_t currentEncoderBtn2State = readPin(ENCODER_BTN_2);

  // Check for state change from high to low (button pressed)
  if (encoderBtn1State && !currentEncoderBtn1State) {
      tap_code(KC_MUTE); // Assign a keycode to the first button
  }
  if (encoderBtn2State && !currentEncoderBtn2State) {
      tap_code(KC_CALC); // Assign a keycode to the second button
  }

  // Update state
  encoderBtn1State = currentEncoderBtn1State;
  encoderBtn2State = currentEncoderBtn2State;
}

bool encoder_update_user(uint8_t index, bool clockwise) {
  uprintf("encoder_update_user: index=%d, clockwise=%d\n", index, clockwise);
  if (index == 0) {
      if (clockwise) {
          tap_code(KC_VOLU);
      } else {
          tap_code(KC_VOLD);
      }
  }
  else if (index == 1) {
      if (clockwise) {
          tap_code(KC_PGDN);
      } else {
          tap_code(KC_PGUP);
      }
  }
  return false;
}
