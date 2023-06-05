static boolean tog = false;
void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(A1,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int data = analogRead(A1);
  Serial.println(data);
  if(data > 70){
    tog = !tog;
    digitalWrite(13,tog);
    delay(50);
  }
}
