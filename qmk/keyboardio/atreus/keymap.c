#include QMK_KEYBOARD_H
#include "common/keymap.h"
#include "common/combos.h"

enum layer_names {
  LAYER_OPT0,

#ifdef ENABLE_LAYOUT_OPTION1
  LAYER_OPT1,
#endif

  LAYER_GAME,
  LAYER_NUMB,
  LAYER_NAVI,
  LAYER_MOUS,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [LAYER_OPT0] = LAYOUT(
    KC_OPT0_0_0, KC_OPT0_0_1, KC_OPT0_0_2, KC_OPT0_0_3, KC_OPT0_0_4,                           KC_OPT0_0_5, KC_OPT0_0_6, KC_OPT0_0_7, KC_OPT0_0_8, KC_OPT0_0_9,
    KC_OPT0_1_0, KC_OPT0_1_1, KC_OPT0_1_2, KC_OPT0_1_3, KC_OPT0_1_4,                           KC_OPT0_1_5, KC_OPT0_1_6, KC_OPT0_1_7, KC_OPT0_1_8, KC_OPT0_1_9,
    KC_OPT0_2_0, KC_OPT0_2_1, KC_OPT0_2_2, KC_OPT0_2_3, KC_OPT0_2_4, KC_NO,       KC_NO,       KC_OPT0_2_5, KC_OPT0_2_6, KC_OPT0_2_7, KC_OPT0_2_8, KC_OPT0_2_9,
    KC_NO,       KC_NO,       KC_NO,       KC_OPT0_3_0, KC_OPT0_3_1, KC_OPT0_3_2, KC_OPT0_3_3, KC_OPT0_3_4, KC_OPT0_3_5, KC_NO,       KC_NO,       KC_NO
  ),

#ifdef ENABLE_LAYOUT_OPTION1
  [LAYER_OPT1] = LAYOUT(
    KC_OPT1_0_0, KC_OPT1_0_1, KC_OPT1_0_2, KC_OPT1_0_3, KC_OPT1_0_4,                           KC_OPT1_0_5, KC_OPT1_0_6, KC_OPT1_0_7, KC_OPT1_0_8, KC_OPT1_0_9,
    KC_OPT1_1_0, KC_OPT1_1_1, KC_OPT1_1_2, KC_OPT1_1_3, KC_OPT1_1_4,                           KC_OPT1_1_5, KC_OPT1_1_6, KC_OPT1_1_7, KC_OPT1_1_8, KC_OPT1_1_9,
    KC_OPT1_2_0, KC_OPT1_2_1, KC_OPT1_2_2, KC_OPT1_2_3, KC_OPT1_2_4, KC_NO,       KC_NO,       KC_OPT1_2_5, KC_OPT1_2_6, KC_OPT1_2_7, KC_OPT1_2_8, KC_OPT1_2_9,
    KC_NO,       KC_NO,       KC_NO,       KC_OPT1_3_0, KC_OPT1_3_1, KC_OPT1_3_2, KC_OPT1_3_3, KC_OPT1_3_4, KC_OPT1_3_5, KC_NO,       KC_NO,       KC_NO
  ),
#endif

  [LAYER_GAME] = LAYOUT(
    KC_GAME_0_0, KC_GAME_0_1, KC_GAME_0_2, KC_GAME_0_3, KC_GAME_0_4,                           KC_GAME_0_5, KC_GAME_0_6, KC_GAME_0_7, KC_GAME_0_8, KC_GAME_0_9,
    KC_GAME_1_0, KC_GAME_1_1, KC_GAME_1_2, KC_GAME_1_3, KC_GAME_1_4,                           KC_GAME_1_5, KC_GAME_1_6, KC_GAME_1_7, KC_GAME_1_8, KC_GAME_1_9,
    KC_GAME_2_0, KC_GAME_2_1, KC_GAME_2_2, KC_GAME_2_3, KC_GAME_2_4, KC_NO,       KC_NO,       KC_GAME_2_5, KC_GAME_2_6, KC_GAME_2_7, KC_GAME_2_8, KC_GAME_2_9,
    KC_NO,       KC_NO,       KC_NO,       KC_GAME_3_0, KC_GAME_3_1, KC_GAME_3_2, KC_GAME_3_3, KC_GAME_3_4, KC_GAME_3_5, KC_NO,       KC_NO,       KC_NO
  ),

