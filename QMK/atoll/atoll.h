#pragma once

#include "quantum.h"

#define LAYOUT( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B,   \
    K10,  K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B,  \
    K20,    K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K3B,\
           K40,  K42,   K44,       K36,          K38, K39         \
) { \
    { K00,   K01,   K02,   K03,   K04,   K05,   K06,   K07,   K08,   K09,   K0A,   K0B   }, \
    { K10,   K11,   K12,   K13,   K14,   K15,   K16,   K17,   K18,   K19,   K1A,   K1B   }, \
    { K20,   K21,   K22,   K23,   K24,   K25,   K26,   K27,   K28,   K29,   K2A,   KC_NO }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K36,   KC_NO, K38,   K39,   KC_NO, K3B   }, \
    { K40,   KC_NO, K42,   KC_NO, K44,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
}

