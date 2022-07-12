#ifndef FB6DDB70_B9D2_4754_B0DD_1F4D760CB042
#define FB6DDB70_B9D2_4754_B0DD_1F4D760CB042

#include "config_common.h"

/* USB 设备描述符参数 */
#define VENDOR_ID    0xFEED
#define PRODUCT_ID   0x991D
#define DEVICE_VER   0x0001
// 制造商
#define MANUFACTURER lipk.org
// 产品名称
#define PRODUCT Lipk shiguang 1.0
// 描述
#define DESCRIPTION Lipk shiguang 1.0

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 16

/* key matrix pins */
// 32u4
#define MATRIX_ROW_PINS { D4, /* ROW0 */ D6, /* ROW1 */ D7, /* ROW2 */ B4, /* ROW3 */ B5, /* ROW4 */ B6 /* ROW5 */ }
#define MATRIX_COL_PINS { C7, E2, F7, F6, F5, F4, F1, F0, E6, B0, B7, D0, D1, D2, D3, D5 }
#define UNUSED_PINS

/* COL2ROW 或 ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* 如果不需要去抖动，则设置为 0 */
#define DEBOUNCE 5

// 全键无冲 必须
#define FORCE_NKRO

#define RGB_MATRIX_CENTER {119,  26} // RGB 矩阵中心，“Y” 键

#if RGBLIGHT_ENABLE
    #define RGB_DI_PIN C6
    #define RGBLED_NUM 84
    #define RGBLIGHT_ANIMATIONS
    #define RGBLIGHT_LIMIT_VAL 255
#endif

#if RGB_MATRIX_ENABLE
    #define RGB_DI_PIN C6
    #define DRIVER_LED_TOTAL 84
    #define RGB_MATRIX_KEYPRESSES // 对按键做出反应
    //#define RGB_MATRIX_KEYRELEASES // 对按键释放做出反应（而不是按键）
    #define RGB_MATRIX_FRAMEBUFFER_EFFECTS
    #define RGB_DISABLE_TIMEOUT 0 // 等待 RGB 自动关闭的毫秒数
    #define RGB_DISABLE_AFTER_TIMEOUT 0 // OBSOLETE：等待禁用效果的刻度数
    #define RGB_DISABLE_WHEN_USB_SUSPENDED true // 暂停时关闭效果
    #define RGB_MATRIX_MAXIMUM_BRIGHTNESS 255 // 将 LED 的最大亮度限制为 255 中的 200。如果未定义，最大亮度设置为 255
    #define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_RAINBOW_MOVING_CHEVRON // 设置默认模式，如果没有设置
    #define RGB_MATRIX_STARTUP_HUE 142
    #define RGB_MATRIX_STARTUP_SAT 255
    #define RGB_MATRIX_STARTUP_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS
    #define RGB_MATRIX_STARTUP_SPD 127
    // #define RGB_MATRIX_DISABLE_KEYCODES // 通过键码禁用对 rgb 矩阵的控制（必须使用代码功能来控制该功能）
#endif

// #define LOCKING_SUPPORT_ENABLE // 机械锁定支持。 在键盘映射中使用 KC_LCAP、KC_LNUM 或 KC_LSCR


#endif /* FB6DDB70_B9D2_4754_B0DD_1F4D760CB042 */
