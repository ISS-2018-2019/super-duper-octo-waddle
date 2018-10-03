
const int IRrec = 13;

void setup() {
   pinMode(IRrec,INPUT);
   Serial.begin(9600);
}

void loop() {
  //IR communications
  //Recieving+Translating
   Serial.println(digitalRead(IRrec));
   Serial.print(" ");
}
