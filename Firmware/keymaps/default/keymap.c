#include QMK_KEYBOARD_H

#ifdef OLED_DRIVER_ENABLE
bool oled_task_user(void) {
    oled_clear();
    oled_write_ln("MacroPad", false);
    return true;
}
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = {
        { KC_PSCR, LCTL(KC_C), LCTL(KC_V) },
        { KC_MPRV, KC_MPLY, KC_MNXT }
    }
};

// -= Encoder =-
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (clockwise) tap_code(KC_VOLU);
    else tap_code(KC_VOLD);
    return false;
}

// -= Encoder button =-
bool encoder_button_pressed = false;

void matrix_scan_user(void) {
    if (!encoder_button_pressed && !readPin(ENCODER_BUTTON_PIN)) {
        tap_code(KC_MUTE);
        encoder_button_pressed = true;
    } else if (readPin(ENCODER_BUTTON_PIN)) {
        encoder_button_pressed = false;
    }
}

