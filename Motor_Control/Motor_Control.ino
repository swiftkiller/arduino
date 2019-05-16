void setup() {
  // put your setup code here, to run once:
pinMode(4,1);
pinMode(5,1);

pinMode(9,1);

}

void loop() {
  // put your main code here, to run repeatedly:

analogWrite(9,0);
digitalWrite(4,1);
digitalWrite(5,0);
delay(3000);

analogWrite(9,15);
digitalWrite(4,1);
digitalWrite(5,0);
delay(3000);

analogWrite(9,255);
digitalWrite(4,1);
digitalWrite(5,0);
delay(3000);
}
