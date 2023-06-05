volatile boolean toggle = false;
unsigned long previous = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(10,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  unsigned long current = millis();
  if((current - previous) == 500)
  {
    toggle = !toggle;
    digitalWrite(10,toggle);
    previous = current;
    Serial.println(toggle);
  }
}
