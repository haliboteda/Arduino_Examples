#include "SoftwareSerial.h"

SoftwareSerial Serial40(PC11, PC10);  // uart

void setup() {
  pinMode(RS232_Enable_Pin, OUTPUT);

  Serial40.begin(115200);
  Serial40.println("hallo !!!!");
}

void loop() {
  // Serial40.println("hallo--!!!!");
}
