const int Accel = 3;
const int IRTrans = 12;
const int potent = 0;
int scaledValue = 0;
int dv = 0;
int var = 0;
int IRtimer = 0;
int SendMag = 0;

void setup() {
   pinMode(IRTrans,OUTPUT);
   Serial.begin(9600);
}

void loop() {
  /*
  var = analogRead(potent);
  Serial.println(var);
 */
 
  dv = analogRead(Accel);
  scaledValue = (dv - 326.205)/73.5;
  Serial.println(scaledValue);
  
  zero:
  Serial.println(scaledValue);
  
  if(scaledValue > 0){
    digitalWrite(IRTrans,HIGH);
  }
  if( < 0){
    digitalWrite(IRTrans,LOW);
  }
  if(dv == 0){
    dv = -1 * dv;
    goto zero;
  }

  /*
  digitalWrite(IRTrans,HIGH);
  delay(var);
  digitalWrite(IRTrans,LOW);
  delay(var);
  */
}
