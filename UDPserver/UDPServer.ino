#include <OpenPLC_Net.h>

#define TEST_PIN PE2
HardwareSerial Serial_Test(PC_11, PC_10);  // uart

void setup() {
  pinMode(PB_10, OUTPUT);

  Serial_Test.begin(115200);
  // Serial_Test.println("hallo !!!!");
  OpenPLCNet.begin();

}

void loop() {
  OpenPLCNet.process();

  static uint32_t t = 0;
  if (millis() - t >= 1000) {
    t = millis();
    Serial_Test.print("link=");
    Serial_Test.print(OpenPLCNet.linkUp() ? 1 : 0);
    Serial_Test.print(" dhcp=");
    Serial_Test.print(OpenPLCNet.hasIP() ? 1 : 0);
    Serial_Test.print(" ip=");
    Serial_Test.println(OpenPLCNet.localIP());
  }
  delay(10);
}

