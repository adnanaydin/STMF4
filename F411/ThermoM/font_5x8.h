const unsigned char g_ChrTab[] = {
		0x00, 0x00, 0x00, 0x00, 0x00,	//   0 (0x00)
		0x3E, 0x45, 0x51, 0x45, 0x3E,	//   1 (0x01)
		0x3E, 0x6B, 0x6F, 0x6B, 0x3E,	//   2 (0x02)
		0x1C, 0x3E, 0x7C, 0x3E, 0x1C,	//   3 (0x03)
		0x18, 0x3C, 0x7E, 0x3C, 0x18,	//   4 (0x04)
		0x30, 0x36, 0x7F, 0x36, 0x30,	//   5 (0x05)
		0x18, 0x5C, 0x7E, 0x5C, 0x18,	//   6 (0x06)
		0x00, 0x18, 0x18, 0x00, 0x00,	//   7 (0x07)
		0xFF, 0xE7, 0xE7, 0xFF, 0xFF,	//   8 (0x08)
		0x3C, 0x24, 0x24, 0x3C, 0x00,	//   9 (0x09)
		0xC3, 0xDB, 0xDB, 0xC3, 0xFF,	//  10 (0x0A)
		0x30, 0x48, 0x4A, 0x36, 0x0E,	//  11 (0x0B)
		0x06, 0x29, 0x79, 0x29, 0x06,	//  12 (0x0C)
		0x60, 0x70, 0x3F, 0x02, 0x04,	//  13 (0x0D)
		0x60, 0x7E, 0x0A, 0x35, 0x3F,	//  14 (0x0E)
		0x2A, 0x1C, 0x36, 0x1C, 0x2A,	//  15 (0x0F)
		0x00, 0x7F, 0x3E, 0x1C, 0x08,	//  16 (0x10)
		0x08, 0x1C, 0x3E, 0x7F, 0x00,	//  17 (0x11)
		0x14, 0x36, 0x7F, 0x36, 0x14,	//  18 (0x12)
		0x00, 0x5F, 0x00, 0x5F, 0x00,	//  19 (0x13)
		0x06, 0x09, 0x7F, 0x01, 0x7F,	//  20 (0x14)
		0x22, 0x4D, 0x55, 0x59, 0x22,	//  21 (0x15)
		0x60, 0x60, 0x60, 0x60, 0x00,	//  22 (0x16)
		0x14, 0xB6, 0xFF, 0xB6, 0x14,	//  23 (0x17)
		0x04, 0x06, 0x7F, 0x06, 0x04,	//  24 (0x18)
		0x10, 0x30, 0x7F, 0x30, 0x10,	//  25 (0x19)
		0x08, 0x08, 0x3E, 0x1C, 0x08,	//  26 (0x1A)
		0x08, 0x1C, 0x3E, 0x08, 0x08,	//  27 (0x1B)
		0x78, 0x40, 0x40, 0x40, 0x40,	//  28 (0x1C)
		0x08, 0x3E, 0x08, 0x3E, 0x08,	//  29 (0x1D)
		0x30, 0x3C, 0x3F, 0x3C, 0x30,	//  30 (0x1E)
		0x03, 0x0F, 0x3F, 0x0F, 0x03,	//  31 (0x1F)
		0x00, 0x00, 0x00, 0x00, 0x00,	//  32 (0x20) ' '
		0x00, 0x06, 0x5F, 0x06, 0x00,	//  33 (0x21) '!'
		0x07, 0x03, 0x00, 0x07, 0x03,	//  34 (0x22) '"'
		0x24, 0x7E, 0x24, 0x7E, 0x24,	//  35 (0x23) '#'
		0x24, 0x2B, 0x6A, 0x12, 0x00,	//  36 (0x24) '$'
		0x63, 0x13, 0x08, 0x64, 0x63,	//  37 (0x25) '%'
		0x36, 0x49, 0x56, 0x20, 0x50,	//  38 (0x26) '&'
		0x00, 0x07, 0x03, 0x00, 0x00,	//  39 (0x27) '''
		0x00, 0x3E, 0x41, 0x00, 0x00,	//  40 (0x28) '('
		0x00, 0x41, 0x3E, 0x00, 0x00,	//  41 (0x29) ')'
		0x08, 0x3E, 0x1C, 0x3E, 0x08,	//  42 (0x2A) '*'
		0x08, 0x08, 0x3E, 0x08, 0x08,	//  43 (0x2B) '+'
		0x00, 0xE0, 0x60, 0x00, 0x00,	//  44 (0x2C) ','
		0x08, 0x08, 0x08, 0x08, 0x08,	//  45 (0x2D) '-'
		0x00, 0x60, 0x60, 0x00, 0x00,	//  46 (0x2E) '.'
		0x20, 0x10, 0x08, 0x04, 0x02,	//  47 (0x2F) '/'
		0x3E, 0x51, 0x49, 0x45, 0x3E,	//  48 (0x30) '0'
		0x00, 0x42, 0x7F, 0x40, 0x00,	//  49 (0x31) '1'
		0x62, 0x51, 0x49, 0x49, 0x46,	//  50 (0x32) '2'
		0x22, 0x49, 0x49, 0x49, 0x36,	//  51 (0x33) '3'
		0x18, 0x14, 0x12, 0x7F, 0x10,	//  52 (0x34) '4'
		0x2F, 0x49, 0x49, 0x49, 0x31,	//  53 (0x35) '5'
		0x3C, 0x4A, 0x49, 0x49, 0x30,	//  54 (0x36) '6'
		0x01, 0x71, 0x09, 0x05, 0x03,	//  55 (0x37) '7'
		0x36, 0x49, 0x49, 0x49, 0x36,	//  56 (0x38) '8'
		0x06, 0x49, 0x49, 0x29, 0x1E,	//  57 (0x39) '9'
		0x00, 0x6C, 0x6C, 0x00, 0x00,	//  58 (0x3A) ':'
		0x00, 0xEC, 0x6C, 0x00, 0x00,	//  59 (0x3B) '//'
		0x08, 0x14, 0x22, 0x41, 0x00,	//  60 (0x3C) '<'
		0x24, 0x24, 0x24, 0x24, 0x24,	//  61 (0x3D) '='
		0x00, 0x41, 0x22, 0x14, 0x08,	//  62 (0x3E) '>'
		0x02, 0x01, 0x59, 0x09, 0x06,	//  63 (0x3F) '?'
		0x3E, 0x41, 0x5D, 0x55, 0x1E,	//  64 (0x40) '@'
		0x7E, 0x11, 0x11, 0x11, 0x7E,	//  65 (0x41) 'A'
		0x7F, 0x49, 0x49, 0x49, 0x36,	//  66 (0x42) 'B'
		0x3E, 0x41, 0x41, 0x41, 0x22,	//  67 (0x43) 'C'
		0x7F, 0x41, 0x41, 0x41, 0x3E,	//  68 (0x44) 'D'
		0x7F, 0x49, 0x49, 0x49, 0x41,	//  69 (0x45) 'E'
		0x7F, 0x09, 0x09, 0x09, 0x01,	//  70 (0x46) 'F'
		0x3E, 0x41, 0x49, 0x49, 0x7A,	//  71 (0x47) 'G'
		0x7F, 0x08, 0x08, 0x08, 0x7F,	//  72 (0x48) 'H'
		0x00, 0x41, 0x7F, 0x41, 0x00,	//  73 (0x49) 'I'
		0x30, 0x40, 0x40, 0x40, 0x3F,	//  74 (0x4A) 'J'
		0x7F, 0x08, 0x14, 0x22, 0x41,	//  75 (0x4B) 'K'
		0x7F, 0x40, 0x40, 0x40, 0x40,	//  76 (0x4C) 'L'
		0x7F, 0x02, 0x04, 0x02, 0x7F,	//  77 (0x4D) 'M'
		0x7F, 0x02, 0x04, 0x08, 0x7F,	//  78 (0x4E) 'N'
		0x3E, 0x41, 0x41, 0x41, 0x3E,	//  79 (0x4F) 'O'
		0x7F, 0x09, 0x09, 0x09, 0x06,	//  80 (0x50) 'P'
		0x3E, 0x41, 0x51, 0x21, 0x5E,	//  81 (0x51) 'Q'
		0x7F, 0x09, 0x09, 0x19, 0x66,	//  82 (0x52) 'R'
		0x26, 0x49, 0x49, 0x49, 0x32,	//  83 (0x53) 'S'
		0x01, 0x01, 0x7F, 0x01, 0x01,	//  84 (0x54) 'T'
		0x3F, 0x40, 0x40, 0x40, 0x3F,	//  85 (0x55) 'U'
		0x1F, 0x20, 0x40, 0x20, 0x1F,	//  86 (0x56) 'V'
		0x3F, 0x40, 0x3C, 0x40, 0x3F,	//  87 (0x57) 'W'
		0x63, 0x14, 0x08, 0x14, 0x63,	//  88 (0x58) 'X'
		0x07, 0x08, 0x70, 0x08, 0x07,	//  89 (0x59) 'Y'
		0x71, 0x49, 0x45, 0x43, 0x00,	//  90 (0x5A) 'Z'
		0x00, 0x7F, 0x41, 0x41, 0x00,	//  91 (0x5B) '['
		0x02, 0x04, 0x08, 0x10, 0x20,	//  92 (0x5C) '\'
		0x00, 0x41, 0x41, 0x7F, 0x00,	//  93 (0x5D) ']'
		0x04, 0x02, 0x01, 0x02, 0x04,	//  94 (0x5E) '^'
		0x80, 0x80, 0x80, 0x80, 0x80,	//  95 (0x5F) '_'
		0x00, 0x03, 0x07, 0x00, 0x00,	//  96 (0x60) '`'
		0x20, 0x54, 0x54, 0x54, 0x78,	//  97 (0x61) 'a'
		0x7F, 0x44, 0x44, 0x44, 0x38,	//  98 (0x62) 'b'
		0x38, 0x44, 0x44, 0x44, 0x28,	//  99 (0x63) 'c'
		0x38, 0x44, 0x44, 0x44, 0x7F,	// 100 (0x64) 'd'
		0x38, 0x54, 0x54, 0x54, 0x08,	// 101 (0x65) 'e'
		0x08, 0x7E, 0x09, 0x09, 0x00,	// 102 (0x66) 'f'
		0x18, 0xA4, 0xA4, 0xA4, 0x7C,	// 103 (0x67) 'g'
		0x7F, 0x04, 0x04, 0x78, 0x00,	// 104 (0x68) 'h'
		0x00, 0x00, 0x7D, 0x40, 0x00,	// 105 (0x69) 'i'
		0x40, 0x80, 0x84, 0x7D, 0x00,	// 106 (0x6A) 'j'
		0x7F, 0x10, 0x28, 0x44, 0x00,	// 107 (0x6B) 'k'
		0x00, 0x00, 0x7F, 0x40, 0x00,	// 108 (0x6C) 'l'
		0x7C, 0x04, 0x18, 0x04, 0x78,	// 109 (0x6D) 'm'
		0x7C, 0x04, 0x04, 0x78, 0x00,	// 110 (0x6E) 'n'
		0x38, 0x44, 0x44, 0x44, 0x38,	// 111 (0x6F) 'o'
		0xFC, 0x44, 0x44, 0x44, 0x38,	// 112 (0x70) 'p'
		0x38, 0x44, 0x44, 0x44, 0xFC,	// 113 (0x71) 'q'
		0x44, 0x78, 0x44, 0x04, 0x08,	// 114 (0x72) 'r'
		0x08, 0x54, 0x54, 0x54, 0x20,	// 115 (0x73) 's'
		0x04, 0x3E, 0x44, 0x24, 0x00,	// 116 (0x74) 't'
		0x3C, 0x40, 0x20, 0x7C, 0x00,	// 117 (0x75) 'u'
		0x1C, 0x20, 0x40, 0x20, 0x1C,	// 118 (0x76) 'v'
		0x3C, 0x60, 0x30, 0x60, 0x3C,	// 119 (0x77) 'w'
		0x6C, 0x10, 0x10, 0x6C, 0x00,	// 120 (0x78) 'x'
		0x9C, 0xA0, 0x60, 0x3C, 0x00,	// 121 (0x79) 'y'
		0x64, 0x54, 0x54, 0x4C, 0x00,	// 122 (0x7A) 'z'
		0x08, 0x3E, 0x41, 0x41, 0x00,	// 123 (0x7B) '{'
		0x00, 0x00, 0x77, 0x00, 0x00,	// 124 (0x7C) '|'
		0x00, 0x41, 0x41, 0x3E, 0x08,	// 125 (0x7D) '}'
		0x02, 0x01, 0x02, 0x01, 0x00,	// 126 (0x7E) '~'
		0x3C, 0x26, 0x23, 0x26, 0x3C,	// 127 (0x7F) ''
		0x1E, 0xA1, 0xE1, 0x21, 0x12,	// 128 (0x80) '?'
		0x3D, 0x40, 0x20, 0x7D, 0x00,	// 129 (0x81) '�'
		0x38, 0x54, 0x54, 0x55, 0x09,	// 130 (0x82) '?'
		0x20, 0x55, 0x55, 0x55, 0x78,	// 131 (0x83) '?'
		0x20, 0x55, 0x54, 0x55, 0x78,	// 132 (0x84) '?'
		0x20, 0x55, 0x55, 0x54, 0x78,	// 133 (0x85) '?'
		0x20, 0x57, 0x55, 0x57, 0x78,	// 134 (0x86) '?'
		0x1C, 0xA2, 0xE2, 0x22, 0x14,	// 135 (0x87) '?'
		0x38, 0x55, 0x55, 0x55, 0x08,	// 136 (0x88) '?'
		0x38, 0x55, 0x54, 0x55, 0x08,	// 137 (0x89) '?'
		0x38, 0x55, 0x55, 0x54, 0x08,	// 138 (0x8A) '?'
		0x00, 0x01, 0x7C, 0x41, 0x00,	// 139 (0x8B) '?'
		0x00, 0x01, 0x7D, 0x41, 0x00,	// 140 (0x8C) '?'
		0x00, 0x00, 0x7C, 0x40, 0x00,	// 141 (0x8D) '�'
		0x70, 0x29, 0x24, 0x29, 0x70,	// 142 (0x8E) '�'
		0x78, 0x2F, 0x25, 0x2F, 0x78,	// 143 (0x8F) '�'
		0x7C, 0x54, 0x54, 0x55, 0x45,	// 144 (0x90) '�'
		0x34, 0x54, 0x7C, 0x54, 0x58,	// 145 (0x91) '?'
		0x7E, 0x09, 0x7F, 0x49, 0x49,	// 146 (0x92) '?'
		0x38, 0x45, 0x45, 0x39, 0x00,	// 147 (0x93) '?'
		0x38, 0x45, 0x44, 0x39, 0x00,	// 148 (0x94) '?'
		0x39, 0x45, 0x44, 0x38, 0x00,	// 149 (0x95) '?'
		0x3C, 0x41, 0x21, 0x7D, 0x00,	// 150 (0x96) '?'
		0x3D, 0x41, 0x20, 0x7C, 0x00,	// 151 (0x97) '?'
		0x00, 0x44, 0x7D, 0x44, 0x00,	// 152 (0x98) '?'
		0x3D, 0x42, 0x42, 0x3D, 0x00,	// 153 (0x99) '?'
		0x3C, 0x41, 0x40, 0x3D, 0x00,	// 154 (0x9A) '?'
		0x70, 0x68, 0x58, 0x38, 0x04,	// 155 (0x9B) '?'
		0x48, 0x3E, 0x49, 0x49, 0x62,	// 156 (0x9C) '?'
		0x7E, 0x61, 0x5D, 0x43, 0x3F,	// 157 (0x9D) '�'
		0x12, 0xA5, 0xE5, 0x25, 0x1A,	// 158 (0x9E) '�'
		0x04, 0xAA, 0xEA, 0x2A, 0x10,	// 159 (0x9F) '?'
		0x20, 0x54, 0x55, 0x55, 0x78,	// 160 (0xA0) '�'
		0x00, 0x00, 0x7D, 0x41, 0x00,	// 161 (0xA1) '�'
		0x38, 0x44, 0x45, 0x39, 0x00,	// 162 (0xA2) '�'
		0x3C, 0x40, 0x21, 0x7D, 0x00,	// 163 (0xA3) '�'
		0x7A, 0x09, 0x0A, 0x71, 0x00,	// 164 (0xA4) '�'
		0x7A, 0x11, 0x22, 0x79, 0x00,	// 165 (0xA5) '�'
		0x3D, 0x42, 0x52, 0x52, 0x75,	// 166 (0xA6) '�'
		0x19, 0xA6, 0xA6, 0xA6, 0x7D,	// 167 (0xA7) '�'
		0x30, 0x48, 0x4D, 0x40, 0x20,	// 168 (0xA8) '�'
		0x41, 0x5D, 0x4B, 0x55, 0x3E,	// 169 (0xA9) '�'
		0x04, 0x04, 0x04, 0x04, 0x1C,	// 170 (0xAA) '�'
		0x17, 0x08, 0x4C, 0x6A, 0x50,	// 171 (0xAB) '�'
		0x17, 0x08, 0x34, 0x2A, 0x78,	// 172 (0xAC) '�'
		0x00, 0x30, 0x7D, 0x30, 0x00,	// 173 (0xAD) '�'
		0x08, 0x14, 0x00, 0x08, 0x14,	// 174 (0xAE) '�'
		0x14, 0x08, 0x00, 0x14, 0x08,	// 175 (0xAF) '�'
		0x11, 0x44, 0x11, 0x44, 0x11,	// 176 (0xB0) '�'
		0x55, 0xAA, 0x55, 0xAA, 0x55,	// 177 (0xB1) '�'
		0xEE, 0xBB, 0xEE, 0xBB, 0xEE,	// 178 (0xB2) '�'
		0x00, 0x00, 0xFF, 0x00, 0x00,	// 179 (0xB3) '�'
		0x08, 0x08, 0xFF, 0x00, 0x00,	// 180 (0xB4) '�'
		0x70, 0x28, 0x25, 0x29, 0x70,	// 181 (0xB5) '�'
		0x70, 0x29, 0x25, 0x29, 0x70,	// 182 (0xB6) '�'
		0x70, 0x29, 0x25, 0x28, 0x70,	// 183 (0xB7) '�'
		0x41, 0x5D, 0x55, 0x41, 0x3E,	// 184 (0xB8) '�'
		0xFB, 0x00, 0xFF, 0x00, 0x00,	// 185 (0xB9) '�'
		0xFF, 0x00, 0xFF, 0x00, 0x00,	// 186 (0xBA) '�'
		0xFA, 0x02, 0xFE, 0x00, 0x00,	// 187 (0xBB) '�'
		0x0B, 0x08, 0x0F, 0x00, 0x00,	// 188 (0xBC) '�'
		0x18, 0x24, 0x66, 0x24, 0x00,	// 189 (0xBD) '�'
		0x29, 0x2A, 0x7C, 0x2A, 0x29,	// 190 (0xBE) '�'
		0x08, 0x08, 0xF8, 0x00, 0x00,	// 191 (0xBF) '�'
		0x00, 0x00, 0x0F, 0x08, 0x08,	// 192 (0xC0) '�'
		0x08, 0x08, 0x0F, 0x08, 0x08,	// 193 (0xC1) '�'
		0x08, 0x08, 0xF8, 0x08, 0x08,	// 194 (0xC2) '�'
		0x00, 0x00, 0xFF, 0x08, 0x08,	// 195 (0xC3) '�'
		0x08, 0x08, 0x08, 0x08, 0x08,	// 196 (0xC4) '�'
		0x08, 0x08, 0xFF, 0x08, 0x08,	// 197 (0xC5) '�'
		0x20, 0x56, 0x55, 0x56, 0x79,	// 198 (0xC6) '�'
                    //0x70, 0x2A, 0x25, 0x2A, 0x71,	// 199 (0xC7) '�'
                    0x1E, 0xA1, 0xE1, 0x21, 0x12,	// 128 (0x80) '?'
		0x0F, 0x08, 0x0B, 0x0A, 0x0A,	// 200 (0xC8) '�'
		0xFE, 0x02, 0xFA, 0x0A, 0x0A,	// 201 (0xC9) '�'
		0x0B, 0x08, 0x0B, 0x0A, 0x0A,	// 202 (0xCA) '�'
		0xFA, 0x02, 0xFA, 0x0A, 0x0A,	// 203 (0xCB) '�'
		0xFF, 0x00, 0xFB, 0x0A, 0x0A,	// 204 (0xCC) '�'
		0x0A, 0x0A, 0x0A, 0x0A, 0x0A,	// 205 (0xCD) '�'
		0xFB, 0x00, 0xFB, 0x0A, 0x0A,	// 206 (0xCE) '�'
		0x5D, 0x22, 0x22, 0x22, 0x5D,	// 207 (0xCF) '�'
                    //0x4E, 0x51, 0x51, 0x4E, 0x00,	// 208 (0xD0) '?'
                    0x3D, 0x42, 0x52, 0x52, 0x75,	// 166 (0xA6) '�'
		0x08, 0x55, 0x55, 0x55, 0x5E,	// 209 (0xD1) '�'
		0x7C, 0x55, 0x55, 0x55, 0x44,	// 210 (0xD2) '�'
		0x7C, 0x55, 0x54, 0x55, 0x44,	// 211 (0xD3) '�'
		0x7C, 0x55, 0x55, 0x54, 0x44,	// 212 (0xD4) '�'
		0x00, 0x00, 0x00, 0x00, 0x00,	// 213 (0xD5) '�'
                    //0x00, 0x44, 0x7D, 0x45, 0x00,	// 214 (0xD6) '�'
                    0x3D, 0x42, 0x42, 0x3D, 0x00,	// 153 (0x99) '?'
		0x00, 0x45, 0x7D, 0x45, 0x00,	// 215 (0xD7) '�'
		0x00, 0x45, 0x7C, 0x45, 0x00,	// 216 (0xD8) '�'
		0x08, 0x08, 0x0F, 0x00, 0x00,	// 217 (0xD9) '�'
		0x00, 0x00, 0xF8, 0x08, 0x08,	// 218 (0xDA) '�'
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF,	// 219 (0xDB) '�'
                    //0xF0, 0xF0, 0xF0, 0xF0, 0xF0,	// 220 (0xDC) '�'
                    0x3C, 0x41, 0x40, 0x3D, 0x00,	// 154 (0x9A) '?'
                    //0x00, 0x00, 0x77, 0x00, 0x00,	// 221 (0xDD) '?'
                    0x00, 0x44, 0x7D, 0x44, 0x00,	// 152 (0x98) '?'
                    //0x00, 0x45, 0x7D, 0x44, 0x00,	// 222 (0xDE) '?'
                    0x12, 0xA5, 0xE5, 0x25, 0x1A,	// 158 (0x9E) '�'
		0x0F, 0x0F, 0x0F, 0x0F, 0x0F,	// 223 (0xDF) '�'
		0x3C, 0x42, 0x43, 0x3D, 0x00,	// 224 (0xE0) '�'
		0xFE, 0x4A, 0x4A, 0x34, 0x00,	// 225 (0xE1) '�'
		0x3C, 0x43, 0x43, 0x3D, 0x00,	// 226 (0xE2) '�'
		0x3D, 0x43, 0x42, 0x3C, 0x00,	// 227 (0xE3) '�'
		0x32, 0x49, 0x4A, 0x31, 0x00,	// 228 (0xE4) '�'
		0x3A, 0x45, 0x46, 0x39, 0x00,	// 229 (0xE5) '�'
		0xFC, 0x20, 0x20, 0x1C, 0x00,	// 230 (0xE6) '�'
                    //0x00, 0x00, 0x00, 0x00, 0x00,	// 231 (0xE7) '�'
                    0x1C, 0xA2, 0xE2, 0x22, 0x14,	// 135 (0x87) '?'
		0x22, 0x14, 0x08, 0x14, 0x22,	// 232 (0xE8) '�'
		0x3C, 0x40, 0x41, 0x3D, 0x00,	// 233 (0xE9) '�'
		0x3C, 0x41, 0x41, 0x3D, 0x00,	// 234 (0xEA) '�'
		0x3D, 0x41, 0x40, 0x3C, 0x00,	// 235 (0xEB) '�'
		0x00, 0x01, 0x7C, 0x40, 0x00,	// 236 (0xEC) '�'
		0x9C, 0xA1, 0x60, 0x3D, 0x00,	// 237 (0xED) '�'
		0x00, 0x02, 0x02, 0x02, 0x00,	// 238 (0xEE) '�'
		0x00, 0x07, 0x03, 0x00, 0x00,	// 239 (0xEF) '�'
                    //0x00, 0x08, 0x08, 0x08, 0x00,	// 240 (0xF0) '?'
                    0x19, 0xA6, 0xA6, 0xA6, 0x7D,	// 167 (0xA7) '�'
		0x00, 0x24, 0x2E, 0x24, 0x00,	// 241 (0xF1) '�'
		0x00, 0x00, 0x00, 0x00, 0x00,	// 242 (0xF2) '�'
		0x17, 0x0A, 0x34, 0x2A, 0x78,	// 243 (0xF3) '�'
		0x06, 0x09, 0x7F, 0x01, 0x7F,	// 244 (0xF4) '�'
		0x22, 0x4D, 0x55, 0x59, 0x22,	// 245 (0xF5) '�'
                    //0x08, 0x08, 0x2A, 0x08, 0x08,	// 246 (0xF6) '�'
                    0x38, 0x45, 0x44, 0x39, 0x00,	// 148 (0x94) '?'
		0x00, 0x08, 0x18, 0x18, 0x00,	// 247 (0xF7) '�'
		0x06, 0x09, 0x09, 0x06, 0x00,	// 248 (0xF8) '�'
		0x00, 0x08, 0x00, 0x08, 0x00,	// 249 (0xF9) '�'
		0x00, 0x08, 0x00, 0x00, 0x00,	// 250 (0xFA) '�'
		0x02, 0x0F, 0x00, 0x00, 0x00,	// 251 (0xFB) '�'
                    //0x09, 0x0F, 0x05, 0x00, 0x00,	// 252 (0xFC) '�'
                    0x3D, 0x40, 0x20, 0x7D, 0x00,	// 129 (0x81) '�'
                    //0x09, 0x0D, 0x0A, 0x00, 0x00,	// 253 (0xFD) '?'
                    0x00, 0x00, 0x7C, 0x40, 0x00,	// 141 (0x8D) '�'
                    //0x3C, 0x3C, 0x3C, 0x3C, 0x00,	// 254 (0xFE) '?'
                    0x04, 0xAA, 0xEA, 0x2A, 0x10,	// 159 (0x9F) '?'
		0x00, 0x00, 0x00, 0x00, 0x00,	// 255 (0xFF) '�'
};
