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

  pinMode(button_pin, INPUT_PULLUP);
  pinMode(led_pin, OUTPUT);

  oled.init();
  oled.setScale(1);
  oled.clear();
}

int l[MAX_ROWS][2];
int n = 0;

void loop() {
  while (digitalRead(button_pin)) {}
  Serial.println("STOP");
  receiveArray(l, n);

  oled.clear();
  for (int i = 0; i < n; i++) {
    oled.setCursor(0, i);
    oled.print(l[i][0]);
    oled.print(" ");
    oled.print(l[i][1]);
  }

  delay(1000);
  exit(0);
}