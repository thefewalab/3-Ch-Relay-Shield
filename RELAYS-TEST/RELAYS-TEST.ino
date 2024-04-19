#define K1 2
#define K2 3
#define K3 4

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(K1, OUTPUT);
  pinMode(K2, OUTPUT);
  pinMode(K3, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(K1, HIGH);
  delay(500);
  digitalWrite(K1, LOW);
  delay(500);

  digitalWrite(K2, HIGH);
  delay(500);
  digitalWrite(K2, LOW);
  delay(500);

  digitalWrite(K3, HIGH);
  delay(500);
  digitalWrite(K3, LOW);
  delay(500);
  
}
