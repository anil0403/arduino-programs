void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(2,INPUT);
  Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
  int data = digitalRead(2);
  Serial.println(data);
  if(data == 1)
  {
    digitalWrite(13,HIGH);
  }
  else
  {
    digitalWrite(13,LOW);
  }
}
