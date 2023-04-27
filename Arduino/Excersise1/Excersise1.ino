void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT); // set the built-in LED pin as an output
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH); // turn the LED on
  delay(1000); // wait for 1 second
  digitalWrite(LED_BUILTIN, LOW); // turn the LED off
  delay(1000); // wait for 1 second
}

