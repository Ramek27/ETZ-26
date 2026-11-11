#include "Arduino.h"
#pragma once

#include "Values.h"
#include "Base.h"


void yMode(bool en) {
  digitalWrite(EN_L, en);
  digitalWrite(EN_R, en);
}

void xMode(bool en) {
  digitalWrite(EN_X, en);
}

// Движение на N шагов по Y
void moveStepY(long stp, int del = delY) {
  yMode(0);
  digitalWrite(DIR_L, stp > 0);
  digitalWrite(DIR_R, stp < 0);

  stp = abs(stp);
  for (long i = 0; i < stp; i++) {
    digitalWrite(STEP_L, 1);
    digitalWrite(STEP_R, 1);
    delayMicroseconds(del);
    digitalWrite(STEP_L, 0);
    digitalWrite(STEP_R, 0);
    delayMicroseconds(del);
  }
}

// Движение на N шагов по X
void moveStepX(long stp, int del = delX) {
  xMode(0);
  digitalWrite(DIR_X, stp > 0);

  stp = abs(stp);
  for (int i = 0; i < stp; i++) {
    digitalWrite(STEP_X, 1);
    delayMicroseconds(del);
    digitalWrite(STEP_X, 0);
    delayMicroseconds(del);
  }
}