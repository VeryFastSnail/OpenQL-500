
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(0, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(0, HIGH);   // Sensor HIGH
  delay(250);                       // wait for a bit
  digitalWrite(0, LOW);    // Sensor LOW
  delay(250);                       // wait for a wait for abit
}
