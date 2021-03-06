/*
 * =====================================================================================
 *
 *       Filename:  keymap.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/15/2016 11:44:12 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */



#define KEYMAP( \
    K03, K02, K01, K00, K04, K05, K06, K07, K0B, K0A, K09, K08, \
    K13, K12, K11, K10, K14, K15, K16, K17, K1B, K1A, K19,  \
    K23, K22, K21, K20, K24, K25, K26, K27, K2B, K2A, K29,  \
    K33, K32, K31,           K35,                K3A, K39 \
) { \
    { KC_##K00, KC_##K01, KC_##K02, KC_##K03, KC_##K04, KC_##K05, KC_##K06, KC_##K07, KC_##K08, KC_##K09, KC_##K0A, KC_##K0B }, \
    { KC_##K10, KC_##K11, KC_##K12, KC_##K13, KC_##K14, KC_##K15, KC_##K16, KC_##K17, KC_NO,    KC_##K19, KC_##K1A, KC_##K1B}, \
    { KC_##K20, KC_##K21, KC_##K22, KC_##K23, KC_##K24, KC_##K25, KC_##K26, KC_##K27, KC_NO,    KC_##K29, KC_##K2A, KC_##K2B}, \
    { KC_NO,    KC_##K31, KC_##K32, KC_##K33, KC_NO,    KC_##K35, KC_NO,    KC_NO,    KC_NO,    KC_##K39, KC_##K3A, KC_NO}\
}

uint8_t get_keycode(uint8_t row, uint8_t col);
void keymap_switch(uint8_t layer);
