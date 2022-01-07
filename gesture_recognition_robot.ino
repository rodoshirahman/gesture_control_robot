int xPin = A0;
int yPin = A1;
int zPin = A2;
int D1 = 10, D2 =11, D3 = 12, D4 = 13;
long x;
long y;
long z;
void setup() {
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  x = analogRead(xPin);
  y = analogRead(yPin);
  z = analogRead(zPin);
  
  if(x<300 && y<300)
  {
    Serial.println("");
    Serial.println("Forward");
    digitalWrite(D1, HIGH);
    digitalWrite(D2, LOW);
    digitalWrite(D3, HIGH);
    digitalWrite(D4, LOW);
  }
  else if(x>300 && y>300)
  {
    Serial.println("");
    Serial.println("Backward");
    digitalWrite(D1, LOW);
    digitalWrite(D2, HIGH);
    digitalWrite(D3, LOW);
    digitalWrite(D4, HIGH);
  }

  else if(x>300 && y<300)
  {
    Serial.println("");
    Serial.println("Right");
    digitalWrite(D1, HIGH);
    digitalWrite(D2, LOW);
    digitalWrite(D3, LOW);
    digitalWrite(D4, HIGH);
  }

  else if(x>340 && y>300)
  {
    Serial.println("");
    Serial.println("Left");
    digitalWrite(D1, LOW);
    digitalWrite(D2, HIGH);
    digitalWrite(D3, HIGH);
    digitalWrite(D4, LOW);
  }

  else
  {
    Serial.println("");
    Serial.println("Stop");
    digitalWrite(D1, LOW);
    digitalWrite(D2, LOW);
    digitalWrite(D3, LOW);
    digitalWrite(D4, LOW);
  }

  delay(1000);

}
