#pragma once

// Libs
#include <Arduino.h>
#include <math.h>
#include <GyverOLED.h>


// Objects
GyverOLED<SSD1306_128x64, OLED_NO_BUFFER> oled;


// Pins
#define DIR_L 4
#define STEP_L 5
#define EN_L 6
#define MS1_L 26
#define MS2_L 27

#define DIR_R 7
#define STEP_R 8
#define EN_R 9
#define MS1_R 28
#define MS2_R 29

#define DIR_X 10
#define STEP_X 11
#define EN_X 12
#define MS1_X 30
#define MS2_X 31

#define led_pin 36     // Красный светодиод
#define button_pin 23  // Тактовая кнопка


// Values
const int delY = 800;
const int delX = 150;

const int MAX_ROWS = 65;