// NOTE: I voluntarily disabled the include guard
// because if this file is included more than once
// I need to know about it.
// #ifndef MY_COMBOS_H
// #define MY_COMBOS_H

#include "my_french_keycode_aliases.h"
#include "my_keypos_aliases.h"

#define KEYPOS_TEST keymaps[0][1][2]

enum combo_events {
    CB_EACU,
    CB_EGRV,
    CB_AGRV,
    CB_CCED,
    CB_UGRV,

    CB_ECIRC,
    CB_ACIRC,
    CB_OCIRC,
    CB_ICIRC,
    CB_UCIRC,

    CB_EACU2,
    CB_EGRV2,
    CB_AGRV2,
    CB_CCED2,
    CB_UGRV2,

    CB_ECIRC2,
    CB_ACIRC2,
    CB_OCIRC2,
    CB_ICIRC2,
    CB_UCIRC2,

    CB_EACU3,
    CB_EGRV3,
    CB_AGRV3,

    // CB_DEADCIRC,
    // CB_DEADCIRC2,
};

/*
   &~{<$    |>}=+
   _"[(#    \)]*-
   µ°@_%    `?./!
*/

// uint16_t k(int layer, int row, int col)
// {
//     return keymaps[layer][row][col];
// }

// const uint16_t PROGMEM combo_eacu[] = {fLPRN, fLBRC, COMBO_END};
const uint16_t  PROGMEM combo_eacu[] = {k113, k114, COMBO_END};
const uint16_t  PROGMEM combo_egrv[] = {k112, k113, COMBO_END};
const uint16_t  PROGMEM combo_agrv[] = {k112, k114, COMBO_END};

const uint16_t  PROGMEM combo_cced[] = {k122, k123, COMBO_END};

const uint16_t PROGMEM combo_ecirc[] = {k103, k104, COMBO_END};
const uint16_t PROGMEM combo_icirc[] = {k114, k115, COMBO_END};
const uint16_t PROGMEM combo_acirc[] = {k102, k104, COMBO_END};
const uint16_t PROGMEM combo_ocirc[] = {k102, k103, COMBO_END};
const uint16_t PROGMEM combo_ucirc[] = {k104, k105, COMBO_END};

const uint16_t  PROGMEM combo_ugrv[] = {k123, k124, COMBO_END};

// right side

const uint16_t  PROGMEM combo_eacu2[] = {km113, km114, COMBO_END};
const uint16_t  PROGMEM combo_egrv2[] = {km112, km113, COMBO_END};
const uint16_t  PROGMEM combo_agrv2[] = {km112, km114, COMBO_END};
const uint16_t PROGMEM combo_ecirc2[] = {km103, km104, COMBO_END};
const uint16_t PROGMEM combo_icirc2[] = {km114, km115, COMBO_END};
const uint16_t PROGMEM combo_acirc2[] = {km102, km104, COMBO_END};
const uint16_t PROGMEM combo_ocirc2[] = {km102, km103, COMBO_END};
const uint16_t PROGMEM combo_ucirc2[] = {km104, km105, COMBO_END};

const uint16_t  PROGMEM combo_cced2[] = {km120, km121, COMBO_END};
const uint16_t  PROGMEM combo_ugrv2[] = {km121, km122, COMBO_END};

