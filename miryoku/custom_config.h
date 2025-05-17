#pragma once

/* faster mouse-key movement/scroll */
#define ZMK_MOUSE_DEFAULT_MOVE_VAL 1500
#define ZMK_MOUSE_DEFAULT_SCRL_VAL 20

/* make the left-hand third thumb key switch to the mouse layer */
#define MIRYOKU_MAPPING_LH_THUMB_3 &mo U_MOUSE

/* ──────────────── 40-token Mouse layer ────────────────
 *  Row order matches the Totem 38 mapping macro:
 *    K00-K04  K05-K09       (top row : 5 L + 5 R)
 *    K10-K14  K15-K19       (home row)
 *    K20-K24  K25-K29       (bottom row)
 *    N30 N31 K32-K37 N38 N39(thumbs row : 2 fillers + 6 keys + 2 fillers)
 *  Use U_NA for “no key” positions.
 */
#define MIRYOKU_LAYER_MOUSE \
/* top  */ U_NA,  U_NA,  U_NA,      U_NA,      U_NA,      U_NA,      U_NA,      U_NA,      U_NA,      U_NA, \
/* home */ U_BTN1,U_BTN2,U_BTN3,    U_BTN4,    U_BTN5,    U_MH_LEFT, U_MH_DOWN, U_MH_UP,   U_MH_RIGHT,U_NA, \
/* bottom*/U_NA,  U_NA,  U_NA,      U_NA,      U_NA,      U_MW_LEFT, U_MW_DOWN, U_MW_UP,   U_MW_RIGHT,U_NA, \
/* thumbs*/U_NA,  U_NA,  U_NA,      U_NA,      U_NA,      U_NA,      U_NA,      U_NA,      U_NA,      U_NA
