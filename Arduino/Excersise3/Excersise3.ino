// Sets up the baud rate and pin 7 mode
void setup() {
  Serial.begin(9600);
  pinMode(7, INPUT); 
}

// Reads the voltage from pin 7. If it's high, will print "Hello World!"
// If it's low, will print "It's 2023"
// Will loop and chack again every 2 seconds
void loop() {
  int val = digitalRead(7);
  if(val > 0){
    Serial.println("Hello World!");
  }else{
    Serial.println("It's 2023");
  }
  delay(2000);
}

