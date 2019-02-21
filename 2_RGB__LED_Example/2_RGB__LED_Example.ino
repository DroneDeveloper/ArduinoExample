// connect the RGB led +pin to arduino's each pin.
const int R_led = 11;
const int G_led = 10;
const int B_led = 9;

void setup() {
  // Set pins
  pinMode(R_led, OUTPUT);
  pinMode(G_led, OUTPUT);
  pinMode(B_led, OUTPUT);
}

void loop() {
  // RED LED on
  digitalWrite(R_led, HIGH);
  digitalWrite(G_led, LOW);
  digitalWrite(B_led, LOW);
  
  // Wait 1 second
  delay(1000);

  // GREEN LED on
  digitalWrite(R_led, LOW);
  digitalWrite(G_led, HIGH);
  digitalWrite(B_led, LOW);

  // Wait 1 second
  delay(1000);

  // BLUE LED on
  digitalWrite(R_led, LOW);
  digitalWrite(G_led, LOW);
  digitalWrite(B_led, HIGH);

  // Wait 1 second
  delay(1000);
}
