/**
 * @file Measurer.h
 * Adafruit_SSD1306.h
 * @author DendiSreya
 * @brief 
 * @version 0.1
 * @date 2022-03-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "Adafruit_SSD1306.h"
#include "splash.h"

#include "Adafruit_GFX.h"
#include "Adafruit_GrayOLED.h"
#include "Adafruit_SPITFT.h"
#include "Adafruit_SPITFT_Macros.h"
#include "gfxfont.h"

#include "SPI.h"
#include "Wire.h"
#include "Adafruit_GFX.h"
#include "Adafruit_SSD1306.h"

#define SCREEN_WIDTH 128 
/**
 * @brief OLED display width, in pixels

 * 
 */

#define SCREEN_HEIGHT 32 
/**
 * @brief  OLED display height, in pixels

 * 
 * @return OLED, 
 */
 

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);
/**
 * @brief define pins numbers

 * 
 */
const int trigDistance = 15;
/**
 * @brief change this value from 2 to 400

 * 
 */
void setup() 
/**
     * @brief 
     * 
     * @param distance 
     */

void ledOnOff(int distance)
 /**
  * @brief trigger distance
  * 
  */
 void loop() 
 /**
  * @brief  Clears the trigPin

  * 
  */
