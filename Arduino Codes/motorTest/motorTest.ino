#define rmotor1 9
#define rmotor2 8
#define lmotor1 11
#define lmotor2 10
void setup() {
  pinMode(rmotor1,OUTPUT);
  pinMode(rmotor2,OUTPUT);
  pinMode(lmotor1,OUTPUT);
  pinMode(lmotor2,OUTPUT);
  pinMode(13,OUTPUT);
  digitalWrite(13,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly: 
digitalWrite(rmotor1,HIGH);
digitalWrite(rmotor2,LOW);
digitalWrite(lmotor1,HIGH);
digitalWrite(lmotor2,LOW);

}
