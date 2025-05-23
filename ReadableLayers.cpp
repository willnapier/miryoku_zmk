/ {
  keymap {
    compatible = "zmk,keymap";

    base_layer {
      label = "BASE";
      bindings = <
                &kp Q     &kp W     &kp F     &kp P     &kp B       &kp J     &kp L     &kp U     &kp Y     &kp SQT
        &u_mt LGUI A  &u_mt LALT R  &u_mt LCTRL S  &u_mt LSHFT T  &kp G       &kp M     &u_mt RSFT N  &u_mt RCTRL E  &u_mt RALT I  &u_mt RGUI O
        &u_lt 6 ESC   &u_mt RALT X  &kp C     &kp D     &kp V       &kp K     &kp H     &kp COMMA  &u_mt RALT DOT  &u_lt 3 SLASH
                         &u_lt 4 SPACE  &u_lt 5 TAB         &u_lt 8 RET   &u_lt 7 BSPC   &u_lt 9 DEL
      >;
    };

    sym_layer {
      label = "SYM";
      bindings = <
                &kp LBRC  &kp AMPS  &kp ASTRK  &kp LPAR  &kp RBRC     &none      &u_to_U_BASE  &u_to_U_EXTRA  &u_to_U_TAP  &bootloader
        &kp COLON &kp DLLR  &kp PRCNT  &kp CARET  &kp PLUS     &none      &kp LSHFT      &kp LCTRL       &kp LALT      &kp LGUI
        &kp TILDE &kp EXCL  &kp AT     &kp HASH   &kp PIPE     &none      &u_to_U_SYM    &u_to_U_MOUSE   &kp RALT      &none
                      &kp LPAR        &kp RPAR            &kp UNDER    &none          &none
      >;
    };

    num_layer {
      label = "NUM";
      bindings = <
                &kp LBKT  &kp N7  &kp N8  &kp N9  &kp RBKT     &none      &u_to_U_BASE  &u_to_U_EXTRA  &u_to_U_TAP  &bootloader
        &kp SEMI  &kp N4  &kp N5  &kp N6  &kp EQUAL    &none      &kp LSHFT      &kp LCTRL       &kp LALT      &kp LGUI
        &kp GRAVE &kp N1  &kp N2  &kp N3  &kp BSLH     &none      &u_to_U_NUM    &u_to_U_NAV     &kp RALT      &none
                      &kp DOT         &kp N0              &kp MINUS    &none          &none
      >;
    };

    nav_layer {
      label = "NAV";
      bindings = <
                &bootloader  &u_to_U_TAP  &u_to_U_EXTRA  &u_to_U_BASE  &none       &kp K_AGAIN  &kp LS(INS)  &kp LC(INS)  &kp LS(DEL)  &kp K_UNDO
        &kp LGUI      &kp LALT      &kp LCTRL      &kp LSHFT      &none       &u_caps_word  &kp LEFT    &kp DOWN     &kp UP       &kp RIGHT
        &none         &kp RALT      &u_to_U_NUM    &u_to_U_NAV   &none       &kp INS       &kp HOME    &kp PG_DN    &kp PG_UP    &kp END
                          &kp RET         &kp BSPC            &kp DEL
      >;
    };

    media_layer {
      label = "MEDIA";
      bindings = <
                &bootloader  &u_to_U_TAP  &u_to_U_EXTRA  &u_to_U_BASE  &none       &rgb_ug RGB_TOG &rgb_ug RGB_EFF &rgb_ug RGB_HUI &rgb_ug RGB_SAI &rgb_ug RGB_BRI
        &kp LGUI      &kp LALT      &kp LCTRL      &kp LSHFT      &none       &ext_power EP_TOG &kp C_PREV &kp C_VOL_DN &kp C_VOL_UP &kp C_NEXT
        &none         &kp RALT      &u_to_U_FUN    &u_to_U_MEDIA &none       &u_out_tog       &u_bt_sel_0 &u_bt_sel_1 &u_bt_sel_2 &u_bt_sel_3
                          &kp C_STOP      &kp C_PP           &kp C_MUTE
      >;
    };

    mouse_layer {
      label = "MOUSE";
      bindings = <
                &mkp MB1    &mkp MB2     &mkp MB3     U_BTN4     U_BTN5       &none     U_MH_LEFT   U_MH_DOWN   U_MH_UP    U_MH_RIGHT
        &none       U_MW_LEFT  U_MW_DOWN  U_MW_UP    U_MW_RIGHT    &none     &none      &none       &none       &none
        &none       &none      &none      &none      &none         &none     &none      &none       &none
                      &none          &none             &none
      >;
    };

    fun_layer {
      label = "FUN";
      bindings = <
                &kp F12   &kp F7   &kp F8   &kp F9   &kp PSCRN       &none     &u_to_U_BASE  &u_to_U_EXTRA  &u_to_U_TAP  &bootloader
        &kp F11   &kp F4   &kp F5   &kp F6   &kp SLCK        &none     &kp LSHFT     &kp LCTRL      &kp LALT      &kp LGUI
        &kp F10   &kp F1   &kp F2   &kp F3   &kp PAUSE_BREAK &none     &u_to_U_FUN   &u_to_U_MEDIA  &kp RALT      &none
                      &kp K_APP       &kp SPACE          &kp TAB
      >;
    };
  };
}
