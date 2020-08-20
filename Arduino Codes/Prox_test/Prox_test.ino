#define rmotor1 8
#define rmotor2 9
#define lmotor1 10
#define lmotor2 11
void setup() {
  pinMode(rmotor1,OUTPUT);
  pinMode(rmotor2,OUTPUT);
  pinMode(lmotor1,OUTPUT);
  pinMode(lmotor2,OUTPUT);
  pinMode(12,OUTPUT);
  digitalWrite(12,HIGH);
  pinMode(A0,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly: 
if(analogRead(A0)>800)
{
  digitalWrite(rmotor1,HIGH);
  digitalWrite(rmotor2,LOW);
  digitalWrite(lmotor1,HIGH);
  digitalWrite(lmotor2,LOW);
  delay(100);
}
else
{
  digitalWrite(rmotor1,LOW);
  digitalWrite(rmotor2,LOW);
  digitalWrite(lmotor1,LOW);
  digitalWrite(lmotor2,LOW);
  delay(100);
}
}
