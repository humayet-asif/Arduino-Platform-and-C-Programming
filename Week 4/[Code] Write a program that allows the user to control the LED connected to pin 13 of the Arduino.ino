int led=13;
char sms;
void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  

}

void loop() {
 if( Serial.available() != 0)
 {
  sms = Serial.read();
 }
 if(sms == '1')
 {
  digitalWrite(led,HIGH);
 }
 if(sms == '0')
 {
  digitalWrite(led,LOW);
 }
  

}
