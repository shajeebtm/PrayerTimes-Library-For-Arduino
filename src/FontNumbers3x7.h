
/*-------------------------- In the name of God ----------------------------*\
/* Arduino  font  library for displaying numbers from 0 to 9 by 3x7 LEDs    */
/* This is an extension of the  Arduino LEDText library                    * /     
/* This is ported  by Shajeeb T Muhammad                                    */

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


#ifndef FontNumbers3x7_h
#define FontNumbers3x7_h

// this support only numbers between 0 to 9 with 3x7 size
//
// this library need 10 x 7 + 4 =  74 bytes
const uint8_t FontNumbers3x7Data[] = {
        3,  // Font Width
        7,  // Font Height
        48, // Font First Character
        57,// Font Last Character
        0xe0, 0xa0, 0xa0, 0xa0, 0xa0,  0xa0, 0xe0 ,  // Code for char 0
        0x40, 0xc0, 0x40, 0x40, 0x40,  0x40, 0xe0 ,  // Code for char 1
        0xe0, 0x20, 0x20, 0xe0, 0x80,  0x80, 0xe0 ,  // Code for char 2
        0xe0, 0x20, 0x20, 0xe0, 0x20,  0x20, 0xe0 ,  // Code for char 3
        0xa0, 0xa0, 0xa0, 0xe0, 0x20,  0x20, 0x20 ,  // Code for char 4
        0xe0, 0x80, 0x80, 0xe0, 0x20,  0x20, 0xe0 ,  // Code for char 5
        0x80, 0x80, 0x80, 0xe0, 0xa0,  0xa0, 0xe0 ,  // Code for char 6
        0xe0, 0x20, 0x20, 0x20, 0x20,  0x20, 0x20 ,  // Code for char 7
        0xe0, 0xa0, 0xa0, 0xe0, 0xa0,  0xa0, 0xe0 ,  // Code for char 8
        0xe0, 0xa0, 0xa0, 0xe0, 0x20,  0x20, 0x20 ,  // Code for char 9
                                };

#endif
