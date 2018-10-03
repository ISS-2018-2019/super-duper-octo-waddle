
const int IRTrans = 12;

int IRtimer = 0;
int SendMag = 0;

void setup() {
   pinMode(IRTrans,OUTPUT);
}

void loop() {
  digitalWrite(IRTrans,HIGH);
  delay(500);
  digitalWrite(IRTrans,LOW);
  delay(500);
}
