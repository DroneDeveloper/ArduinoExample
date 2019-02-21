// connect the led +pin to arduino's 13 pin.
int led = 13;

void setup() {
  // Set 13pin to Out pin
  pinMode(led, OUTPUT);
}

void loop() {
  // LED on
  digitalWrite(led, HIGH);
  
  // Wait 1 second
  delay(1000);

  // LED off
  digitalWrite(led,LOW);

  // Wait 1 second
  delay(1000);
}
