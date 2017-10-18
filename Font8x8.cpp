/*
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
 #include "Font8x8.h"

PROGMEM const uint8_t FONT8[FONT8_SIZE][FONT8_HEIGHT] = {
// Based on: https://github.com/dhepper/font8x8/blob/master/font8x8_basic.h
		{ B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000 }, // 0 - U+0000 (nul)
		{ B00000000, B00011000, B00111100, B01111110, B00011000, B00011000, B00011000, B00000000 },   // 1 - U+0001 (<-)
		{ B00000000, B00011000, B00011000, B00011000, B01111110, B00111100, B00011000, B00000000 },   // 2 - U+0002 (->)
		{ B00000000, B00000000, B00000000, B01111111, B01111111, B00000000, B00000000, B00000000 },   // 3 - U+0003
		{ B10000000, B11100000, B11111100, B11111111, B11111111, B11111100, B11100000, B10000000 },   // 4 - U+0004
		{ B00000000, B00000000, B00011000, B00111100, B01111110, B11111111, B01111110, B01111110 },   // 5 - U+0005
		{ B00000000, B00000000, B00011000, B00100100, B01000010, B11000011, B01000010, B01111110 },   // 6 - U+0006
		{ B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000 },   // 7 - U+0007
		{ B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000 },   // 8 - U+0008
		{ B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000 },   // 9 - U+0009
		{ B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000 },   // 10 - U+000A
		{ B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000 },   // 11 - U+000B
		{ B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000 },   // 12 - U+000C
		{ B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000 },   // 13 - U+000D
		{ B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000 },   // 14 - U+000E
		{ B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000 },   // 15 - U+000F
		{ B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000 },   // 16 - U+0010
		{ B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000 },   // 17 - U+0011
		{ B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000 },   // 18 - U+0012
		{ B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000 },   // 19 - U+0013
		{ B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000 },   // 20 - U+0014
		{ B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000 },   // 21 - U+0015
		{ B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000 },   // 22 - U+0016
		{ B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000 },   // 23 - U+0017
		{ B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000 },   // 24 - U+0018
		{ B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000 },   // 25 - U+0019
		{ B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000 },   // 26 - U+001A
		{ B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000 },   // 27 - U+001B
		{ B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000 },   // 28 - U+001C
		{ B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000 },   // 29 - U+001D
		{ B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000 },   // 30 - U+001E
		{ B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000 },   // 31 - U+001F
		{ B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000 },   // 32 - U+0020 (space)
		{ B00011000, B00111100, B00111100, B00011000, B00011000, B00000000, B00011000, B00000000 },   // 33 - U+0021 (!)
		{ B01101100, B01101100, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000 },   // 34 - U+0022 (")
		{ B01101100, B01101100, B11111110, B01101100, B11111110, B01101100, B01101100, B00000000 },   // 35 - U+0023 (#)
		{ B00110000, B01111100, B11000000, B01111000, B00001100, B11111000, B00110000, B00000000 },   // 36 - U+0024 ($)
		{ B00000000, B11000110, B11001100, B00011000, B00110000, B01100110, B11000110, B00000000 },   // 37 - U+0025 (%)
		{ B00111000, B01101100, B00111000, B01110110, B11011100, B11001100, B01110110, B00000000 },   // 38 - U+0026 (&)
		{ B01100000, B01100000, B11000000, B00000000, B00000000, B00000000, B00000000, B00000000 },   // 39 - U+0027 (')
		{ B00011000, B00110000, B01100000, B01100000, B01100000, B00110000, B00011000, B00000000 },   // 40 - U+0028 (()
		{ B01100000, B00110000, B00011000, B00011000, B00011000, B00110000, B01100000, B00000000 },   // 41 - U+0029 ())
		{ B00000000, B01100110, B00111100, B11111111, B00111100, B01100110, B00000000, B00000000 },   // 42 - U+002A (*)
		{ B00000000, B00110000, B00110000, B11111100, B00110000, B00110000, B00000000, B00000000 },   // 43 - U+002B (+)
		{ B00000000, B00000000, B00000000, B00000000, B00000000, B00110000, B00110000, B01100000 },   // 44 - U+002C (,)
		{ B00000000, B00000000, B00000000, B11111100, B00000000, B00000000, B00000000, B00000000 },   // 45 - U+002D (-)
		{ B00000000, B00000000, B00000000, B00000000, B00000000, B00110000, B00110000, B00000000 },   // 46 - U+002E (.)
		{ B00000110, B00001100, B00011000, B00110000, B01100000, B11000000, B10000000, B00000000 },   // 47 - U+002F (/)
		{ B01111100, B11000110, B11001110, B11011110, B11110110, B11100110, B01111100, B00000000 },   // 48 - U+0030 (0)
		{ B00110000, B01110000, B00110000, B00110000, B00110000, B00110000, B11111100, B00000000 },   // 49 - U+0031 (1)
		{ B01111000, B11001100, B00001100, B00111000, B01100000, B11001100, B11111100, B00000000 },   // 50 - U+0032 (2)
		{ B01111000, B11001100, B00001100, B00111000, B00001100, B11001100, B01111000, B00000000 },   // 51 - U+0033 (3)
		{ B00011100, B00111100, B01101100, B11001100, B11111110, B00001100, B00011110, B00000000 },   // 52 - U+0034 (4)
		{ B11111100, B11000000, B11111000, B00001100, B00001100, B11001100, B01111000, B00000000 },   // 53 - U+0035 (5)
		{ B00111000, B01100000, B11000000, B11111000, B11001100, B11001100, B01111000, B00000000 },   // 54 - U+0036 (6)
		{ B11111100, B11001100, B00001100, B00011000, B00110000, B00110000, B00110000, B00000000 },   // 55 - U+0037 (7)
		{ B01111000, B11001100, B11001100, B01111000, B11001100, B11001100, B01111000, B00000000 },   // 56 - U+0038 (8)
		{ B01111000, B11001100, B11001100, B01111100, B00001100, B00011000, B01110000, B00000000 },   // 57 - U+0039 (9)
		{ B00000000, B00110000, B00110000, B00000000, B00000000, B00110000, B00110000, B00000000 },   // 58 - U+003A (:)
		{ B00000000, B00110000, B00110000, B00000000, B00000000, B00110000, B00110000, B01100000 },   // 59 - U+003B (//)
		{ B00011000, B00110000, B01100000, B11000000, B01100000, B00110000, B00011000, B00000000 },   // 60 - U+003C (<)
		{ B00000000, B00000000, B11111100, B00000000, B00000000, B11111100, B00000000, B00000000 },   // 61 - U+003D (=)
		{ B01100000, B00110000, B00011000, B00001100, B00011000, B00110000, B01100000, B00000000 },   // 62 - U+003E (>)
		{ B01111000, B11001100, B00001100, B00011000, B00110000, B00000000, B00110000, B00000000 },   // 63 - U+003F (?)
		{ B01111100, B11000110, B11011110, B11011110, B11011110, B11000000, B01111000, B00000000 },   // 64 - U+0040 (@)
		{ B00110000, B01111000, B11001100, B11001100, B11111100, B11001100, B11001100, B00000000 },   // 65 - U+0041 (A)
		{ B11111100, B01100110, B01100110, B01111100, B01100110, B01100110, B11111100, B00000000 },   // 66 - U+0042 (B)
		{ B00111100, B01100110, B11000000, B11000000, B11000000, B01100110, B00111100, B00000000 },   // 67 - U+0043 (C)
		{ B11111000, B01101100, B01100110, B01100110, B01100110, B01101100, B11111000, B00000000 },   // 68 - U+0044 (D)
		{ B11111110, B01100010, B01101000, B01111000, B01101000, B01100010, B11111110, B00000000 },   // 69 - U+0045 (E)
		{ B11111110, B01100010, B01101000, B01111000, B01101000, B01100000, B11110000, B00000000 },   // 70 - U+0046 (F)
		{ B00111100, B01100110, B11000000, B11000000, B11001110, B01100110, B00111110, B00000000 },   // 71 - U+0047 (G)
		{ B11001100, B11001100, B11001100, B11111100, B11001100, B11001100, B11001100, B00000000 },   // 72 - U+0048 (H)
		{ B01111000, B00110000, B00110000, B00110000, B00110000, B00110000, B01111000, B00000000 },   // 73 - U+0049 (I)
		{ B00011110, B00001100, B00001100, B00001100, B11001100, B11001100, B01111000, B00000000 },   // 74 - U+004A (J)
		{ B11100110, B01100110, B01101100, B01111000, B01101100, B01100110, B11100110, B00000000 },   // 75 - U+004B (K)
		{ B11110000, B01100000, B01100000, B01100000, B01100010, B01100110, B11111110, B00000000 },   // 76 - U+004C (L)
		{ B11000110, B11101110, B11111110, B11111110, B11010110, B11000110, B11000110, B00000000 },   // 77 - U+004D (M)
		{ B11000110, B11100110, B11110110, B11011110, B11001110, B11000110, B11000110, B00000000 },   // 78 - U+004E (N)
		{ B00111000, B01101100, B11000110, B11000110, B11000110, B01101100, B00111000, B00000000 },   // 79 - U+004F (O)
		{ B11111100, B01100110, B01100110, B01111100, B01100000, B01100000, B11110000, B00000000 },   // 80 - U+0050 (P)
		{ B01111000, B11001100, B11001100, B11001100, B11011100, B01111000, B00011100, B00000000 },   // 81 - U+0051 (Q)
		{ B11111100, B01100110, B01100110, B01111100, B01101100, B01100110, B11100110, B00000000 },   // 82 - U+0052 (R)
		{ B01111000, B11001100, B11100000, B01110000, B00011100, B11001100, B01111000, B00000000 },   // 83 - U+0053 (S)
		{ B11111100, B10110100, B00110000, B00110000, B00110000, B00110000, B01111000, B00000000 },   // 84 - U+0054 (T)
		{ B11001100, B11001100, B11001100, B11001100, B11001100, B11001100, B11111100, B00000000 },   // 85 - U+0055 (U)
		{ B11001100, B11001100, B11001100, B11001100, B11001100, B01111000, B00110000, B00000000 },   // 86 - U+0056 (V)
		{ B11000110, B11000110, B11000110, B11010110, B11111110, B11101110, B11000110, B00000000 },   // 87 - U+0057 (W)
		{ B11000110, B11000110, B01101100, B00111000, B00111000, B01101100, B11000110, B00000000 },   // 88 - U+0058 (X)
		{ B11001100, B11001100, B11001100, B01111000, B00110000, B00110000, B01111000, B00000000 },   // 89 - U+0059 (Y)
		{ B11111110, B11000110, B10001100, B00011000, B00110010, B01100110, B11111110, B00000000 },   // 90 - U+005A (Z)
		{ B01111000, B01100000, B01100000, B01100000, B01100000, B01100000, B01111000, B00000000 },   // 91 - U+005B ([)
		{ B11000000, B01100000, B00110000, B00011000, B00001100, B00000110, B00000010, B00000000 },   // 92 - U+005C (\)
		{ B01111000, B00011000, B00011000, B00011000, B00011000, B00011000, B01111000, B00000000 },   // 93 - U+005D (])
		{ B00010000, B00111000, B01101100, B11000110, B00000000, B00000000, B00000000, B00000000  },   // 94 - U+005E (^)
		{ B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B11111111 },   // 95 - U+005F (_)
		{ B00110000, B00110000, B00011000, B00000000, B00000000, B00000000, B00000000, B00000000 },   // 96 - U+0060 (`)
		{ B00000000, B00000000, B01111000, B00001100, B01111100, B11001100, B01110110, B00000000 },   // 97 - U+0061 (a)
		{ B11100000, B01100000, B01100000, B01111100, B01100110, B01100110, B11011100, B00000000 },   // 98 - U+0062 (b)
		{ B00000000, B00000000, B01111000, B11001100, B11000000, B11001100, B01111000, B00000000 },   // 99 - U+0063 (c)
		{ B00011100, B00001100, B00001100, B01111100, B11001100, B11001100, B01110110, B00000000 },   // 100 - U+0064 (d)
		{ B00000000, B00000000, B01111000, B11001100, B11111100, B11000000, B01111000, B00000000 },   // 101 - U+0065 (e)
		{ B00111000, B01101100, B01100000, B11110000, B01100000, B01100000, B11110000, B00000000 },   // 102 - U+0066 (f)
		{ B00000000, B00000000, B01110110, B11001100, B11001100, B01111100, B00001100, B11111000 },   // 103 - U+0067 (g)
		{ B11100000, B01100000, B01101100, B01110110, B01100110, B01100110, B11100110, B00000000 },   // 104 - U+0068 (h)
		{ B00110000, B00000000, B01110000, B00110000, B00110000, B00110000, B01111000, B00000000 },   // 105 - U+0069 (i)
		{ B00001100, B00000000, B00001100, B00001100, B00001100, B11001100, B11001100, B01111000 },   // 106 - U+006A (j)
		{ B11100000, B01100000, B01100110, B01101100, B01111000, B01101100, B11100110, B00000000 },   // 107 - U+006B (k)
		{ B01110000, B00110000, B00110000, B00110000, B00110000, B00110000, B01111000, B00000000 },   // 108 - U+006C (l)
		{ B00000000, B00000000, B11001100, B11111110, B11111110, B11010110, B11000110, B00000000 },   // 109 - U+006D (m)
		{ B00000000, B00000000, B11111000, B11001100, B11001100, B11001100, B11001100, B00000000 },   // 110 - U+006E (n)
		{ B00000000, B00000000, B01111000, B11001100, B11001100, B11001100, B01111000, B00000000 },   // 111 - U+006F (o)
		{ B00000000, B00000000, B11011100, B01100110, B01100110, B01111100, B01100000, B11110000 },   // 112 - U+0070 (p)
		{ B00000000, B00000000, B01110110, B11001100, B11001100, B01111100, B00001100, B00011110  },   // 113 - U+0071 (q)
		{ B00000000, B00000000, B11011100, B01110110, B01100110, B01100000, B11110000, B00000000 },   // 114 - U+0072 (r)
		{ B00000000, B00000000, B01111100, B11000000, B01111000, B00001100, B11111000, B00000000 },   // 115 - U+0073 (s)
		{ B00010000, B00110000, B01111100, B00110000, B00110000, B00110100, B00011000, B00000000 },   // 116 - U+0074 (t)
		{ B00000000, B00000000, B11001100, B11001100, B11001100, B11001100, B01110110, B00000000 },   // 117 - U+0075 (u)
		{ B00000000, B00000000, B11001100, B11001100, B11001100, B01111000, B00110000, B00000000 },   // 118 - U+0076 (v)
		{ B00000000, B00000000, B11000110, B11010110, B11111110, B11111110, B01101100, B00000000 },   // 119 - U+0077 (w)
		{ B00000000, B00000000, B11000110, B01101100, B00111000, B01101100, B11000110, B00000000 },   // 120 - U+0078 (x)
		{ B00000000, B00000000, B11001100, B11001100, B11001100, B01111100, B00001100, B11111000 },   // 121 - U+0079 (y)
		{ B00000000, B00000000, B01111110, B01001100, B00011000, B00110010, B01111110, B00000000 },   // 122 - U+007A (z)
		{ B00110000, B00110000, B11100000, B00110000, B00110000, B00011100, B00000000, B01101000 },   // 123 - U+007B ({)
		{ B00011000, B00011000, B00000000, B00011000, B00011000, B00011000, B00000000, B01101000 },   // 124 - U+007C (|)
		{ B00110000, B00110000, B00011100, B00110000, B00110000, B11100000, B00000000, B01101110 },   // 125 - U+007D (})
		{ B11011100, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B01101000 },   // 126 - U+007E (~)
		{ B01100111, B11111011, B11111000, B11101101, B10110111, B11110111, B10110101, B11111011 }    // 127 - U+007F
};

void font8x8_copy(uint8_t **data, uint8_t dataIdx, uint8_t fontIdx) {
#if LOG_D
	log(F("FN %d"), fontIdx);
#endif

	for (uint8_t row = 0; row < FONT8_HEIGHT; row++) {
		data[row][dataIdx] = pgm_read_byte(&FONT8[fontIdx][row]);
#if LOG_D
		log(F("-- [%d][%d]=0x%02x"), row, dataIdx, data[row][dataIdx]);
#endif
	}
}
