void setup() {
  // put your setup code here, to run once:
  
  
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int a,b,c,d,e,f,g,h;
  a = analogRead(2);
  b = analogRead(3);
  c = analogRead(4);
  d = analogRead(5);
  e = analogRead(6);
  f = analogRead(7);
  g = analogRead(8);
  h = analogRead(9);
delay(1000);
  Serial.println(a);
  Serial.println(b);
  Serial.println(c);
  Serial.println(d);
  Serial.println(e);
  Serial.println(f);
  Serial.println(g);
  Serial.println(h);
  Serial.println();




}
