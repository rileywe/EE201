// Sets up the baud rate and pin modes
void setup() {
  Serial.begin(9600);
  pinMode(8, OUTPUT); 
  pinMode(9, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}
//Pin to display map:
//  0
//5    1
//  6
//4    2
//  3
//Display codes:
/*
int zero[] = {0, 0, 0, 0, 0, 0, 1};
int one[] = {1, 0, 0, 1, 1, 1, 1};
int two[] = {0, 0, 1, 0, 0, 1, 0};
int three[] = {0, 0, 0, 0, 1, 1, 0};
int four[] = {1, 0, 0, 1, 1, 0, 0};
int five[] = {0, 1, 0, 0, 1, 0, 0};
int six[] = {0, 1, 0, 0, 0, 0, 0};
int seven[] = {0, 0, 0, 1, 1, 1, 1};
int eight[] = {0, 0, 0, 0, 0, 0, 0};
int nine[] = {0, 0, 0, 0, 1, 0, 0};
*/

//Will count down from 9 to 0 on a 7 segment display across 15 seconds, 
//so a 1.5s delay between numbers. Will repeat.
void loop() {
  // 9
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  delay(1500);
  // 8
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  delay(1500);
  // 7
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  delay(1500);
  // 6
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  delay(1500);
  // 5
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  delay(1500);
  // 4
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  delay(1500);
  // 3
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  delay(1500);
  // 2
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  delay(1500);
  // 1
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  delay(1500);
  // 0
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  delay(1500);
}

