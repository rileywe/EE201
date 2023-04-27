// Sets up the baud rate and pin modes
void setup() {
  Serial.begin(9600);
  pinMode(12, OUTPUT); 
  pinMode(13, OUTPUT); 
}

// Blinks 2 LEDs alternating between one and the other.
void loop() {
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH); // turn the LED on
  delay(200); // wait for 1 second
  digitalWrite(13, LOW); // turn the LED off
  digitalWrite(12, HIGH);
  delay(200); // wait for 1 second
}

