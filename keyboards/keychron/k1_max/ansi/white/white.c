/* Copyright 2024 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "quantum.h"

// clang-format off
#ifdef LED_MATRIX_ENABLE
const snled27351_led_t g_snled27351_leds[LED_MATRIX_LED_COUNT] = {
/* Refer to SNLED27351 manual for these locations
 *   driver
 *   |  LED address
 *   |  | */
    {0, F_1},
    {0, F_2},
    {0, F_3},
    {0, F_4},
    {0, F_5},
    {0, F_6},
    {0, F_7},
    {0, F_8},
    {0, F_9},
    {0, F_10},
    {0, F_11},
    {0, F_12},
    {0, F_13},
    {0, F_15},
    {0, F_16},
    {0, A_8},

    {0, E_1},
    {0, E_2},
    {0, E_3},
    {0, E_4},
    {0, E_5},
    {0, E_6},
    {0, E_7},
    {0, E_8},
    {0, E_9},
    {0, E_10},
    {0, E_11},
    {0, E_12},
    {0, E_13},
    {0, E_14},
    {0, E_15},
    {0, E_16},
    {0, A_9},

    {0, D_1},
    {0, D_2},
    {0, D_3},
    {0, D_4},
    {0, D_5},
    {0, D_6},
    {0, D_7},
    {0, D_8},
    {0, D_9},
    {0, D_10},
    {0, D_11},
    {0, D_12},
    {0, D_13},
    {0, D_14},
    {0, D_15},
    {0, D_16},
    {0, A_6},

    {0, C_1},
    {0, C_2},
    {0, C_3},
    {0, C_4},
    {0, C_5},
    {0, C_6},
    {0, C_7},
    {0, C_8},
    {0, C_9},
    {0, C_10},
    {0, C_11},
    {0, C_12},
    {0, C_14},

    {0, B_1},
    {0, B_3},
    {0, B_4},
    {0, B_5},
    {0, B_6},
    {0, B_7},
    {0, B_8},
    {0, B_9},
    {0, B_10},
    {0, B_11},
    {0, B_12},
    {0, B_14},
    {0, B_16},

    {0, A_1},
    {0, A_2},
    {0, A_3},
    {0, A_7},
    {0, A_11},
    {0, A_12},
    {0, A_13},
    {0, A_14},
    {0, A_15},
    {0, A_16},
    {0, B_15},
};

#define __ NO_LED

led_config_t g_led_config = {
    {
        // Key Matrix to LED Index
        {  0, __,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13, 14, 15 },
        { 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 },
        { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49 },
        { 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, __, 62, __, __, __ },
        { 63, __, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, __, 74, __, 75, __ },
        { 76, 77, 78, __, __, __, 79, __, __, __, 80, 81, 82, 83, 84, 85, 86 },
    },
    {
        // LED Index to Physical Position
        {0, 0},          {26, 0}, {39, 0}, {52, 0}, {65, 0}, {85, 0}, { 98, 0}, {111, 0}, {124, 0}, {144, 0}, {157, 0}, {170, 0}, {183, 0}, {198, 0}, {211, 0}, {224, 0},
        {0,14}, {13,14}, {26,14}, {39,14}, {52,14}, {65,14}, {79,14}, { 92,14}, {105,14}, {118,14}, {131,14}, {144,14}, {157,14}, {177,14}, {198,14}, {211,14}, {224,14},
        {3,26}, {20,26}, {33,26}, {46,26}, {59,26}, {72,26}, {85,26}, { 98,26}, {111,26}, {124,26}, {138,26}, {151,26}, {164,26}, {180,26}, {198,26}, {211,26}, {224,26},
        {5,39}, {23,39}, {36,39}, {49,39}, {62,39}, {75,39}, {88,39}, {102,39}, {115,39}, {128,39}, {141,39}, {154,39},           {175,39},
        {8,51},          {30,51}, {43,51}, {56,51}, {69,51}, {82,51}, { 95,51}, {108,51}, {121,51}, {134,51}, {147,51},           {172,51},           {211,51},
        {2,64}, {18,64}, {34,64},                            {84,64},                               {133,64}, {149,64}, {165,64}, {182,64}, {198,64}, {211,64}, {224,64},
    },
    {
        // RGB LED Index to Flag
        1,    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,    1,
        1,    1, 1, 1, 1, 1, 1, 1, 1, 1, 1,    1,    1,
        1, 1, 1,          1,          1, 1, 1, 1, 1, 1, 1,
    }
};
#endif
