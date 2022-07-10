#include "sg_v1.h"

#if RGB_MATRIX_ENABLE
led_config_t g_led_config = {
    LAYOUT(

    // LED 索引的键矩阵
    /*           01      02   3  04  05     06       07      08      09     10     11  12        13  14      15      16 */
    /* 0 */      14,     13, 12, 11, 10,     9,       8,      7,      6,     5,     4,  3,       2 ,  1,              0,
    /* 1 */      15,     16, 17, 18, 19,    20,      21,     22,     23,    24,    25, 26,       27, 28,             29,
    /* 2 */      44,         43, 42, 41,    40,      39,     38,     37,    36,    35, 34,       33, 32,     31,     30,
    /* 3 */              45, 46, 47, 48,    49,      50,     51,     52,    53,    54, 55,       56, 57,             58,
    /* 4 */              71, 70, 69, 68,    67,      66,     65,     64,    63,    62, 61,           60,     59,
    /* 5 */              72, 73, 74, 75,             76,             77,    78,    79, 80,           81,     82,     83

    ), {

    // LED 到物理位置的索引 https://docs.qmk.fm/#/feature_led_matrix?id=common-configuration
    // /*        00          01          02          03          04          05           06         07          08          09          10          11          12          13          14          15       */
    // /* 00 */ {  0,   0}, { 16,   0}, { 30,   0}, { 45,   0}, { 59,   0}, { 74,   0}, { 89,   0}, {104,   0}, {119,   0}, {133,   0}, {149,   0}, {164,   0}, {178,   0}, {193,   0},             {224,   0},
    // /* 10 */ {  0,  13}, { 16,  13}, { 30,  13}, { 45,  13}, { 59,  13}, { 74,  13}, { 89,  13}, {104,  13}, {119,  13}, {133,  13}, {149,  13}, {164,  13}, {178,  13}, {193,  13},             {224,  13},
    // /* 20 */ {  0,  26},             { 30,  26}, { 45,  26}, { 59,  26}, { 74,  26}, { 89,  26}, {104,  26}, {119,  26}, {133,  26}, {149,  26}, {164,  26}, {178,  26}, {193,  26}, {208,  26}, {224,  26},
    // /* 30 */             { 16,  38}, { 30,  38}, { 45,  38}, { 59,  38}, { 74,  38}, { 89,  38}, {104,  38}, {119,  38}, {133,  38}, {149,  38}, {164,  38}, {178,  38}, {193,  38},             {224,  38},
    // /* 40 */             { 16,  51}, { 30,  51}, { 45,  51}, { 59,  51}, { 74,  51}, { 89,  51}, {104,  51}, {119,  51}, {133,  51}, {149,  51}, {164,  51},             {193,  51}, {208,  51},
    // /* 50 */             { 16,  64}, { 30,  64}, { 45,  64}, { 59,  64},             { 89,  64},             {119,  64}, {133,  64}, {149,  64}, {164,  64},             {193,  64}, {208,  64}, {224,  64}

    {224,   0}, {193,   0}, {178,   0}, {164,   0}, {149,   0}, {133,   0}, {119,   0}, {104,   0}, { 89,   0}, { 74,   0},
    { 59,   0}, { 45,   0}, { 30,   0}, { 16,   0}, {  0,   0}, {  0,  13}, { 16,  13}, { 30,  13}, { 45,  13}, { 59,  13},
    { 74,  13}, { 89,  13}, {104,  13}, {119,  13}, {133,  13}, {149,  13}, {164,  13}, {178,  13}, {193,  13}, {224,  13},
    {224,  26}, {208,  26}, {193,  26}, {178,  26}, {164,  26}, {149,  26}, {133,  26}, {119,  26}, {104,  26}, { 89,  26},
    { 74,  26}, { 59,  26}, { 45,  26}, { 30,  26}, {  0,  26}, { 16,  38}, { 30,  38}, { 45,  38}, { 59,  38}, { 74,  38},
    { 89,  38}, {104,  38}, {119,  38}, {133,  38}, {149,  38}, {164,  38}, {178,  38}, {193,  38}, {224,  38}, {208,  51},
    {193,  51}, {164,  51}, {149,  51}, {133,  51}, {119,  51}, {104,  51}, { 89,  51}, { 74,  51}, { 59,  51}, { 45,  51},
    { 30,  51}, { 16,  51}, { 16,  64}, { 30,  64}, { 45,  64}, { 59,  64}, { 89,  64}, {119,  64}, {133,  64}, {149,  64},
    {164,  64}, {193,  64}, {208,  64}, {224,  64}

    }, {

    // LED 索引 分组（全部设置为 LED_FLAG_KEYLIGHT）
    /*       01  02  03  04  05  06  07  08  09  10  11  12  13  14  15  16 */
    /* 00 */  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,      4,
    /* 10 */  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,      4,
    /* 20 */      4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,
    /* 30 */      4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,      4,
    /* 40 */      4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,      4,  4,
    /* 50 */      4,  4,  4,  4,      4,      4,  4,  4,  4,      4,  4,  4

    }
};
#endif // RGB_MATRIX_ENABLE


void rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    if (host_keyboard_led_state().caps_lock) {
        // CAPS LOCK
        rgb_matrix_set_color(45, RGB_WHITE); // index, red, green, blue || index, color
    }
    if (get_highest_layer(layer_state) > 0) {
        uint8_t layer = get_highest_layer(layer_state);

        for (uint8_t row = 0; row < MATRIX_ROWS; ++row) {
            for (uint8_t col = 0; col < MATRIX_COLS; ++col) {
                uint8_t index = g_led_config.matrix_co[row][col];

                if (index >= led_min && index <= led_max && index != NO_LED &&
                keymap_key_to_keycode(layer, (keypos_t){col,row}) > KC_TRNS) {
                    rgb_matrix_set_color(index, RGB_WHITE);
                }
            }
        }
    }
}