const uint16_t  PROGMEM combo_eacu3[] = {fCOMM, fDOT, COMBO_END};
const uint16_t  PROGMEM combo_egrv3[] = {FR_N, fCOMM, COMBO_END};
const uint16_t  PROGMEM combo_agrv3[] = {fCOMM, fSLSH, COMBO_END};
// const uint16_t  PROGMEM combo_deadcirc[] = {FR_S, FR_E, FR_F, COMBO_END};
// const uint16_t  PROGMEM combo_deadcirc2[] = {FR_J, FR_I, FR_L, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    [CB_EACU] = COMBO_ACTION(combo_eacu),

    [CB_EGRV] = COMBO_ACTION(combo_egrv),
    [CB_AGRV] = COMBO_ACTION(combo_agrv),
    [CB_UGRV] = COMBO_ACTION(combo_ugrv),

    [CB_CCED] = COMBO_ACTION(combo_cced),

    [CB_ECIRC] = COMBO_ACTION(combo_ecirc),
    [CB_ACIRC] = COMBO_ACTION(combo_acirc),
    [CB_OCIRC] = COMBO_ACTION(combo_ocirc),
    [CB_ICIRC] = COMBO_ACTION(combo_icirc),
    [CB_UCIRC] = COMBO_ACTION(combo_ucirc),

    [CB_EACU2] = COMBO_ACTION(combo_eacu2),
                                        
    [CB_EGRV2] = COMBO_ACTION(combo_egrv2),
    [CB_AGRV2] = COMBO_ACTION(combo_agrv2),
    [CB_UGRV2] = COMBO_ACTION(combo_ugrv2),
                                        
    [CB_CCED2] = COMBO_ACTION(combo_cced2),

    [CB_ECIRC2] = COMBO_ACTION(combo_ecirc2),
    [CB_ACIRC2] = COMBO_ACTION(combo_acirc2),
    [CB_OCIRC2] = COMBO_ACTION(combo_ocirc2),
    [CB_ICIRC2] = COMBO_ACTION(combo_icirc2),
    [CB_UCIRC2] = COMBO_ACTION(combo_ucirc2),

    [CB_EACU3] = COMBO_ACTION(combo_eacu3),
    [CB_EGRV3] = COMBO_ACTION(combo_egrv3),
    [CB_AGRV3] = COMBO_ACTION(combo_agrv3),

    // [CB_DEADCIRC] = COMBO_ACTION(combo_deadcirc),
    // [CB_DEADCIRC2] = COMBO_ACTION(combo_deadcirc2),
};

void process_combo_event(uint16_t combo_index, bool pressed) {
    switch(combo_index)
    {
        case CB_EACU:
        case CB_EACU2:
        case CB_EACU3:
            if (pressed) tap_code16(fEACU);
            break;
        case CB_EGRV:
        case CB_EGRV2:
        case CB_EGRV3:
            if (pressed) tap_code16(fEGRV);
            break;
        case CB_AGRV:
        case CB_AGRV2:
        case CB_AGRV3:
            if (pressed) tap_code16(fAGRV);
            break;
        case CB_CCED:
        case CB_CCED2:
            if (pressed) tap_code16(fCCED);
            break;
        case CB_UGRV:
        case CB_UGRV2:
            if (pressed) tap_code16(fUGRV);
            break;
        case CB_ECIRC:
        case CB_ECIRC2:
            if (pressed) SEND_STRING(SS_TAP(X_DEADCIRC)"e");
            break;
        case CB_ACIRC:
        case CB_ACIRC2:
            if (pressed) SEND_STRING(SS_TAP(X_DEADCIRC)"q");
            break;
        case CB_OCIRC:
        case CB_OCIRC2:
            if (pressed) SEND_STRING(SS_TAP(X_DEADCIRC)"o");
            break;
        case CB_ICIRC:
        case CB_ICIRC2:
            if (pressed) SEND_STRING(SS_TAP(X_DEADCIRC)"i");
            break;
        case CB_UCIRC:
        case CB_UCIRC2:
            if (pressed) SEND_STRING(SS_TAP(X_DEADCIRC)"u");
            break;
        // case CB_DEADCIRC:
        // case CB_DEADCIRC2:
            // diabled on purpose.
            // if (pressed) tap_code16(fCIRC);
            break;
    }
}

// const keypos_t PROGMEM hand_swap_config[MATRIX_ROWS][MATRIX_COLS] = {
//   {{11, 0}, {10, 0}, {9, 0}, {8, 0}, {7, 0}, {6, 0}, {5, 0}, {4, 0}, {3, 0}, {2, 0}, {1, 0}, {0, 0}},
//   {{11, 1}, {10, 1}, {9, 1}, {8, 1}, {7, 1}, {6, 1}, {5, 1}, {4, 1}, {3, 1}, {2, 1}, {1, 1}, {0, 1}},
//   {{11, 2}, {10, 2}, {9, 2}, {8, 2}, {7, 2}, {6, 2}, {5, 2}, {4, 2}, {3, 2}, {2, 2}, {1, 2}, {0, 2}},
//   {{11, 3}, {10, 3}, {9, 3}, {8, 3}, {7, 3}, {6, 3}, {5, 3}, {4, 3}, {3, 3}, {2, 3}, {1, 3}, {0, 3}},
// };
// #endif
