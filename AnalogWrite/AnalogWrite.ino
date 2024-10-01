
void setup() {
  // put your setup code here, to run once:
  //DOC: https://docs.arduino.cc/language-reference/en/functions/analog-io/analogWriteResolution/
  pinMode(PE5, OUTPUT);
  ////
  int v = 1024;
  analogWriteResolution(12);
  analogWrite(PE5, v);

}

void loop() {

}
