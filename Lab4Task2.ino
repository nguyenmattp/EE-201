void setup() {
  // put your setup code here, to run once:
  pinMode(12,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(12, HIGH);
  delay(200);
  digitalWrite(12,LOW);
  digitalWrite(13,HIGH);
  delay(200);
  digitalWrite(13,LOW);
  delay(200);
  Serial.print("beep \n");
}
