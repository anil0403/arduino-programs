#include<SoftwareSerial.h>
#define ENA 10
#define ENB 11
#define ln1 3
#define ln2 4
#define ln3 5
#define ln4 6

SoftwareSerial mySerial(7, 8);
int bVal;
void setup() {
  mySerial.begin (9600);
  Serial.begin(9600);
    
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(ln1, OUTPUT);
  pinMode(ln2, OUTPUT);
  pinMode(ln3, OUTPUT);
  pinMode(ln4, OUTPUT);
  digitalWrite(ENA,HIGH);
  digitalWrite(ENB,HIGH);
}
void loop() {
  if (mySerial.available() > 0) {
    bVal = mySerial.read();
    Serial.println(bVal);
  }
  if (bVal == 70) {
    forward();
  }
  if (bVal == 66) {
    back();
  }
  if (bVal == 76) {
    left();
  }
  if (bVal == 82) {
    right();
  }
  if (bVal == 83) {
    stopp();
  }
}
void forward() {
  Serial.println("Forward function");
    analogWrite(ENA,150);
  analogWrite(ENB,150);
  digitalWrite(ln1, HIGH);
  digitalWrite(ln2, LOW);
  digitalWrite(ln3, HIGH);
  digitalWrite(ln4, LOW);
}
void back() {
    Serial.println("backward function");
      analogWrite(ENA,150);
  analogWrite(ENB,150);
  digitalWrite(ln1, LOW);
  digitalWrite(ln2, HIGH);
  digitalWrite(ln3, LOW);
  digitalWrite(ln4, HIGH);
}
void left()
{
    Serial.println("left function");
      analogWrite(ENA,50);
  analogWrite(ENB,50);
  digitalWrite(ln1, HIGH);
  digitalWrite(ln2, LOW);
  digitalWrite(ln3, LOW);
  digitalWrite(ln4, HIGH);
}
void right()
{
    Serial.println("right function");
      analogWrite(ENA,50);
  analogWrite(ENB,50);
  digitalWrite(ln1, LOW);
  digitalWrite(ln2, HIGH);
  digitalWrite(ln3, HIGH);
  digitalWrite(ln4, LOW);
}
void stopp()
{
    Serial.println("stop function");
      digitalWrite(ENA,LOW);
  digitalWrite(ENB,LOW);
  digitalWrite(ln1, LOW);
  digitalWrite(ln2, LOW
  );
  digitalWrite(ln3, LOW);
  digitalWrite(ln2, LOW);
}
