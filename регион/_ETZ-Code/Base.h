#pragma once

#include "Values.h"


void receiveArray(int (&l)[MAX_ROWS][2], int &n) {
  n = 0; // Обнуляем длину перед приемом

  while (true) {
    if (Serial.available() > 0) {
      String line = Serial.readStringUntil('\n');
      line.trim();

      if (line.length() == 0) continue;

      // Как только пришел маркер конца, просто выходим из функции
      if (line == "E") {
        return;
      }

      if (n < MAX_ROWS) {
        int commaIndex = line.indexOf(',');
        if (commaIndex > 0) {
          l[n][0] = line.substring(0, commaIndex).toInt();
          l[n][1] = line.substring(commaIndex + 1).toInt();
          n++;
        }
      }
    }
  }
}