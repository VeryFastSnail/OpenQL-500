
void setup() {
  // ATTiny13A pin 0 PWM 
  pinMode(0, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(0, HIGH);   // Sensor HIGH
  delay(250);                       //wait for a bit
  digitalWrite(0, LOW);    // Sensor LOW
  delay(250);                       //wait for a bit
}
