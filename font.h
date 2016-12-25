#ifndef _FONT_H
#define _FONT_H

static uint8_t
font1[28][8] = { //alphabet_light
  { B00011000, B00011000, B00100100, B00100100, B00111100, B01000010, B01000010, B01000010 }, //A
  { B01111100, B01000010, B01000010, B01111100, B01000010, B01000010, B01000010, B01111100 }, //B
  { B00111100, B01100110, B01000010, B01000000, B01000000, B01000010, B01100110, B00111100 }, //C
  { B01111000, B01000100, B01000010, B01000010, B01000010, B01000010, B01000100, B01111000 }, //D
  { B01111110, B01000000, B01000000, B01111100, B01000000, B01000000, B01000000, B01111110 }, //E
  { B01111110, B01000000, B01000000, B01111100, B01000000, B01000000, B01000000, B01000000 }, //F
  { B00111100, B01100110, B01000010, B01000000, B01001110, B01000010, B01100110, B00111100 }, //G
  { B01000010, B01000010, B01000010, B01111110, B01000010, B01000010, B01000010, B01000010 }, //H
  { B00011100, B00001000, B00001000, B00001000, B00001000, B00001000, B00001000, B00011100 }, //I
  { B00111110, B00001000, B00001000, B00001000, B00001000, B01001000, B01001000, B00110000 }, //J
  { B01000100, B01001000, B01010000, B01100000, B01010000, B01001000, B01000100, B01000010 }, //K
  { B01000000, B01000000, B01000000, B01000000, B01000000, B01000000, B01000000, B01111110 }, //L
  { B01000001, B01100011, B01110111, B01011101, B01001001, B01000001, B01000001, B01000001 }, //M
  { B01000001, B01100001, B01110001, B01011001, B01001101, B01000111, B01000011, B01000001 }, //N
  { B00111100, B01100110, B01000010, B01000010, B01000010, B01000010, B01100110, B00111100 }, //O
  { B01111100, B01000010, B01000010, B01111100, B01000000, B01000000, B01000000, B01000000 }, //P
  { B00111100, B01100110, B01000010, B01000010, B01000010, B01001010, B01100100, B00111010 }, //Q
  { B01111100, B01000010, B01000010, B01111100, B01000100, B01000010, B01000010, B01000010 }, //R
  { B00111100, B01000010, B01000000, B00110000, B00001100, B00000010, B01000010, B00111100 }, //S
  { B01111111, B00001000, B00001000, B00001000, B00001000, B00001000, B00001000, B00001000 }, //T
  { B01000010, B01000010, B01000010, B01000010, B01000010, B01000010, B01100110, B00111100 }, //U
  { B01000001, B01000001, B00100010, B00100010, B00010100, B00010100, B00001000, B00001000 }, //V
  { B01000001, B01001001, B01001001, B01010101, B01010101, B00100010, B00100010, B00100010 }, //W
  { B01000010, B01000010, B00100100, B00011000, B00011000, B00100100, B01000010, B01000010 }, //X
  { B01000001, B00100010, B00010100, B00001000, B00001000, B00001000, B00001000, B00001000 }, //Y
  { B01111110, B00000010, B00000100, B00001000, B00010000, B00100000, B01000000, B01111110 }, //Z
  { B00001000, B00001000, B00001000, B00001000, B00001000, B00000000, B00001000, B00001000 }, //!
  { B00011100, B00100010, B00100010, B00001100, B00001000, B00000000, B00001000, B00001000 }  //?
},
font2[28][8] = { //alphabet_heavy
  { B00111100, B00111100, B01100110, B01100110, B01111110, B11111111, B11000011, B11000011 }, //A
  { B01111110, B01111111, B01100011, B01111110, B01111111, B01100011, B01111111, B01111110 }, //B
  { B00111110, B01111111, B01100011, B01100000, B01100000, B01100011, B01111111, B00111110 }, //C
  { B01111100, B01111110, B01100111, B01100011, B01100011, B01100111, B01111110, B01111100 }, //D
  { B01111111, B01111111, B01100000, B01111110, B01111110, B01100000, B01111111, B01111111 }, //E
  { B01111111, B01111111, B01100000, B01111110, B01111110, B01100000, B01100000, B01100000 }, //F
  { B00111110, B01111111, B01100011, B01100000, B01101111, B01100011, B01111111, B00111110 }, //G
  { B01100011, B01100011, B01100011, B01111111, B01111111, B01100011, B01100011, B01100011 }, //H
  { B00111100, B00111100, B00011000, B00011000, B00011000, B00011000, B00111100, B00111100 }, //I
  { B00111111, B00111111, B00001100, B00001100, B00001100, B01101100, B01111100, B00111000 }, //J
  { B01100011, B01100111, B01101110, B01111100, B01111100, B01101110, B01100111, B01100011 }, //K
  { B01100000, B01100000, B01100000, B01100000, B01100000, B01100000, B01111111, B01111111 }, //L
  { B11000011, B11100111, B11111111, B11111111, B11011011, B11000011, B11000011, B11000011 }, //M
  { B11000011, B11100011, B11110011, B11111011, B11011111, B11001111, B11000111, B11000011 }, //N
  { B00111110, B01111111, B01100011, B01100011, B01100011, B01100011, B01111111, B00111110 }, //O
  { B01111110, B01111111, B01100011, B01111111, B01111110, B01100000, B01100000, B01100000 }, //P
  { B01111100, B11111110, B11000110, B11000110, B11000110, B11001110, B11111110, B01111011 }, //Q
  { B01111110, B01111111, B01100011, B01111111, B01111110, B01100110, B01100011, B01100011 }, //R
  { B00111110, B01111111, B01100001, B00111100, B00011110, B01000011, B01111111, B00111110 }, //S
  { B11111111, B11111111, B00011000, B00011000, B00011000, B00011000, B00011000, B00011000 }, //T
  { B01100011, B01100011, B01100011, B01100011, B01100011, B01100011, B01111111, B00111110 }, //U
  { B11000011, B11000011, B11000011, B01100110, B01100110, B00111100, B00011000, B00011000 }, //V
  { B11000011, B11011011, B11011011, B11011011, B11011011, B01111110, B01100110, B01100110 }, //W
  { B11000011, B11100111, B01111110, B00111100, B00111100, B01111110, B11100111, B11000011 }, //X
  { B11000011, B11100111, B01111110, B00111100, B00011000, B00011000, B00011000, B00011000 }, //Y
  { B01111111, B01111111, B00000110, B00001100, B00011000, B00110000, B01111111, B01111111 }, //Z
  { B00011000, B00011000, B00011000, B00011000, B00011000, B00000000, B00011000, B00011000 }, //!
  { B00111100, B01111110, B01100110, B00001100, B00011000, B00011000, B00000000, B00011000 }  //?
},
font3[110][8] = { //number_display
  { B00000110, B00001001, B00001001, B00001001, B00001001, B00001001, B00001001, B00000110}, //_0
  { B00000010, B00000110, B00000010, B00000010, B00000010, B00000010, B00000010, B00000010}, //_1
  { B00000110, B00001001, B00001001, B00000001, B00000010, B00000100, B00001000, B00001111}, //_2
  { B00000110, B00001001, B00000001, B00000110, B00000001, B00000001, B00001001, B00000110}, //_3
  { B00000010, B00000110, B00000110, B00001010, B00001010, B00001111, B00000010, B00000010}, //_4
  { B00001111, B00001000, B00001000, B00001110, B00000001, B00000001, B00001001, B00000110}, //_5
  { B00000110, B00001001, B00001000, B00001110, B00001001, B00001001, B00001001, B00000110}, //_6
  { B00001111, B00000001, B00000010, B00000010, B00000100, B00000100, B00000100, B00000100}, //_7
  { B00000110, B00001001, B00001001, B00000110, B00001001, B00001001, B00001001, B00000110}, //_8
  { B00000110, B00001001, B00001001, B00000111, B00000001, B00000001, B00001001, B00000110}, //_9
  { B00100110, B01101001, B00101001, B00101001, B00101001, B00101001, B00101001, B00100110}, //10
  { B00100010, B01100110, B00100010, B00100010, B00100010, B00100010, B00100010, B00100010}, //11
  { B00100110, B01101001, B00101001, B00100001, B00100010, B00100100, B00101000, B00101111}, //12
  { B00100110, B01101001, B00100001, B00100110, B00100001, B00100001, B00101001, B00100110}, //13
  { B00100010, B01100110, B00100110, B00101010, B00101010, B00101111, B00100010, B00100010}, //14
  { B00101111, B01101000, B00101000, B00101110, B00100001, B00100001, B00101001, B00100110}, //15
  { B00100110, B01101001, B00101000, B00101110, B00101001, B00101001, B00101001, B00100110}, //16
  { B00101111, B01100001, B00100010, B00100010, B00100100, B00100100, B00100100, B00100100}, //17
  { B00100110, B01101001, B00101001, B00100110, B00101001, B00101001, B00101001, B00100110}, //18
  { B00100110, B01101001, B00101001, B00100111, B00100001, B00100001, B00101001, B00100110}, //19
  { B01100110, B10011001, B10011001, B00011001, B00101001, B01001001, B10001001, B11110110}, //20
  { B01100010, B10010110, B10010010, B00010010, B00100010, B01000010, B10000010, B11110010}, //21
  { B01100110, B10011001, B10011001, B00010001, B00100010, B01000100, B10001000, B11111111}, //22
  { B01100110, B10011001, B10010001, B00010110, B00100001, B01000001, B10001001, B11110110}, //23
  { B01100010, B10010110, B10010110, B00011010, B00101010, B01001111, B10000010, B11110010}, //24
  { B01101111, B10011000, B10011000, B00011110, B00100001, B01000001, B10001001, B11110110}, //25
  { B01100110, B10011001, B10011000, B00011110, B00101001, B01001001, B10001001, B11110110}, //26
  { B01101111, B10010001, B10010010, B00010010, B00100100, B01000100, B10000100, B11110100}, //27
  { B01100110, B10011001, B10011001, B00010110, B00101001, B01001001, B10001001, B11110110}, //28
  { B01100110, B10011001, B10011001, B00010111, B00100001, B01000001, B10001001, B11110110}, //29
  { B01100110, B10011001, B00011001, B01101001, B00011001, B00011001, B10011001, B01100110}, //30
  { B01100010, B10010110, B00010010, B01100010, B00010010, B00010010, B10010010, B01100010}, //31
  { B01100110, B10011001, B00011001, B01100001, B00010010, B00010100, B10011000, B01101111}, //32
  { B01100110, B10011001, B00010001, B01100110, B00010001, B00010001, B10011001, B01100110}, //33
  { B01100010, B10010110, B00010110, B01101010, B00011010, B00011111, B10010010, B01100010}, //34
  { B01101111, B10011000, B00011000, B01101110, B00010001, B00010001, B10011001, B01100110}, //35
  { B01100110, B10011001, B00011000, B01101110, B00011001, B00011001, B10011001, B01100110}, //36
  { B01101111, B10010001, B00010010, B01100010, B00010100, B00010100, B10010100, B01100100}, //37
  { B01100110, B10011001, B00011001, B01100110, B00011001, B00011001, B10011001, B01100110}, //38
  { B01100110, B10011001, B00011001, B01100111, B00010001, B00010001, B10011001, B01100110}, //39
  { B00100110, B01101001, B01101001, B10101001, B10101001, B11111001, B00101001, B00100110}, //40
  { B00100010, B01100110, B01100010, B10100010, B10100010, B11110010, B00100010, B00100010}, //41
  { B00100110, B01101001, B01101001, B10100001, B10100010, B11110100, B00101000, B00101111}, //42
  { B00100110, B01101001, B01100001, B10100110, B10100001, B11110001, B00101001, B00100110}, //43
  { B00100010, B01100110, B01100110, B10101010, B10101010, B11111111, B00100010, B00100010}, //44
  { B00101111, B01101000, B01101000, B10101110, B10100001, B11110001, B00101001, B00100110}, //45
  { B00100110, B01101001, B01101000, B10101110, B10101001, B11111001, B00101001, B00100110}, //46
  { B00101111, B01100001, B01100010, B10100010, B10100100, B11110100, B00100100, B00100100}, //47
  { B00100110, B01101001, B01101001, B10100110, B10101001, B11111001, B00101001, B00100110}, //48
  { B00100110, B01101001, B01101001, B10100111, B10100001, B11110001, B00101001, B00100110}, //49
  { B11110110, B10001001, B10001001, B11101001, B00011001, B00011001, B10011001, B01100110}, //50
  { B11110010, B10000110, B10000010, B11100010, B00010010, B00010010, B10010010, B01100010}, //51
  { B11110110, B10001001, B10001001, B11100001, B00010010, B00010100, B10011000, B01101111}, //52
  { B11110110, B10001001, B10000001, B11100110, B00010001, B00010001, B10011001, B01100110}, //53
  { B11110010, B10000110, B10000110, B11101010, B00011010, B00011111, B10010010, B01100010}, //54
  { B11111111, B10001000, B10001000, B11101110, B00010001, B00010001, B10011001, B01100110}, //55
  { B11110110, B10001001, B10001000, B11101110, B00011001, B00011001, B10011001, B01100110}, //56
  { B11111111, B10000001, B10000010, B11100010, B00010100, B00010100, B10010100, B01100100}, //57
  { B11110110, B10001001, B10001001, B11100110, B00011001, B00011001, B10011001, B01100110}, //58
  { B11110110, B10001001, B10001001, B11100111, B00010001, B00010001, B10011001, B01100110}, //59
  { B01100110, B10011001, B10001001, B11101001, B10011001, B10011001, B10011001, B01100110}, //60
  { B01100010, B10010110, B10000010, B11100010, B10010010, B10010010, B10010010, B01100010}, //61
  { B01100110, B10011001, B10001001, B11100001, B10010010, B10010100, B10011000, B01101111}, //62
  { B01100110, B10011001, B10000001, B11100110, B10010001, B10010001, B10011001, B01100110}, //63
  { B01100010, B10010110, B10000110, B11101010, B10011010, B10011111, B10010010, B01100010}, //64
  { B01101111, B10011000, B10001000, B11101110, B10010001, B10010001, B10011001, B01100110}, //65
  { B01100110, B10011001, B10001000, B11101110, B10011001, B10011001, B10011001, B01100110}, //66
  { B01101111, B10010001, B10000010, B11100010, B10010100, B10010100, B10010100, B01100100}, //67
  { B01100110, B10011001, B10001001, B11100110, B10011001, B10011001, B10011001, B01100110}, //68
  { B01100110, B10011001, B10001001, B11100111, B10010001, B10010001, B10011001, B01100110}, //69
  { B11110110, B00011001, B00101001, B00101001, B01001001, B01001001, B01001001, B01000110}, //70
  { B11110010, B00010110, B00100010, B00100010, B01000010, B01000010, B01000010, B01000010}, //71
  { B11110110, B00011001, B00101001, B00100001, B01000010, B01000100, B01001000, B01001111}, //72
  { B11110110, B00011001, B00100001, B00100110, B01000001, B01000001, B01001001, B01000110}, //73
  { B11110010, B00010110, B00100110, B00101010, B01001010, B01001111, B01000010, B01000010}, //74
  { B11111111, B00011000, B00101000, B00101110, B01000001, B01000001, B01001001, B01000110}, //75
  { B11110110, B00011001, B00101000, B00101110, B01001001, B01001001, B01001001, B01000110}, //76
  { B11111111, B00010001, B00100010, B00100010, B01000100, B01000100, B01000100, B01000100}, //77
  { B11110110, B00011001, B00101001, B00100110, B01001001, B01001001, B01001001, B01000110}, //78
  { B11110110, B00011001, B00101001, B00100111, B01000001, B01000001, B01001001, B01000110}, //79
  { B01100110, B10011001, B10011001, B01101001, B10011001, B10011001, B10011001, B01100110}, //80
  { B01100010, B10010110, B10010010, B01100010, B10010010, B10010010, B10010010, B01100010}, //81
  { B01100110, B10011001, B10011001, B01100001, B10010010, B10010100, B10011000, B01101111}, //82
  { B01100110, B10011001, B10010001, B01100110, B10010001, B10010001, B10011001, B01100110}, //83
  { B01100010, B10010110, B10010110, B01101010, B10011010, B10011111, B10010010, B01100010}, //84
  { B01101111, B10011000, B10011000, B01101110, B10010001, B10010001, B10011001, B01100110}, //85
  { B01100110, B10011001, B10011000, B01101110, B10011001, B10011001, B10011001, B01100110}, //86
  { B01101111, B10010001, B10010010, B01100010, B10010100, B10010100, B10010100, B01100100}, //87
  { B01100110, B10011001, B10011001, B01100110, B10011001, B10011001, B10011001, B01100110}, //88
  { B01100110, B10011001, B10011001, B01100111, B10010001, B10010001, B10011001, B01100110}, //89
  { B01100110, B10011001, B10011001, B01111001, B00011001, B00011001, B10011001, B01100110}, //90
  { B01100010, B10010110, B10010010, B01110010, B00010010, B00010010, B10010010, B01100010}, //91
  { B01100110, B10011001, B10011001, B01110001, B00010010, B00010100, B10011000, B01101111}, //92
  { B01100110, B10011001, B10010001, B01110110, B00010001, B00010001, B10011001, B01100110}, //93
  { B01100010, B10010110, B10010110, B01111010, B00011010, B00011111, B10010010, B01100010}, //94
  { B01101111, B10011000, B10011000, B01111110, B00010001, B00010001, B10011001, B01100110}, //95
  { B01100110, B10011001, B10011000, B01111110, B00011001, B00011001, B10011001, B01100110}, //96
  { B01101111, B10010001, B10010010, B01110010, B00010100, B00010100, B10010100, B01100100}, //97
  { B01100110, B10011001, B10011001, B01110110, B00011001, B00011001, B10011001, B01100110}, //98
  { B01100110, B10011001, B10011001, B01110111, B00010001, B00010001, B10011001, B01100110}, //99
  { B01100110, B10011001, B10011001, B10011001, B10011001, B10011001, B10011001, B01100110}, //00
  { B01100010, B10010110, B10010010, B10010010, B10010010, B10010010, B10010010, B01100010}, //01
  { B01100110, B10011001, B10011001, B10010001, B10010010, B10010100, B10011000, B01101111}, //02
  { B01100110, B10011001, B10010001, B10010110, B10010001, B10010001, B10011001, B01100110}, //03
  { B01100010, B10010110, B10010110, B10011010, B10011010, B10011111, B10010010, B01100010}, //04
  { B01101111, B10011000, B10011000, B10011110, B10010001, B10010001, B10011001, B01100110}, //05
  { B01100110, B10011001, B10011000, B10011110, B10011001, B10011001, B10011001, B01100110}, //06
  { B01101111, B10010001, B10010010, B10010010, B10010100, B10010100, B10010100, B01100100}, //07
  { B01100110, B10011001, B10011001, B10010110, B10011001, B10011001, B10011001, B01100110}, //08
  { B01100110, B10011001, B10011001, B10010111, B10010001, B10010001, B10011001, B01100110}  //09
},
font4[100][8] = { //number_pin
  { B00011000, B00100100, B00100100, B00100100, B00100100, B00100100, B00100100, B00011000 }, //0
  { B00001000, B00011000, B00001000, B00001000, B00001000, B00001000, B00001000, B00001000 }, //1
  { B00011000, B00100100, B00100100, B00000100, B00001000, B00010000, B00100000, B00111100 }, //2
  { B00011000, B00100100, B00000100, B00011000, B00000100, B00000100, B00100100, B00011000 }, //3
  { B00001000, B00011000, B00011000, B00101000, B00101000, B00111100, B00001000, B00001000 }, //4
  { B00111100, B00100000, B00100000, B00111000, B00000100, B00000100, B00100100, B00011000 }, //5
  { B00011000, B00100100, B00100000, B00111000, B00100100, B00100100, B00100100, B00011000 }, //6
  { B00111100, B00000100, B00001000, B00001000, B00010000, B00010000, B00010000, B00010000 }, //7
  { B00011000, B00100100, B00100100, B00011000, B00100100, B00100100, B00100100, B00011000 }, //8
  { B00011000, B00100100, B00100100, B00011100, B00000100, B00000100, B00100100, B00011000 }, //9
  { B00100110, B01101001, B00101001, B00101001, B00101001, B00101001, B00101001, B00100110 }, //10
  { B00100010, B01100110, B00100010, B00100010, B00100010, B00100010, B00100010, B00100010 }, //11
  { B00100110, B01101001, B00101001, B00100001, B00100010, B00100100, B00101000, B00101111 }, //12
  { B00100110, B01101001, B00100001, B00100110, B00100001, B00100001, B00101001, B00100110 }, //13
  { B00100010, B01100110, B00100110, B00101010, B00101010, B00101111, B00100010, B00100010 }, //14
  { B00101111, B01101000, B00101000, B00101110, B00100001, B00100001, B00101001, B00100110 }, //15
  { B00100110, B01101001, B00101000, B00101110, B00101001, B00101001, B00101001, B00100110 }, //16
  { B00101111, B01100001, B00100010, B00100010, B00100100, B00100100, B00100100, B00100100 }, //17
  { B00100110, B01101001, B00101001, B00100110, B00101001, B00101001, B00101001, B00100110 }, //18
  { B00100110, B01101001, B00101001, B00100111, B00100001, B00100001, B00101001, B00100110 }, //19
  { B01100110, B10011001, B10011001, B00011001, B00101001, B01001001, B10001001, B11110110 }, //20
  { B01100010, B10010110, B10010010, B00010010, B00100010, B01000010, B10000010, B11110010 }, //21
  { B01100110, B10011001, B10011001, B00010001, B00100010, B01000100, B10001000, B11111111 }, //22
  { B01100110, B10011001, B10010001, B00010110, B00100001, B01000001, B10001001, B11110110 }, //23
  { B01100010, B10010110, B10010110, B00011010, B00101010, B01001111, B10000010, B11110010 }, //24
  { B01101111, B10011000, B10011000, B00011110, B00100001, B01000001, B10001001, B11110110 }, //25
  { B01100110, B10011001, B10011000, B00011110, B00101001, B01001001, B10001001, B11110110 }, //26
  { B01101111, B10010001, B10010010, B00010010, B00100100, B01000100, B10000100, B11110100 }, //27
  { B01100110, B10011001, B10011001, B00010110, B00101001, B01001001, B10001001, B11110110 }, //28
  { B01100110, B10011001, B10011001, B00010111, B00100001, B01000001, B10001001, B11110110 }, //29
  { B01100110, B10011001, B00011001, B01101001, B00011001, B00011001, B10011001, B01100110 }, //30
  { B01100010, B10010110, B00010010, B01100010, B00010010, B00010010, B10010010, B01100010 }, //31
  { B01100110, B10011001, B00011001, B01100001, B00010010, B00010100, B10011000, B01101111 }, //32
  { B01100110, B10011001, B00010001, B01100110, B00010001, B00010001, B10011001, B01100110 }, //33
  { B01100010, B10010110, B00010110, B01101010, B00011010, B00011111, B10010010, B01100010 }, //34
  { B01101111, B10011000, B00011000, B01101110, B00010001, B00010001, B10011001, B01100110 }, //35
  { B01100110, B10011001, B00011000, B01101110, B00011001, B00011001, B10011001, B01100110 }, //36
  { B01101111, B10010001, B00010010, B01100010, B00010100, B00010100, B10010100, B01100100 }, //37
  { B01100110, B10011001, B00011001, B01100110, B00011001, B00011001, B10011001, B01100110 }, //38
  { B01100110, B10011001, B00011001, B01100111, B00010001, B00010001, B10011001, B01100110 }, //39
  { B00100110, B01101001, B01101001, B10101001, B10101001, B11111001, B00101001, B00100110 }, //40
  { B00100010, B01100110, B01100010, B10100010, B10100010, B11110010, B00100010, B00100010 }, //41
  { B00100110, B01101001, B01101001, B10100001, B10100010, B11110100, B00101000, B00101111 }, //42
  { B00100110, B01101001, B01100001, B10100110, B10100001, B11110001, B00101001, B00100110 }, //43
  { B00100010, B01100110, B01100110, B10101010, B10101010, B11111111, B00100010, B00100010 }, //44
  { B00101111, B01101000, B01101000, B10101110, B10100001, B11110001, B00101001, B00100110 }, //45
  { B00100110, B01101001, B01101000, B10101110, B10101001, B11111001, B00101001, B00100110 }, //46
  { B00101111, B01100001, B01100010, B10100010, B10100100, B11110100, B00100100, B00100100 }, //47
  { B00100110, B01101001, B01101001, B10100110, B10101001, B11111001, B00101001, B00100110 }, //48
  { B00100110, B01101001, B01101001, B10100111, B10100001, B11110001, B00101001, B00100110 }, //49
  { B11110110, B10001001, B10001001, B11101001, B00011001, B00011001, B10011001, B01100110 }, //50
  { B11110010, B10000110, B10000010, B11100010, B00010010, B00010010, B10010010, B01100010 }, //51
  { B11110110, B10001001, B10001001, B11100001, B00010010, B00010100, B10011000, B01101111 }, //52
  { B11110110, B10001001, B10000001, B11100110, B00010001, B00010001, B10011001, B01100110 }, //53
  { B11110010, B10000110, B10000110, B11101010, B00011010, B00011111, B10010010, B01100010 }, //54
  { B11111111, B10001000, B10001000, B11101110, B00010001, B00010001, B10011001, B01100110 }, //55
  { B11110110, B10001001, B10001000, B11101110, B00011001, B00011001, B10011001, B01100110 }, //56
  { B11111111, B10000001, B10000010, B11100010, B00010100, B00010100, B10010100, B01100100 }, //57
  { B11110110, B10001001, B10001001, B11100110, B00011001, B00011001, B10011001, B01100110 }, //58
  { B11110110, B10001001, B10001001, B11100111, B00010001, B00010001, B10011001, B01100110 }, //59
  { B01100110, B10011001, B10001001, B11101001, B10011001, B10011001, B10011001, B01100110 }, //60
  { B01100010, B10010110, B10000010, B11100010, B10010010, B10010010, B10010010, B01100010 }, //61
  { B01100110, B10011001, B10001001, B11100001, B10010010, B10010100, B10011000, B01101111 }, //62
  { B01100110, B10011001, B10000001, B11100110, B10010001, B10010001, B10011001, B01100110 }, //63
  { B01100010, B10010110, B10000110, B11101010, B10011010, B10011111, B10010010, B01100010 }, //64
  { B01101111, B10011000, B10001000, B11101110, B10010001, B10010001, B10011001, B01100110 }, //65
  { B01100110, B10011001, B10001000, B11101110, B10011001, B10011001, B10011001, B01100110 }, //66
  { B01101111, B10010001, B10000010, B11100010, B10010100, B10010100, B10010100, B01100100 }, //67
  { B01100110, B10011001, B10001001, B11100110, B10011001, B10011001, B10011001, B01100110 }, //68
  { B01100110, B10011001, B10001001, B11100111, B10010001, B10010001, B10011001, B01100110 }, //69
  { B11110110, B00011001, B00101001, B00101001, B01001001, B01001001, B01001001, B01000110 }, //70
  { B11110010, B00010110, B00100010, B00100010, B01000010, B01000010, B01000010, B01000010 }, //71
  { B11110110, B00011001, B00101001, B00100001, B01000010, B01000100, B01001000, B01001111 }, //72
  { B11110110, B00011001, B00100001, B00100110, B01000001, B01000001, B01001001, B01000110 }, //73
  { B11110010, B00010110, B00100110, B00101010, B01001010, B01001111, B01000010, B01000010 }, //74
  { B11111111, B00011000, B00101000, B00101110, B01000001, B01000001, B01001001, B01000110 }, //75
  { B11110110, B00011001, B00101000, B00101110, B01001001, B01001001, B01001001, B01000110 }, //76
  { B11111111, B00010001, B00100010, B00100010, B01000100, B01000100, B01000100, B01000100 }, //77
  { B11110110, B00011001, B00101001, B00100110, B01001001, B01001001, B01001001, B01000110 }, //78
  { B11110110, B00011001, B00101001, B00100111, B01000001, B01000001, B01001001, B01000110 }, //79
  { B01100110, B10011001, B10011001, B01101001, B10011001, B10011001, B10011001, B01100110 }, //80
  { B01100010, B10010110, B10010010, B01100010, B10010010, B10010010, B10010010, B01100010 }, //81
  { B01100110, B10011001, B10011001, B01100001, B10010010, B10010100, B10011000, B01101111 }, //82
  { B01100110, B10011001, B10010001, B01100110, B10010001, B10010001, B10011001, B01100110 }, //83
  { B01100010, B10010110, B10010110, B01101010, B10011010, B10011111, B10010010, B01100010 }, //84
  { B01101111, B10011000, B10011000, B01101110, B10010001, B10010001, B10011001, B01100110 }, //85
  { B01100110, B10011001, B10011000, B01101110, B10011001, B10011001, B10011001, B01100110 }, //86
  { B01101111, B10010001, B10010010, B01100010, B10010100, B10010100, B10010100, B01100100 }, //87
  { B01100110, B10011001, B10011001, B01100110, B10011001, B10011001, B10011001, B01100110 }, //88
  { B01100110, B10011001, B10011001, B01100111, B10010001, B10010001, B10011001, B01100110 }, //89
  { B01100110, B10011001, B10011001, B01111001, B00011001, B00011001, B10011001, B01100110 }, //90
  { B01100010, B10010110, B10010010, B01110010, B00010010, B00010010, B10010010, B01100010 }, //91
  { B01100110, B10011001, B10011001, B01110001, B00010010, B00010100, B10011000, B01101111 }, //92
  { B01100110, B10011001, B10010001, B01110110, B00010001, B00010001, B10011001, B01100110 }, //93
  { B01100010, B10010110, B10010110, B01111010, B00011010, B00011111, B10010010, B01100010 }, //94
  { B01101111, B10011000, B10011000, B01111110, B00010001, B00010001, B10011001, B01100110 }, //95
  { B01100110, B10011001, B10011000, B01111110, B00011001, B00011001, B10011001, B01100110 }, //96
  { B01101111, B10010001, B10010010, B01110010, B00010100, B00010100, B10010100, B01100100 }, //97
  { B01100110, B10011001, B10011001, B01110110, B00011001, B00011001, B10011001, B01100110 }, //98
  { B01100110, B10011001, B10011001, B01110111, B00010001, B00010001, B10011001, B01100110 }  //99
},
font5[53][8] = { //hiragana
  { B00010000, B01111110, B00010001, B00111110, B01010110, B10011001, B10110001, B01010010 }, //あ
  { B01000100, B10000010, B10000001, B10000001, B10000001, B11010001, B01100010, B00100000 }, //い
  { B00111100, B00000000, B01111110, B10000001, B00000001, B00000001, B01000010, B00111100 }, //う
  { B00111100, B00000000, B11111110, B00001100, B00011000, B00111000, B01101100, B11000111 }, //え
  { B00100100, B11110010, B00100001, B00111100, B01100010, B10100001, B10100001, B01100010 }, //お
  { B00010100, B00010010, B11111001, B00100101, B00100100, B01000100, B01010100, B10001000 }, //か
  { B00010000, B00010000, B01111110, B00001000, B00111111, B00000100, B01000000, B00111100 }, //き
  { B00001100, B00011000, B00110000, B01100000, B01100000, B00110000, B00011000, B00001100 }, //く
  { B00000100, B10000100, B10011111, B10000100, B10000100, B10000100, B10100100, B01001000 }, //け
  { B00000000, B01111100, B00000010, B00000000, B00000000, B00000000, B01000000, B00111110 }, //こ
  { B00010000, B00010110, B01111000, B00001000, B00000100, B01001100, B00100000, B00011100 }, //さ
  { B01000000, B01000000, B01000000, B01000000, B01000000, B01000000, B00100010, B00011100 }, //し
  { B00001000, B00001000, B01111110, B00011000, B00101000, B00011000, B00001000, B00010000 }, //す
  { B00100100, B00100100, B01111111, B00100100, B00101100, B00100000, B00100000, B00011100 }, //せ
  { B00111110, B00000100, B00011000, B01111111, B00001000, B00010000, B00010000, B00001110 }, //そ
  { B00100000, B01111100, B00100000, B00101110, B00100000, B01000000, B01001000, B01000110 }, //た
  { B00100000, B00100000, B01111110, B00100000, B00111100, B00100010, B00000010, B00011100 }, //ち
  { B00000000, B00000000, B00011110, B01100001, B00000001, B00000001, B00011110, B00000000 }, //つ
  { B00000000, B00001110, B01110100, B00001000, B00010000, B00010000, B00001000, B00000110 }, //て
  { B00000000, B00100000, B00100000, B00100110, B00111000, B01000000, B01000000, B00111110 }, //と
  { B00100000, B11110100, B01000010, B10001000, B10001000, B00111100, B00101010, B00010000 }, //な
  { B00000000, B10011100, B10000010, B10000000, B10000000, B10000000, B10100000, B00011110 }, //に
  { B01000100, B01111100, B01101010, B10111010, B10110010, B10110111, B11101010, B01000100 }, //ぬ
  { B01000000, B11011100, B01110110, B01100010, B01000010, B11000111, B01001010, B01000100 }, //ね
  { B00000000, B00111100, B01010010, B10010001, B10010001, B10100001, B10100010, B01000100 }, //の
  { B00000100, B10000100, B10011110, B10000100, B10000100, B10001110, B10010101, B01001000 }, //は
  { B11110000, B00100100, B01000110, B10000101, B10000100, B10000100, B01001000, B00110000 }, //ひ
  { B00011100, B00000100, B00011000, B01001001, B01000101, B10000101, B00100100, B00011000 }, //ふ
  { B00000000, B00100000, B01110000, B11011000, B00001100, B00000110, B00000011, B00000000 }, //へ
  { B00000000, B10011110, B10000100, B10011110, B10000100, B10001110, B10010101, B01001000 }, //ほ
  { B00010000, B01111100, B00010000, B01111100, B00010000, B01111000, B10010100, B01110010 }, //ま
  { B01110000, B00010010, B00010010, B00111110, B01100011, B10100010, B10100010, B01000100 }, //み
  { B00100000, B11110010, B00100001, B01100001, B10100000, B10100000, B01100010, B00111100 }, //む
  { B01000100, B01111100, B01101010, B10111001, B10110001, B10110001, B11100010, B01000100 }, //め
  { B00010000, B00010000, B01111000, B00100000, B11111000, B00100010, B00100010, B00011100 }, //も
  { B01001000, B01001000, B01111110, B10100001, B00100010, B00100000, B00010000, B00010000 }, //や
  { B00001000, B10111110, B11001001, B10001001, B10101001, B00011110, B00001000, B00001000 }, //ゆ
  { B00001000, B00001000, B00001111, B00001000, B00001000, B00111100, B01001010, B00110001 }, //よ
  { B00110000, B00001100, B01000010, B10000000, B10111100, B11000010, B00000010, B00111100 }, //ら
  { B01000010, B01000010, B01000010, B01010010, B00100010, B00000100, B00000100, B00011000 }, //り
  { B00111100, B00001000, B00010000, B00111100, B01000010, B00011010, B00100110, B00011100 }, //る
  { B01000000, B11011100, B01110100, B01100100, B01000100, B11000101, B01000101, B01000010 }, //れ
  { B00111100, B00001000, B00010000, B00111100, B01000010, B00000010, B00100010, B00011100 }, //ろ
  { B01000000, B11011100, B01110010, B01100001, B01000001, B11000001, B01000001, B01000110 }, //わ
  { B00010000, B11111100, B00100000, B01110000, B10011110, B00101000, B01000000, B00111110 }, //を
  { B00001000, B00001000, B00010000, B00010000, B00111000, B00101001, B01000101, B01000110 }, //ん
  { B00000000, B00000000, B00100100, B00111110, B01100001, B00010110, B00010000, B00001000 }, //ゃ
  { B00000000, B00000000, B00001000, B01011110, B01101010, B01001010, B00011100, B00001000 }, //ゅ
  { B00000000, B00000000, B00001000, B00001110, B00001000, B00111000, B01001100, B00110010 }, //ょ
  { B00000000, B00000000, B00000000, B00000000, B00011100, B01100010, B00000010, B00011100 }, //っ
  { B10000000, B01000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000 }, //゛
  { B01000000, B10100000, B01000000, B00000000, B00000000, B00000000, B00000000, B00000000 }, //゜
  { B00000000, B00000000, B00000000, B00000000, B01111000, B00000110, B00000000, B00000000 }  //ー
},
font6[53][8] = { //katakana
  { B11111110, B00000010, B00010100, B00011000, B00010000, B00010000, B00100000, B00100000 }, //ア
  { B00000010, B00000100, B00001000, B00011000, B01101000, B00001000, B00001000, B00001000 }, //イ
  { B00010000, B00010000, B11111110, B10000010, B10000010, B00000100, B00001000, B00110000 }, //ウ
  { B00000000, B01111100, B00010000, B00010000, B00010000, B00010000, B11111110, B00000000 }, //エ
  { B00001000, B11111110, B00001000, B00011000, B00101000, B11001000, B00001000, B00011000 }, //オ
  { B00100000, B00100000, B11111110, B00100010, B00100010, B01000010, B01000010, B10001100 }, //カ
  { B00100000, B00100000, B11111100, B00010000, B11111110, B00001000, B00000100, B00000100 }, //キ
  { B00100000, B00111110, B01000010, B10000010, B00000100, B00001000, B00010000, B00100000 }, //ク
  { B01000000, B01000000, B01111110, B01001000, B10001000, B00010000, B00010000, B00100000 }, //ケ
  { B00000000, B11111110, B00000010, B00000010, B00000010, B00000010, B11111110, B00000000 }, //コ
  { B01000100, B01000100, B11111110, B01000100, B01000100, B00001000, B00001000, B00010000 }, //サ
  { B11000000, B00100000, B00000010, B11000010, B00100010, B00000100, B00001000, B11110000 }, //シ
  { B00000000, B01111100, B00000100, B00000100, B00001000, B00011000, B00100100, B11000010 }, //ス
  { B01000000, B01000000, B11111110, B01000010, B01000100, B01001000, B01000000, B00111110 }, //セ
  { B10000010, B01000010, B01000010, B00100100, B00000100, B00001000, B00010000, B01100000 }, //ソ
  { B00100000, B00111110, B01000010, B10100010, B00010100, B00001000, B00010000, B00100000 }, //タ
  { B00001100, B01110000, B00010000, B11111110, B00010000, B00010000, B00100000, B01000000 }, //チ
  { B00000000, B00000000, B10100010, B01010010, B01010010, B00000100, B00001000, B01110000 }, //ツ
  { B00000000, B01111100, B00000000, B11111110, B00010000, B00010000, B00010000, B00100000 }, //テ
  { B00100000, B00100000, B00100000, B00111000, B00100100, B00100000, B00100000, B00100000 }, //ト
  { B00010000, B00010000, B11111110, B00010000, B00010000, B00010000, B00100000, B01000000 }, //ナ
  { B00000000, B00000000, B01111100, B00000000, B00000000, B00000000, B11111110, B00000000 }, //ニ
  { B00000000, B01111100, B00000100, B00110100, B00001000, B00011000, B00100100, B11000000 }, //ヌ
  { B00010000, B00010000, B01111100, B00001000, B00011000, B00110100, B11010010, B00010000 }, //ネ
  { B00000010, B00000010, B00000010, B00000100, B00000100, B00001000, B00010000, B01100000 }, //ノ
  { B00000000, B00101000, B00101000, B00101000, B01000100, B01000100, B01000010, B10000010 }, //ハ
  { B00000000, B10000000, B10000100, B10011000, B11100000, B10000000, B10000000, B01111110 }, //ヒ
  { B00000000, B11111110, B00000010, B00000010, B00000100, B00001000, B00010000, B01100000 }, //フ
  { B00000000, B00000000, B00100000, B01010000, B10001000, B00000100, B00000010, B00000001 }, //ヘ
  { B00010000, B00010000, B11111110, B00010000, B01010100, B01010100, B10010010, B00110000 }, //ホ
  { B00000000, B00000000, B11111110, B00000010, B00000100, B00101000, B00010000, B00001000 }, //マ
  { B00000000, B01110000, B00001100, B01100000, B00011000, B11000000, B00110000, B00001100 }, //ミ
  { B00010000, B00010000, B00100000, B00100000, B01001000, B01000100, B10011010, B11100010 }, //ム
  { B00000000, B00000010, B00100010, B00010100, B00001000, B00010100, B00100010, B11000000 }, //メ
  { B00000000, B01111100, B00010000, B00010000, B11111110, B00010000, B00010000, B00011110 }, //モ
  { B00000000, B00100000, B00101110, B11110010, B00100100, B00010000, B00010000, B00010000 }, //ヤ
  { B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000 }, //ユ
  { B00000000, B01111110, B00000010, B00000010, B01111110, B00000010, B00000010, B01111110 }, //ヨ
  { B01111100, B00000000, B11111110, B00000010, B00000010, B00000100, B00001000, B00010000 }, //ラ
  { B00000100, B01000100, B01000100, B01000100, B01000100, B00000100, B00001000, B00110000 }, //リ
  { B00001000, B00101000, B00101000, B00101000, B01001000, B01001010, B10001010, B10001100 }, //ル
  { B01000000, B01000000, B01000000, B01000000, B01000000, B01000100, B01001000, B01110000 }, //レ
  { B00000000, B11111110, B10000010, B10000010, B10000010, B10000010, B10000010, B11111110 }, //ロ
  { B00000000, B11111110, B10000010, B10000010, B00000100, B00001000, B00010000, B00100000 }, //ワ
  { B00000000, B11111110, B00000010, B00000010, B01111100, B00000100, B00001000, B00110000 }, //ヲ
  { B00000000, B10000000, B01000010, B00100010, B00000100, B00001000, B00010000, B11100000 }, //ン
  { B00000000, B00000000, B00000000, B00100000, B00111100, B01100100, B00010000, B00010000 }, //ャ
  { B00000000, B00000000, B00000000, B00000000, B00000000, B00111000, B00001000, B01111100 }, //ュ
  { B00000000, B00000000, B00000000, B00111100, B00000100, B00111100, B00000100, B00111100 }, //ョ
  { B00000000, B00000000, B00000000, B00000000, B01010100, B01010100, B00000100, B00111000 }, //ッ
  { B10000000, B01000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000 }, //゛
  { B01000000, B10100000, B01000000, B00000000, B00000000, B00000000, B00000000, B00000000 }, //゜
  { B00000000, B00000000, B00000000, B00000000, B01111110, B00000000, B00000000, B00000000 }  //ー
},
font7[15][8] = { //other
  { B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000 }, //B0
  { B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B11111111 }, //B1
  { B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B11111111, B11111111 }, //B2
  { B00000000, B00000000, B00000000, B00000000, B00000000, B11111111, B11111111, B11111111 }, //B3
  { B00000000, B00000000, B00000000, B00000000, B11111111, B11111111, B11111111, B11111111 }, //B4
  { B00000000, B00000000, B00000000, B11111111, B11111111, B11111111, B11111111, B11111111 }, //B5
  { B00000000, B00000000, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111 }, //B6
  { B00000000, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111 }, //B7
  { B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111 }, //B8
  { B00000000, B01000010, B10100101, B00000000, B00000000, B10000001, B01000010, B00111100 }, //VG
  { B00000000, B01000010, B01000010, B01000010, B00000000, B00000000, B01111110, B00000000 }, //GD
  { B00000000, B10100101, B01000010, B10100101, B00000000, B00000000, B01111110, B10000001 }, //BD
  { B00010000, B11111110, B00111000, B00101000, B11111110, B10111010, B10101010, B10111010 }, //高
  { B00000000, B11111110, B01010100, B01010100, B11111110, B00010000, B00010000, B00010000 }, //平
  { B00011000, B00100100, B01011010, B10000001, B00111100, B00000100, B00001000, B00010000 }  //今
};

#endif
