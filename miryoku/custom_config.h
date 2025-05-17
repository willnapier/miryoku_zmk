#pragma once

// Mouse movement and scroll speeds
#define ZMK_MOUSE_DEFAULT_MOVE_VAL 1500
#define ZMK_MOUSE_DEFAULT_SCRL_VAL 20

// Activate MOUSE layer via left-hand thumb (momentary)
#define MIRYOKU_MAPPING_LH_THUMB_3 &mo U_MOUSE

// Mouse click mappings on right-hand thumb keys
#define MIRYOKU_MAPPING_RH_THUMB_1 &mkp BTN1
#define MIRYOKU_MAPPING_RH_THUMB_2 &mkp BTN3
#define MIRYOKU_MAPPING_RH_THUMB_3 &mkp BTN2

// MOUSE layer - exactly 40 keys
#define MIRYOKU_LAYER_MOUSE \
  U_NA,  U_NA,  U_NA,  U_NA,  U_NA, \
  U_BTN1,U_BTN2,U_BTN3,U_BTN4,U_BTN5, \
  U_NA,  U_MH_LEFT, U_MH_DOWN, U_MH_UP, U_MH_RIGHT, \
  U_NA,  U_MW_LEFT, U_MW_DOWN, U_MW_UP, U_MW_RIGHT, \
  U_NA,  U_NA,  U_NA,  U_NA,  U_NA, \
  U_NA,  U_NA,  U_NA,  U_NA, \
  MIRYOKU_MAPPING_RH_THUMB_1, \
  MIRYOKU_MAPPING_RH_THUMB_2, \
  MIRYOKU_MAPPING_RH_THUMB_3, \
  U_NA, U_NA, U_NA, U_NA, U_NA
