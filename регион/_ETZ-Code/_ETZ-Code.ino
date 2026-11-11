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
}

void loop() {
  moveStepY(-5000);
  delay(2000);
  moveStepY(5000);
  delay(2000);
}