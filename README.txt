This is a modified version of Adafruit's SSD1306 library for OLED displays. This version WILL NOT work with 128x32 displays, and is SPECIFICALLY for 128x64. This version, however, uses hardware SPI for super-fast update speeds, especially when used with the Akafuino X microcontroller board. I have no current plans to re-implement I2C control or support for 128x32 displays with this port, but if you need it, drop me a line and I can look into it.

Pinout for Arduino Uno:
	-Display Data to Arduino digital 11
	-Display CLK to Arduino digital 13
	-Display DC, Rst, and CS can be any pins





This is a library for our Monochrome OLEDs based on SSD1306 drivers

  Pick one up today in the adafruit shop!
  ------> http://www.adafruit.com/category/63_98

These displays use SPI to communicate, 4 or 5 pins are required to  
interface

Adafruit invests time and resources providing this open source code, 
please support Adafruit and open-source hardware by purchasing 
products from Adafruit!

Written by Limor Fried/Ladyada  for Adafruit Industries.  
Scrolling code contributed by Michael Gregg
BSD license, check license.txt for more information
All text above must be included in any redistribution

To download. click the DOWNLOADS button in the top right corner, rename the uncompressed folder Xmega_SSD1306. Check that the Xmega_SSD1306 folder contains Xmega_SSD1306.cpp and Xmega_SSD1306.h

Place the Xmega_SSD1306 library folder your <arduinosketchfolder>/libraries/ folder. You may need to create the libraries subfolder if its your first library. Restart the IDE.

You will also have to download the Adafruit GFX Graphics core which does all the circles, text, rectangles, etc. You can get it from
https://github.com/adafruit/Adafruit-GFX-Library
and download/install that library as well

--11/20/2012--
Modified to use hardware SPI on both Arduino Uno and Akafuino X by Nathan Duprey
Only for 128x64 SSD1306 OLED Displays