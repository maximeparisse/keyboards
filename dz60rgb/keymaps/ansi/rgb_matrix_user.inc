// Declare custom effects using the RGB_MATRIX_EFFECT macro
// (note the lack of semicolon after the macro!)
RGB_MATRIX_EFFECT(OVERWATCH)
RGB_MATRIX_EFFECT(DEFAULT)
RGB_MATRIX_EFFECT(CONFIG)
RGB_MATRIX_EFFECT(WINDOWS)

#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS
  static bool OVERWATCH(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);
    for (uint8_t i = led_min; i < led_max; i++) {
      rgb_matrix_set_color(i, RGB_GOLD);
    }
    return led_max < DRIVER_LED_TOTAL;
  }

  static bool DEFAULT(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);
    for (uint8_t i = led_min; i < led_max; i++) {
      rgb_matrix_set_color(i, RGB_CYAN);
    }
    return led_max < DRIVER_LED_TOTAL;
  }

  static bool CONFIG(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);
    for (uint8_t i = led_min; i < led_max; i++) {
      rgb_matrix_set_color(i, RGB_WHITE);
    }
    return led_max < DRIVER_LED_TOTAL;
  }

  static bool WINDOWS(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);
    for (uint8_t i = led_min; i < led_max; i++) {
      rgb_matrix_set_color(i, RGB_RED);
    }
    return led_max < DRIVER_LED_TOTAL;
  }
#endif
