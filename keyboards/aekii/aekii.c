#include "my_keyboard.h"

void matrix_init_kb(void) {
    // Initialize your hardware here.
    matrix_init_user();
}

void matrix_scan_kb(void) {
    // Your custom matrix code.
    matrix_scan_user();
}

bool process_record_kb(uint16_t keycode, keyrecord_t *record) { return process_record_user(keycode, record); }
