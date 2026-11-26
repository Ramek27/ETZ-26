#pragma once

#include "Values.h"


// Включение / выключение светодиода
void ledOn() {
  digitalWrite(led_pin, 1);
}
void ledOff() {
  digitalWrite(led_pin, 0);
}

// Включение / выключение магнита
void magnetOn() {
  digitalWrite(magnet_pin, 1);
}
void magnetOff() {
  digitalWrite(magnet_pin, 0);
}

// Вывод на oled числа / строки
void oledPrint(int s, int x, int y, bool clear, int size) {
  if (clear) oled.clear();
  oled.setScale(size);
  oled.setCursor(x, y);
  oled.print(s);
}
void oledPrint(String s, int x, int y, bool clear, int size) {
  if (clear) oled.clear();
  oled.setScale(size);
  oled.setCursor(x, y);
  oled.print(s);
}

float step2mmX(long steps) {
  return steps * 8.0 / 1600.0;
}

long mm2stepX(float mm) {
  return (long)round(mm * 200.0);
}

void setStepMode(int ms1, int ms2, int mode) {
  if (mode == 2) {
    digitalWrite(ms1, 1);
    digitalWrite(ms2, 0);
  } else if (mode == 4) {
    digitalWrite(ms1, 0);
    digitalWrite(ms2, 1);
  } else if (mode == 8) {
    digitalWrite(ms1, 0);
    digitalWrite(ms2, 0);
  } else if (mode == 16) {
    digitalWrite(ms1, 1);
    digitalWrite(ms2, 1);
  }
}