#define FUN_L 1
#define NAV_L 2
#define POI_L 3
#define NUM_L 4
#define SYM_L 5

#define SPC_NUM  &lt NUM_L SPACE
#define TAB_FUN  &lt FUN_L TAB
#define ENT_SYM  &lt SYM_L ENTER
#define BKSP_NAV &lt NAV_L BKSP
#define SEMI_POI &lt POI_L SEMI

/** Convenience row shorthands. */
#define _______________DEAD_HALF_ROW_______________ &trans    &trans    &trans    &trans    &trans
#define ______________HOME_ROW_GACS_L______________ &kp LGUI  &kp LALT  &kp LCTRL &kp LSHFT &trans
#define ______________HOME_ROW_GACS_R______________ &trans    &kp LSHFT &kp LCTRL &kp LALT  &kp LGUI
#define ______________HOME_ROW_CAGS_L______________ &kp LCTRL &kp LALT  &kp LGUI  &kp LSHFT &trans
#define ______________HOME_ROW_CAGS_R______________ &trans    &kp LSHFT &kp LGUI  &kp LALT  &kp LCTRL

/** Base layer */
#define _____________TOP_ALPHAS_ROW_L______________ &kp QUOT &kp COMMA &kp DOT &kp P &kp Y
#define _____________TOP_ALPHAS_ROW_R______________ &kp F    &kp G     &kp C   &kp R &kp L
#define _____________MID_ALPHAS_ROW_L______________ &kp A    &kp O     &kp E   &kp U &kp I
#define _____________MID_ALPHAS_ROW_R______________ &kp D    &kp H     &kp T   &kp N &kp S
#define _____________BOT_ALPHAS_ROW_L______________ SEMI_POI &kp Q     &kp J   &kp K &kp X
#define _____________BOT_ALPHAS_ROW_R______________ &kp B    &kp M     &kp W   &kp V &kp Z

#define ___CHIFFRE_ALPHAS_THUMBS_L____ TAB_FUN BKSP_NAV
#define ___CHIFFRE_ALPHAS_THUMBS_R____ SPC_NUM ENT_SYM

/** Function layer */
#define _____________TOP_FUNCTION_ROW_L____________ &kp F1       &kp F2       &kp F3         &kp F4       &kp F5
#define _____________TOP_FUNCTION_ROW_R____________ &kp F6       &kp F7       &kp F8         &kp F9       &kp F10
#define _____________MID_FUNCTION_ROW_L____________ ______________HOME_ROW_CAGS_L______________
#define _____________MID_FUNCTION_ROW_R____________ &kp C_VOL_UP &kp LS(LEFT) &kp LS(UP)     &kp LS(DOWN) &kp LS(RIGHT)
#define _____________BOT_FUNCTION_ROW_L____________ _______________DEAD_HALF_ROW_______________
#define _____________BOT_FUNCTION_ROW_R____________ &kp C_VOL_DN &caps_word   &kp LS(LG(N4)) &kp F11      &kp F12

#define ___CHIFFRE_FUN_THUMBS_L____ &trans &trans
#define ___CHIFFRE_FUN_THUMBS_R____ &trans &trans

/** Navigation layer */
#define ___________TOP_NAVIGATION_ROW_L____________ _______________DEAD_HALF_ROW_______________
#define ___________TOP_NAVIGATION_ROW_R____________ &trans   &msc SCRL_LEFT &msc SCRL_UP &msc SCRL_DOWN &msc SCRL_RIGHT
#define ___________MID_NAVIGATION_ROW_L____________ ______________HOME_ROW_CAGS_L______________
#define ___________MID_NAVIGATION_ROW_R____________ &kp CAPS &kp LARW       &kp UARW     &kp DARW       &kp RARW
#define ___________BOT_NAVIGATION_ROW_L____________ _______________DEAD_HALF_ROW_______________
#define ___________BOT_NAVIGATION_ROW_R____________ &kp INS  &kp HOME       &kp PG_UP    &kp PG_DN      &kp END

#define ___CHIFFRE_NAV_THUMBS_L____ &trans    &trans
#define ___CHIFFRE_NAV_THUMBS_R____ &kp SPACE &kp ENTER

/** Pointer layer */
#define _____________TOP_POINTER_ROW_L_____________ &bootloader &sys_reset   &trans       &trans       &trans
#define _____________TOP_POINTER_ROW_R_____________ &bt BT_CLR  &bt BT_SEL 0 &bt BT_SEL 1 &bt BT_SEL 2 &bt BT_SEL 3
#define _____________MID_POINTER_ROW_L_____________ ______________HOME_ROW_CAGS_L______________
#define _____________MID_POINTER_ROW_R_____________ ______________HOME_ROW_CAGS_R______________
#define _____________BOT_POINTER_ROW_L_____________ &trans      &trans       &mkp MB5     &mkp MB4     &mkp MB3
#define _____________BOT_POINTER_ROW_R_____________ &mkp MB3    &mkp MB4     &mkp MB5     &trans       &trans

#define ___CHIFFRE_POI_THUMBS_L____ &mkp MB2 &mkp MB1 
#define ___CHIFFRE_POI_THUMBS_R____ &mkp MB1 &mkp MB2

/** Numeral layer */
#define _____________TOP_NUMERAL_ROW_L_____________ &kp N1     &kp N2     &kp N3      &kp N4          &kp N5
#define _____________TOP_NUMERAL_ROW_R_____________ &kp N6           &kp N7         &kp N8      &kp N9     &kp N0
#define _____________MID_NUMERAL_ROW_L_____________ &kp LBKT   &trans     &trans      &trans          &kp BSLH
#define _____________MID_NUMERAL_ROW_R_____________ ______________HOME_ROW_CAGS_R______________
#define _____________BOT_NUMERAL_ROW_L_____________ &kp RBKT   &trans     &trans      &trans          &kp FSLH
#define _____________BOT_NUMERAL_ROW_R_____________ _______________DEAD_HALF_ROW_______________

#define ___CHIFFRE_NUM_THUMBS_L____ &kp MINUS &kp EQUAL
#define ___CHIFFRE_NUM_THUMBS_R____ &trans    &kp DOT

/** Symbols layer */
#define _____________TOP_SYMBOLS_ROW_L_____________ &kp EXCL   &kp AT     &kp HASH    &kp DLLR        &kp PRCNT
#define _____________TOP_SYMBOLS_ROW_R_____________ &kp CARET        &kp AMPS       &kp ASTRK   &kp LPAR   &kp RPAR
#define _____________MID_SYMBOLS_ROW_L_____________ &kp LBRC   &trans     &trans      &trans          &kp PIPE
#define _____________MID_SYMBOLS_ROW_R_____________ ______________HOME_ROW_CAGS_R______________
#define _____________BOT_SYMBOLS_ROW_L_____________ &kp RBRC   &trans     &trans      &trans          &kp QMARK
#define _____________BOT_SYMBOLS_ROW_R_____________ _______________DEAD_HALF_ROW_______________

#define ___CHIFFRE_SYM_THUMBS_L____ &kp MINUS &kp EQUAL
#define ___CHIFFRE_SYM_THUMBS_R____ &kp TILDE &trans
