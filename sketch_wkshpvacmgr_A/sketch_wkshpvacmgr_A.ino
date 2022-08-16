
const int RELAY_PIN = 3;
const int CURRENT_PIN = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(RELAY_PIN, OUTPUT);
  pinMode(CURRENT_PIN, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(CURRENT_PIN) == HIGH) {
    digitalWrite(RELAY_PIN, LOW);
  }
   else {
    digitalWrite(RELAY_PIN, HIGH);
    while(digitalRead(CURRENT_PIN) == LOW) {
      //do nothing
    }
    delay(5000);  // wait 5 seconds
    }
}