  [LAYER_NUMB] = LAYOUT(
    KC_NUMB_0_0, KC_NUMB_0_1, KC_NUMB_0_2, KC_NUMB_0_3, KC_NUMB_0_4,                           KC_NUMB_0_5, KC_NUMB_0_6, KC_NUMB_0_7, KC_NUMB_0_8, KC_NUMB_0_9,
    KC_NUMB_1_0, KC_NUMB_1_1, KC_NUMB_1_2, KC_NUMB_1_3, KC_NUMB_1_4,                           KC_NUMB_1_5, KC_NUMB_1_6, KC_NUMB_1_7, KC_NUMB_1_8, KC_NUMB_1_9,
    KC_NUMB_2_0, KC_NUMB_2_1, KC_NUMB_2_2, KC_NUMB_2_3, KC_NUMB_2_4, KC_NO,       KC_NO,       KC_NUMB_2_5, KC_NUMB_2_6, KC_NUMB_2_7, KC_NUMB_2_8, KC_NUMB_2_9,
    KC_NO,       KC_NO,       KC_NO,       KC_NUMB_3_0, KC_NUMB_3_1, KC_NUMB_3_2, KC_NUMB_3_3, KC_NUMB_3_4, KC_NUMB_3_5, KC_NO,       KC_NO,       KC_NO
  ),

  [LAYER_NAVI] = LAYOUT(
    KC_NAVI_0_0, KC_NAVI_0_1, KC_NAVI_0_2, KC_NAVI_0_3, KC_NAVI_0_4,                           KC_NAVI_0_5, KC_NAVI_0_6, KC_NAVI_0_7, KC_NAVI_0_8, KC_NAVI_0_9,
    KC_NAVI_1_0, KC_NAVI_1_1, KC_NAVI_1_2, KC_NAVI_1_3, KC_NAVI_1_4,                           KC_NAVI_1_5, KC_NAVI_1_6, KC_NAVI_1_7, KC_NAVI_1_8, KC_NAVI_1_9,
    KC_NAVI_2_0, KC_NAVI_2_1, KC_NAVI_2_2, KC_NAVI_2_3, KC_NAVI_2_4, KC_NO,       KC_NO,       KC_NAVI_2_5, KC_NAVI_2_6, KC_NAVI_2_7, KC_NAVI_2_8, KC_NAVI_2_9,
    KC_NO,       KC_NO,       KC_NO,       KC_NAVI_3_0, KC_NAVI_3_1, KC_NAVI_3_2, KC_NAVI_3_3, KC_NAVI_3_4, KC_NAVI_3_5, KC_NO,       KC_NO,       KC_NO
  ),

  [LAYER_MOUS] = LAYOUT(
    KC_MOUS_0_0, KC_MOUS_0_1, KC_MOUS_0_2, KC_MOUS_0_3, KC_MOUS_0_4,                           KC_MOUS_0_5, KC_MOUS_0_6, KC_MOUS_0_7, KC_MOUS_0_8, KC_MOUS_0_9,
    KC_MOUS_1_0, KC_MOUS_1_1, KC_MOUS_1_2, KC_MOUS_1_3, KC_MOUS_1_4,                           KC_MOUS_1_5, KC_MOUS_1_6, KC_MOUS_1_7, KC_MOUS_1_8, KC_MOUS_1_9,
    KC_MOUS_2_0, KC_MOUS_2_1, KC_MOUS_2_2, KC_MOUS_2_3, KC_MOUS_2_4, KC_NO,       KC_NO,       KC_MOUS_2_5, KC_MOUS_2_6, KC_MOUS_2_7, KC_MOUS_2_8, KC_MOUS_2_9,
    KC_NO,       KC_NO,       KC_NO,       KC_MOUS_3_0, KC_MOUS_3_1, KC_MOUS_3_2, KC_MOUS_3_3, KC_MOUS_3_4, KC_MOUS_3_5, KC_NO,       KC_NO,       KC_NO
  ),
};
