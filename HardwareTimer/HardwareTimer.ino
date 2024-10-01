
void setup() {
  // put your setup code here, to run once:

  // no need to configure pin, it will be done by HardwareTimer configuration
  // pinMode(pin, OUTPUT);

  // Automatically retrieve TIM instance and channel associated to pin
  // This is used to be compatible with all STM32 series automatically.
  TIM_TypeDef *Instance = (TIM_TypeDef *)pinmap_peripheral(digitalPinToPinName(PE5), PinMap_PWM);
  uint32_t channel = STM_PIN_CHANNEL(pinmap_function(digitalPinToPinName(PE5), PinMap_PWM));


  // Instantiate HardwareTimer object. Thanks to 'new' instantiation, HardwareTimer is not destructed when setup() function is finished.
  HardwareTimer *MyTim = new HardwareTimer(Instance);

  // Configure and start PWM
  // MyTim->setPWM(channel, pin, 5, 10, NULL, NULL); // No callback required, we can simplify the function call
  MyTim->setPWM(channel, PE5, 500, 63);  // 500 Hertz, 63% dutycycle
}

void loop() {
}
