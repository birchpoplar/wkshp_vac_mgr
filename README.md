# Workshop Vacuum Manager

Arduino source code and circuit layout for an automated workshop vacuum manager. Provides automated on/off control of workshop vacuum using current-sensing on power provided to other tools. Delay in switch off ensures satisfactory dust removal after tool in use is stopped.

# Arduino code
## Set-up at power-on



```
const int RELAY_PIN = 3;
const int CURRENT_PIN = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(RELAY_PIN, OUTPUT);
  pinMode(CURRENT_PIN, INPUT_PULLUP);
}
```


## Main running loop



```
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
```

# Circuit diagram
