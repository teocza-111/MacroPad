#pragma once

// Matrix
#define MATRIX_ROWS 2
#define MATRIX_COLS 3
#define MATRIX_ROW_PINS { GP26, GP27 }
#define MATRIX_COL_PINS { GP1, GP3, GP4 }

// Rotary encoder
#define ENCODER_RESOLUTION 4
#define ENCODER_A_PINS { GP29 }
#define ENCODER_B_PINS { GP28 }

// Encoder button
#define ENCODER_BUTTON_PIN 29

// OLED
#define I2C_DRIVER I2CD1
#define OLED_DRIVER SSD1306
#define OLED_DISPLAY_128X32
#define I2C1_SDA_PIN GP6
#define I2C1_SCL_PIN GP7
#define I2C1_CLOCK_SPEED 400000
