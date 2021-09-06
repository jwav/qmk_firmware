#include QMK_KEYBOARD_H
#include "my_french_keycode_aliases.h"

#define LAYER_NUM 2
#define LAYER_SYM 1

enum custom_keycodes {
    QMKBEST = SAFE_RANGE,
    KC_ECIRC,
    KC_ICIRC,
    KC_OCIRC,
    KC_UCIRC,
    KC_ACIRC,
    MC_DELLINE,
    MC_DELHOME,
    MC_DELEND
};

#define X_DEADCIRC X_LBRC

// handle custom keycodes
bool process_record_user(uint16_t keycode, keyrecord_t *record)
{
    switch (keycode) 
    {
        case KC_ECIRC:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_DEADCIRC)"e");
                break;
            }
        case KC_ICIRC:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_DEADCIRC)"i");
                break;
            }
        case KC_OCIRC:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_DEADCIRC)"o");
                break;
            }
        case KC_UCIRC:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_DEADCIRC)"u");
                break;
            }
        case KC_ACIRC:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_DEADCIRC)"q");
                break;
            }
        case MC_DELLINE:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_HOME));
                SEND_STRING(SS_LSFT(SS_TAP(X_END)));
                SEND_STRING(SS_TAP(X_DEL));
                // SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_DEL))));
                // SEND_STRING(SS_LCTL(SS_LSFT(X_DEL)));
                // tap_code16( 
                break;
            }
        case MC_DELHOME:
            if (record->event.pressed) {
                // SEND_STRING(SS_TAP(X_HOME));
                SEND_STRING(SS_LSFT(SS_TAP(X_HOME)));
                SEND_STRING(SS_TAP(X_DEL));
                // SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_DEL))));
                // SEND_STRING(SS_LCTL(SS_LSFT(X_DEL)));
                // tap_code16( 
                break;
            }
        case MC_DELEND:
            if (record->event.pressed) {
                // SEND_STRING(SS_TAP(X_HOME));
                SEND_STRING(SS_LSFT(SS_TAP(X_END)));
                SEND_STRING(SS_TAP(X_DEL));
                // SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_DEL))));
                // SEND_STRING(SS_LCTL(SS_LSFT(X_DEL)));
                // tap_code16( 
                break;
            }
    }
    return true;
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) 
{
    switch (keycode) {
        case KC_ENT:
            // return 20;
            return 100;
        default:
            return TAPPING_TERM;
    }
}
