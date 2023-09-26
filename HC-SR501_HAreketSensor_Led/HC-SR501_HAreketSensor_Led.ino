int pirPin = 8;
int ledPin = 9;
int hareket;
void setup() {
  // put your setup code here, to run once:
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  hareket = digitalRead(pirPin);
  if (hareket == HIGH)
  {
    digitalWrite(ledPin, HIGH);
  }
  else
  {
    digitalWrite(ledPin, LOW);
  }

}
