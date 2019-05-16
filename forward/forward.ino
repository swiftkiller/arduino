void setup() {
  // put your setup code here, to run once:
    pinMode(6,1);
    pinMode(8,1);
     pinMode(9,1);
      pinMode(10,1);
    Serial.begin(9800);
}

void loop()
{
 digitalWrite(6,1);
  digitalWrite(8,0);
  digitalWrite(9,1);
  digitalWrite(10,0);
  delay(5000);
  digitalWrite(6,0);
  digitalWrite(8,0);
  digitalWrite(9,0);
  digitalWrite(10,0);
  delay(5000); 

  
}
