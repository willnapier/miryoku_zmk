#pragma once

#define ZMK_MOUSE_DEFAULT_MOVE_VAL 1500
#define ZMK_MOUSE_DEFAULT_SCRL_VAL 20

// This resolves the devicetree label without redefining U_MOUSE
#define U_MOUSE_LAYER_NODE u_mouse

#define MIRYOKU_MAPPING_LH_THUMB_3 &mo U_MOUSE_LAYER_NODE
#define MIRYOKU_MAPPING_RH_THUMB_1 &mkp BTN1
#define MIRYOKU_MAPPING_RH_THUMB_2 &mkp BTN3
#define MIRYOKU_MAPPING_RH_THUMB_3 &mkp BTN2

#define MIRYOKU_LAYER_MOUSE \
  U_NA,  U_NA,     U_NA,      U_NA,        U_NA,         U_NA,     U_NA,        U_NA,         U_NA,         U_NA, \
  U_BTN1,U_BTN2,   U_BTN3,    U_BTN4,      U_BTN5,       U_MH_LEFT,U_MH_DOWN,  U_MH_UP,      U_MH_RIGHT,   U_NA, \
  U_NA,  U_NA,     U_NA,      U_NA,        U_NA,         U_MW_LEFT,U_MW_DOWN,  U_MW_UP,      U_MW_RIGHT,   U_NA, \
  &mo U_MOUSE_LAYER_NODE, U_NA, U_NA, &mkp BTN1, &mkp BTN3, &mkp BTN2, U_NA, U_NA, U_NA, U_NA
