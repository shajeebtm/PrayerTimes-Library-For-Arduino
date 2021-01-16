/* Arduino  font  library for displaying letters from A to Z using 3x5 LEDs */
/* This is an extension of the  Arduino LEDText library                     */
/* Ported  by Shajeeb T Muhammad                                            */

/*
License: GNU LGPL v3.0
TERMS OF USE:
    Permission is granted to use this code, with or
    without modification, in any website or application
    provided that credit is given to the original work
    with a link back to PrayTimes.org.
This program is distributed in the hope that it will
be useful, but WITHOUT ANY WARRANTY.
PLEASE DO NOT REMOVE THIS COPYRIGHT BLOCK.
------------------------------------------------------------------------------
*/

#ifndef FontLetters3x5_h
#define FontLetters3x5_h

const uint8_t FontLetters3x5Data[] = {
        3,  // Font Width
        5,  // Font Height
        65, // Font First Character
        90,// Font Last Character


	B8(11100000),	// Char  A
	B8(10100000),
	B8(11100000),
	B8(10100000),
	B8(10100000),

	B8(11000000),	// Char  B
	B8(10100000),
	B8(11000000),
	B8(10100000),
	B8(11000000),

	B8(01100000),	// Char  C
	B8(10000000),
	B8(10000000),
	B8(10000000),
	B8(01100000),

	B8(11000000),	// Char  D
	B8(10100000),
	B8(10100000),
	B8(10100000),
	B8(11000000),

	B8(11100000),	// Char  E
	B8(10000000),
	B8(11100000),
	B8(10000000),
	B8(11100000),

	B8(11100000),	// Char  F
	B8(10000000),
	B8(11100000),
	B8(10000000),
	B8(10000000),

	B8(01100000),	// Char  G
	B8(10000000),
	B8(10100000),
	B8(10100000),
	B8(01100000),

	B8(10100000),	// Char  H
	B8(10100000),
	B8(11100000),
	B8(10100000),
	B8(10100000),

	B8(11100000),	// Char  I
	B8(01000000),
	B8(01000000),
	B8(01000000),
	B8(11100000),

	B8(00100000),	// Char  J
	B8(00100000),
	B8(00100000),
	B8(10100000),
	B8(11100000),

	B8(10100000),	// Char  K
	B8(10100000),
	B8(11000000),
	B8(10100000),
	B8(10100000),

	B8(10000000),	// Char  L
	B8(10000000),
	B8(10000000),
	B8(10000000),
	B8(11100000),

	B8(10100000),	// Char  M
	B8(11100000),
	B8(10100000),
	B8(10100000),
	B8(10100000),

	B8(10000000),	// Char  N
	B8(11100000),
	B8(10100000),
	B8(10100000),
	B8(10100000),

	B8(01000000),	// Char  O
	B8(10100000),
	B8(10100000),
	B8(10100000),
	B8(01000000),

	B8(11100000),	// Char  P
	B8(10100000),
	B8(11100000),
	B8(10000000),
	B8(10000000),

	B8(11100000),	// Char  Q
	B8(10100000),
	B8(11100000),
	B8(00100000),
	B8(00100000),

	B8(11000000),	// Char  R
	B8(10100000),
	B8(11000000),
	B8(10100000),
	B8(10100000),

	B8(01100000),	// Char  S
	B8(10000000),
	B8(01000000),
	B8(00100000),
	B8(11000000),


	B8(11100000),	// Char  T
	B8(01000000),
	B8(01000000),
	B8(01000000),
	B8(01000000),

	B8(10100000),	// Char  U
	B8(10100000),
	B8(10100000),
	B8(10100000),
	B8(11100000),

	B8(10100000),	// Char  V
	B8(10100000),
	B8(10100000),
	B8(01000000),
	B8(01000000),

	B8(10100000),	// Char  W
	B8(10100000),
	B8(10100000),
	B8(11100000),
	B8(10100000),

	B8(10100000),	// Char  X
	B8(10100000),
	B8(01000000),
	B8(10100000),
	B8(10100000),


	B8(10100000),	// Char  Y
	B8(10100000),
	B8(11100000),
	B8(01000000),
	B8(01000000),

	B8(11100000),	// Char  Z
	B8(00100000),
	B8(01000000),
	B8(10000000),
	B8(11100000),

     };

#endif

