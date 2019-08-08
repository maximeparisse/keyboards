#include QMK_KEYBOARD_H

#define LAYER_INI 0
#define LAYER_WIN 1
#define LAYER_OVE 2
#define LAYER_ARR 3
#define LAYER_MED 4
#define LAYER_CFG 5

#define LT_ARR LT(LAYER_ARR, KC_SPC)

#define MO_MOD MO(LAYER_MED)
#define MO_CFG OSL(LAYER_CFG)

#define DF_INI DF(LAYER_INI)
#define DF_WIN DF(LAYER_WIN)
#define DF_OVE DF(LAYER_OVE)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* [X] = LAYOUT_ANSI( */
  /*  KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS, */
  /*   KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS, */
  /*  KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,            KC_TRNS, */
  /*   KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS, */
  /*   KC_TRNS,   KC_TRNS,  KC_TRNS,                      KC_TRNS,                                  KC_TRNS,  KC_TRNS,   KC_TRNS,            KC_TRNS), */

  [LAYER_INI] = LAYOUT_ANSI(
    KC_GRAVE,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,       KC_7,     KC_8,     KC_9,      KC_0,      KC_MINS,   KC_EQL,    KC_BSPC,
    KC_TAB,     KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,       KC_U,     KC_I,     KC_O,      KC_P,      KC_LBRC,   KC_RBRC,   KC_BSLASH,
    KC_ESC,     KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,       KC_J,     KC_K,     KC_L,      KC_SCLN,   KC_QUOT,              KC_ENT,
    KC_LSFT,    KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,       KC_M,     KC_COMM,  KC_DOT,    KC_SLSH,   KC_NO,
    KC_LCTRL,   KC_LALT,  KC_LGUI,                      LT_ARR,                                   MO_MOD,    KC_NO,     KC_NO,                MO_CFG),

  [LAYER_WIN] = LAYOUT_ANSI(
    KC_GRAVE,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,       KC_7,     KC_8,     KC_9,      KC_0,      KC_MINS,   KC_EQL,    KC_BSPC,
    KC_TAB,     KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,       KC_U,     KC_I,     KC_O,      KC_P,      KC_LBRC,   KC_RBRC,   KC_BSLASH,
    KC_ESC,     KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,       KC_J,     KC_K,     KC_L,      KC_SCLN,   KC_QUOT,              KC_ENT,
    KC_LSFT,    KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,       KC_M,     KC_COMM,  KC_DOT,    KC_SLSH,   KC_NO,
    KC_LALT,    KC_LGUI,  KC_LCTRL,                     LT_ARR,                                   MO_MOD,    KC_NO,     KC_NO,                MO_CFG),

  [LAYER_OVE] = LAYOUT_ANSI(
    KC_GRAVE,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,       KC_7,     KC_8,     KC_9,      KC_0,      KC_MINS,   KC_EQL,    KC_BSPC,
    KC_TAB,     KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,       KC_U,     KC_I,     KC_O,      KC_P,      KC_LBRC,   KC_RBRC,   KC_BSLASH,
    KC_ESC,     KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,       KC_J,     KC_K,     KC_L,      KC_SCLN,   KC_QUOT,              KC_ENT,
    KC_LSFT,    KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,       KC_M,     KC_COMM,  KC_DOT,    KC_SLSH,   KC_NO,
    KC_LALT,    KC_LGUI,  KC_LCTRL,                     KC_SPC,                                   MO_MOD,    KC_NO,     KC_NO,                MO_CFG),

  [LAYER_ARR] = LAYOUT_ANSI(
    KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
    KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
    KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_LEFT,    KC_DOWN,  KC_UP,    KC_RIGHT,  KC_TRNS,   KC_TRNS,              KC_TRNS,
    KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,   KC_TRNS,
    KC_TRNS,    KC_TRNS,  KC_TRNS,                      KC_TRNS,                                  KC_TRNS,   KC_TRNS,   KC_TRNS,              KC_TRNS),

  [LAYER_MED] = LAYOUT_ANSI(
    KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_VOLD,    KC_VOLU,   KC_MUTE,
    KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_MPRV,    KC_MNXT,   KC_MPLY,
    KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,               KC_TRNS,
    KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,
    KC_TRNS,    KC_TRNS,  KC_TRNS,                      KC_TRNS,                                  KC_TRNS,  KC_TRNS,   KC_TRNS,               KC_TRNS),

  [LAYER_CFG] = LAYOUT_ANSI(
    RGB_MOD,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,      KC_NO,    KC_NO,    KC_NO,    KC_NO,     RGB_VAD,    RGB_VAI,   KC_NO,
    KC_NO,      KC_NO,    DF_WIN,   KC_NO,    RESET,    KC_NO,    KC_NO,      KC_NO,    DF_INI,   DF_OVE,   KC_NO,     KC_NO,      KC_NO,     KC_NO,
    KC_NO,      KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,      KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,                 KC_NO,
    KC_NO,      KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,      KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,
    KC_NO,      KC_NO,    KC_NO,                        KC_NO,                                    KC_NO,    KC_NO,     KC_NO,                 KC_NO),

};

uint32_t default_layer_state_set_user(uint32_t state) {
/* uint32_t layer_state_set_user(uint32_t state) { */
    switch (biton32(state)) {
    case LAYER_OVE:
      rgb_matrix_mode_noeeprom(RGB_MATRIX_CUSTOM_OVERWATCH);
      break;
    case LAYER_WIN:
      rgb_matrix_mode_noeeprom(RGB_MATRIX_CUSTOM_WINDOWS);
      break;
    default:
      rgb_matrix_mode_noeeprom(RGB_MATRIX_CUSTOM_DEFAULT);
      break;
    }
  return state;
}

uint32_t layer_state_set_user(uint32_t state) {
    switch (biton32(state)) {
    case LAYER_CFG:
      rgb_matrix_mode_noeeprom(RGB_MATRIX_CUSTOM_CONFIG);
      break;
    default:
      default_layer_state_set_user(default_layer_state);
      break;
    }
  return state;
}


