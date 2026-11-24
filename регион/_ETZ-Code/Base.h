#pragma once

#include "Values.h"

// Вывод на oled
void oledPrint(String s, int x, int y, bool clear, int size) {
  if (clear) oled.clear();
  oled.setScale(size);
  oled.setCursor(x, y);
  oled.print(s);
}
void oledPrint(int s, int x, int y, bool clear, int size) {
  if (clear) oled.clear();
  oled.setScale(size);
  oled.setCursor(x, y);
  oled.print(s);
}