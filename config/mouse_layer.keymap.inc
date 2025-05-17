u_mouse {
  bindings = <
    /* Row-1 top (5 L + 5 R) */
    &none &none &none &none &none
    &none &none &none &none &none

    /* Row-2 home (5 L + 5 R) */
    &mkp BTN1 &mkp BTN2 &mkp BTN3 &mkp BTN4 &mkp BTN5
    &none &mmv MOVE_LEFT &mmv MOVE_DOWN &mmv MOVE_UP &mmv MOVE_RIGHT

    /* Row-3 bottom+extra (6 L + 6 R) */
    &none &none &none &none &none &none
    &none &msc SCROLL_LEFT &msc SCROLL_DOWN &msc SCROLL_UP &msc SCROLL_RIGHT

    /* Row-4 thumbs (3 L + 3 R) */
    &none &none &none
    &none &none &none
  >;
};
