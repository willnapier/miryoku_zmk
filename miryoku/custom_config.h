#pragma once

// Mouse movement and scroll speeds
#define ZMK_MOUSE_DEFAULT_MOVE_VAL 1500
#define ZMK_MOUSE_DEFAULT_SCRL_VAL 20

// Placeholder label for mouse layer node (normally u_mouse)
// Not used in dummy layer, but retained for later use
#define U_MOUSE_LAYER_NODE u_mouse

// Mappings for thumb buttons — not used in dummy, but preserved
#define MIRYOKU_MAPPING_LH_THUMB_3 &mo U_MOUSE_LAYER_NODE
#define MIRYOKU_MAPPING_RH_THUMB_1 &mkp BTN1
#define MIRYOKU_MAPPING_RH_THUMB_2 &mkp BTN3
#define MIRYOKU_MAPPING_RH_THUMB_3 &mkp BTN2

// ✅ Dummy MOUSE layer for devicetree parse test (exactly 40 bindings)
#define MIRYOKU_LAYER_MOUSE \
  &kp A, &kp B, &kp C, &kp D, &kp E, \
  &kp F, &kp G, &kp H, &kp I, &kp J, \
  &kp K, &kp L, &kp M, &kp N, &kp O, \
  &kp P, &kp Q, &kp R, &kp S, &kp T, \
  &kp U, &kp V, &kp W, &kp X, &kp Y, \
  &kp Z, &kp 1, &kp 2, &kp 3, &kp 4, \
  &kp 5, &kp 6, &kp 7, &kp 8, &kp 9, \
  &kp 0, &kp MINUS, &kp EQUAL, &kp GRAVE, &kp ESC
