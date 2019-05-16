void setup() {
  // put your setup code here, to run once:
  pinMode(13,1);
  
  pinMode(3,0);
  pinMode(5,0);
  pinMode(11,0);
  
  pinMode(2,1);
  pinMode(4,1);
  pinMode(12,1);
  Serial.begin(9600);
}

int b,c,a;

void loop() {
  // put your main code here, to run repeatedly:
  a = digitalRead(3);
  b = digitalRead(5);
  c = digitalRead(11);
  digitalWrite(2,1);
  digitalWrite(4,1);
  digitalWrite(12,1);
  digitalWrite(13,a);
  digitalWrite(13,b);
  digitalWrite(13,c);
  delay(1000);
  Serial.print("value of the detector: ");
  Serial.println(a);
  Serial.print("value of the detector: ");
  Serial.println(b);
  Serial.print("value of the detector: ");
  Serial.println(c);
  Serial.println();  
}
