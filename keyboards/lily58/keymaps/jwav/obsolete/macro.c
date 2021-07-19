#include QMK_KEYBOARD_H
enum custom_keycodes {
    QMKBEST = SAFE_RANGE,
    ECIRC,
    ICIRC,
    OCIRC,
};

#define X_DEADCIRC X_LBRC

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) 
    {
        case QMKBEST:
            if (record->event.pressed) {
                // when keycode QMKBEST is pressed
                SEND_STRING("QMK is the best thing ever!");
            } else {
                // when keycode QMKBEST is released
            }
            break;
        case ECIRC:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_DEADCIRC)"e");
                break;
            }
        case ICIRC:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_DEADCIRC)"i");
                break;
            }
        case OCIRC:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_DEADCIRC)"o");
                break;
            }
    }
    return true;
};
