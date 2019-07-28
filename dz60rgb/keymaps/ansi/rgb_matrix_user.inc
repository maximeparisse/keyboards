// Declare custom effects using the RGB_MATRIX_EFFECT macro
// (note the lack of semicolon after the macro!)
RGB_MATRIX_EFFECT(static_gold)
RGB_MATRIX_EFFECT(static_cyan)
RGB_MATRIX_EFFECT(static_white)
RGB_MATRIX_EFFECT(static_red)
/* RGB_MATRIX_EFFECT(bar) */

// Define effects inside the `RGB_MATRIX_CUSTOM_EFFECT_IMPLS` ifdef block
#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS
  // static_gold
  static bool static_gold(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);
    for (uint8_t i = led_min; i < led_max; i++) {
      rgb_matrix_set_color(i, RGB_GOLD);
    }
    return led_max < DRIVER_LED_TOTAL;
  }

  // static_cyan
  static bool static_cyan(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);
    for (uint8_t i = led_min; i < led_max; i++) {
      rgb_matrix_set_color(i, RGB_CYAN);
    }
    return led_max < DRIVER_LED_TOTAL;
  }

  // static_white
  static bool static_white(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);
    for (uint8_t i = led_min; i < led_max; i++) {
      rgb_matrix_set_color(i, RGB_WHITE);
    }
    return led_max < DRIVER_LED_TOTAL;
  }

  // static_red
  static bool static_red(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);
    for (uint8_t i = led_min; i < led_max; i++) {
      rgb_matrix_set_color(i, RGB_RED);
    }
    return led_max < DRIVER_LED_TOTAL;
  }

  // Bar
  /* static void bars_set_color(int i, effect_params_t* params) { */
  /*   if (!HAS_ANY_FLAGS(g_led_config.flags[i], params->flags)) return; */
  /*   HSV hsv = { 0 , rgb_matrix_config.hsv.s, rgb_matrix_config.hsv.v }; */

  /*   // Take the shortest path between hues */
  /*   int16_t deltaH = ((rgb_matrix_config.hsv.h + 180) % 360 - rgb_matrix_config.hsv.h) / 4; */
  /*   if (deltaH > 127) { */
  /*     deltaH -= 256; */
  /*   } else if (deltaH < -127) { */
  /*     deltaH += 256; */
  /*   } */

  /*   hsv.h = rgb_matrix_config.hsv.h + (deltaH * (rand() & 0x03)); */
  /*   RGB rgb = hsv_to_rgb(hsv); */
  /*   rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b); */
  /* } */

  /* bool bar(effect_params_t* params) { */
  /*   if (!params->init) { */
  /*     // Change one LED every tick, make sure speed is not 0 */
  /*     if (scale16by8(g_rgb_counters.tick, qadd8(rgb_matrix_config.speed, 16)) % 10 == 0) { */
  /*       bars_set_color(rand() % DRIVER_LED_TOTAL, params); */
  /*     } */
  /*     return false; */
  /*   } */

  /*   RGB_MATRIX_USE_LIMITS(led_min, led_max); */
  /*   for (int i = led_min; i < led_max; i++) { */
  /*     bars_set_color(i, params); */
  /*   } */
  /*   return led_max < DRIVER_LED_TOTAL; */
  /* } */
#endif
