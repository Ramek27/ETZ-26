#include "Values.h"
#include "Motors.h"

void setup() {
  Serial.begin(9600);

  pinMode(DIR_L, OUTPUT);
  pinMode(STEP_L, OUTPUT);
  pinMode(EN_L, OUTPUT);
  pinMode(MS1_L, OUTPUT);
  pinMode(MS2_L, OUTPUT);

  pinMode(DIR_R, OUTPUT);
  pinMode(STEP_R, OUTPUT);
  pinMode(EN_R, OUTPUT);
  pinMode(MS1_R, OUTPUT);
  pinMode(MS2_R, OUTPUT);

  pinMode(DIR_X, OUTPUT);
  pinMode(STEP_X, OUTPUT);
  pinMode(EN_X, OUTPUT);
  pinMode(MS1_X, OUTPUT);
  pinMode(MS2_X, OUTPUT);

  setStepMode(MS1_L, MS2_L, 8);
  setStepMode(MS1_R, MS2_R, 8);
  setStepMode(MS1_X, MS2_X, 8);

  pinMode(button_pin, INPUT_PULLUP);
  pinMode(led_pin, OUTPUT);

  oled.init();
  oled.setScale(1);
  oled.clear();
}

void loop() {
  oledPrint(67, 0, 0, 1, 2);
  oledPrint("KUKAREKU", 2, 2, 0, 1);
  delay(100000);
  // moveStepX(8000);
  // delay(1000);
  // moveStepY(1000);
  // delay(1000);
  // moveStepX(-8000);
  // delay(1000);
  // moveStepY(-1000);
  // delay(1000);
}