#ifndef MY_COMBOS_H
#define MY_COMBOS_H


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
};

/*
   &~{<$    |>}=+
   "'[(#    \)]*-
   µ°@_%    `?./!
*/

const uint16_t PROGMEM combo_eacu[] = {fLPRN, fLBRC, COMBO_END};

const uint16_t PROGMEM combo_egrv[] = {fLBRC, fQUOT, COMBO_END};
const uint16_t PROGMEM combo_agrv[] = {fDQUO, fQUOT, COMBO_END};
const uint16_t PROGMEM combo_ugrv[] = {fUNDS, fAT, COMBO_END};

const uint16_t PROGMEM combo_cced[] = {fDEG, fAT, COMBO_END};

const uint16_t PROGMEM combo_ecirc[] = {fLCBR, fLABK, COMBO_END};
const uint16_t PROGMEM combo_icirc[] = {fLPRN, fHASH, COMBO_END};
const uint16_t PROGMEM combo_acirc[] = {fAMP, fTILD, COMBO_END};
const uint16_t PROGMEM combo_ocirc[] = {fTILD, fLCBR, COMBO_END};
const uint16_t PROGMEM combo_ucirc[] = {fDLR, fLABK, COMBO_END};

// right side

const uint16_t PROGMEM combo_eacu2[] = {fRPRN, fRBRC, COMBO_END};

const uint16_t PROGMEM combo_egrv2[] = {fRBRC, KC_PAST, COMBO_END};
const uint16_t PROGMEM combo_agrv2[] = {KC_PAST, KC_PMNS, COMBO_END};
const uint16_t PROGMEM combo_ugrv2[] = {fQUES, fSCLN, COMBO_END};

const uint16_t PROGMEM combo_cced2[] = {fSCLN, fCOLN, COMBO_END};

const uint16_t PROGMEM combo_ecirc2[] = {fRCBR, fRABK, COMBO_END};
const uint16_t PROGMEM combo_icirc2[] = {fRPRN, fBSLS, COMBO_END};
const uint16_t PROGMEM combo_acirc2[] = {KC_PPLS, KC_EQL, COMBO_END};
const uint16_t PROGMEM combo_ocirc2[] = {fEQL, fRCBR, COMBO_END};
const uint16_t PROGMEM combo_ucirc2[] = {fPIPE, fRABK, COMBO_END};


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

};

void process_combo_event(uint16_t combo_index, bool pressed) {
    switch(combo_index)
    {
        case CB_EACU:
        case CB_EACU2:
            if (pressed) tap_code16(fEACU);
            break;
        case CB_EGRV:
        case CB_EGRV2:
            if (pressed) tap_code16(fEGRV);
            break;
        case CB_AGRV:
        case CB_AGRV2:
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
    }
}


#endif

