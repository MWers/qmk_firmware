#include QMK_KEYBOARD_H

/* DZ60 layout using following options (from layouts diagram on KBDfans):
 *  - plate B (2.25u lshift)
 *  - opt 4 (1.75, 1, 1 on rshift)
 *  - opt 10 (2.75, 1.25, 2.25 on space, 5x1u bottom right keys)
 * http://www.keyboard-layout-editor.com/#/gists/225f0f4dcf6671405f744fabe314627c
 */

/* LAYOUT_b_4_10
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │00 │01 │02 │03 │04 │05 │06 │07 │08 │09 │0a │0b │0c │0e     │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │10   │12 │13 │14 │15 │16 │17 │18 │19 │1a │1b │1c │1d │1e   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
 * │20    │22 │23 │24 │25 │26 │27 │28 │29 │2a │2b │2c │2d      │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴┬───┬───┤
 * │30      │32 │33 │34 │35 │36 │37 │38 │39 │3a │3c    │3d │3e │
 * ├────┬───┴┬──┴─┬─┴───┴──┬┴───┼───┴───┴──┬┴──┬┴──┬───┼───┼───┤
 * │40  │41  │43  │44      │46  │48        │4a │4b │4c │4d │4e │
 * └────┴────┴────┴────────┴────┴──────────┴───┴───┴───┴───┴───┘
*/
#define LAYOUT_b_4_10( \
        K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012,       K014, \
        K100,       K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113, K114, \
        K200,       K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212, K213,       \
        K300,       K302, K303, K304, K305, K306, K307, K308, K309, K310,       K312, K313, K314, \
        K400, K401,       K403,       K404, K406,       K408,       K410, K411, K412, K413, K414  \
        ) { \
    { K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011,  K012,  KC_NO, K014 }, \
    { K100,  KC_NO, K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111,  K112,  K113,  K114 }, \
    { K200,  KC_NO, K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212,  K213,  KC_NO }, \
    { K300,  KC_NO, K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  KC_NO, K312,  K313,  K314 }, \
    { K400,  K401,  KC_NO, K403,  K404,  KC_NO, K406,  KC_NO, K408,  KC_NO, K410,  K411,  K412,  K413,  K414 }  \
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Layer 0: basic qwerty */
    LAYOUT_b_4_10(
       // |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------||------2.0-------|
          KC_GRAVE,   KC_1,    KC_2,    KC_3,   KC_4,   KC_5,     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,   KC_MINS, KC_EQL,      KC_BSPC,
       // |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------||----------------|
       //
       // |----1.5-----||--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|----1.5-----|
             KC_TAB,      KC_Q,     KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  KC_LBRC, KC_RBRC,   KC_BSLS,
       // |------------||--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|------------|
       //
       // |----1.75------||--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|------2.25--------||
           RCTL_T(KC_ESC),     KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,   KC_SCLN, KC_QUOT,     KC_ENT,
       // |--------------||--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|------------------||
       //
       // |------2.25--------|--------|--------|--------|--------|--------|--------|--------|--------|--------||----1.75------|--------|--------||
               KC_LSHIFT,      KC_Z,    KC_X,    KC_C,    KC_V,     KC_B,    KC_N,    KC_M,   KC_COMM, KC_DOT,   SFT_T(KC_SLSH), KC_UP,  KC_HYPR,
       // |------------------|--------|--------|--------|--------|--------|--------|--------|--------|--------||--------------|--------|--------||
       //
       // |---1.25---|---1.25---||---1.25---||--------2.75----------||---1.25---|------2.25--------||--------|--------|--------|--------|--------|
            KC_HYPR,    KC_LALT,    KC_LGUI,         KC_SPC,           KC_LGUI,       MO(1),          TG(1),   TT(2),  KC_LEFT, KC_DOWN, KC_RGHT
       // |----------|----------||----------||----------------------||----------|------------------||--------|--------|--------|--------|--------|
          ),

    /* Layer 1: primary fn layer */
    LAYOUT_b_4_10(
       // |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------||------2.0-------|
            KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,       KC_DEL,
       // |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------||----------------|
       //
       // |----1.5-----||--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|----1.5-----|
              KC_TAB,     KC_NO,  KC_HOME,  KC_UP,   KC_END,  KC_NO,  KC_HOME, KC_PGDN, KC_PGUP,  KC_END,  KC_NO,   KC_NO,   KC_NO,     KC_NO,
       // |------------||--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|------------|
       //
       // |----1.75------||--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|------2.25--------||
           RCTL_T(KC_ESC),  KC_NO,  KC_LEFT, KC_DOWN, KC_RIGHT, KC_NO,  KC_LEFT, KC_DOWN,  KC_UP,  KC_RIGHT, KC_NO,   KC_NO,       KC_ENT,
       // |--------------||--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|------------------||
       //
       // |------2.25--------|--------|--------|--------|--------|--------|--------|--------|--------|--------||----1.75------|--------|--------||
               KC_LSFT,       KC_MPRV, KC_MUTE, KC_VOLD, KC_VOLU, KC_MNXT,  KC_NO,   KC_NO,   KC_NO,   KC_NO,      KC_LOCK,     KC_PGUP, KC_INS,
       // |------------------|--------|--------|--------|--------|--------|--------|--------|--------|--------||--------------|--------|--------||
       //
       // |---1.25---|---1.25---||---1.25---||--------2.75----------||---1.25---|------2.25--------||--------|--------|--------|--------|--------|
             KC_MEH,   KC_LALT,     KC_LGUI,   KC_MEDIA_PLAY_PAUSE,    KC_TRNS,      KC_TRNS,        KC_TRNS, KC_TRNS, KC_HOME, KC_PGDN,  KC_END
       // |----------|----------||----------||----------------------||----------|------------------||--------|--------|--------|--------|--------|
    ),

    /* Layer 2: mouse navigation */
    /* Layer 3: numpad */
    /* Layer 4: RGB lighting controls and keyboard config, reset */
    LAYOUT_b_4_10(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,          KC_NO,            KC_NO,     TO(5),
        KC_NO, KC_NO, KC_NO, KC_NO, RESET, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,          KC_NO,            KC_NO,     RGB_HUD,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   RGB_MODE_PLAIN, RGB_MODE_FORWARD, KC_RSHIFT,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   RGB_TOG,        RGB_VAI,          RGB_HUI,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, RGB_SAD, RGB_VAD, RGB_SAI
    ),
};
