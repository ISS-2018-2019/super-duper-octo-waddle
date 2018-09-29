
int Mag1Pull = 8; //random actions
int Mag1Push = 9;

int Mag2Pull = 2; //reacts to Mag1
int Mag2Push = 3;


int IRTimer = 0;    //variables
int IRState = 0;
int IRLast = 0;
int SendMag = 0;

int rng = 0;

void setup(){
pinMode (Mag1Pull,OUTPUT);
pinMode (Mag1Push,OUTPUT);
pinMode (Mag2Pull,OUTPUT);
pinMode (Mag2Push,OUTPUT);
Serial.begin(9600);
}

void loop(){
  delay(100);
   //controls magnet 1(random actions)
   rng = random(0,3);

   if(rng == 1){  //green on
       digitalWrite(Mag1Pull,HIGH);
       digitalWrite(Mag1Push,LOW);
       SendMag = 5;
       Serial.print(rng);

   }

   if(rng == 2){  //red on
       digitalWrite(Mag1Pull,LOW);
       digitalWrite(Mag1Push,HIGH);
       SendMag = 15;
       Serial.print(rng);
   }

   if(rng == 0){  //off
      digitalWrite(Mag1Pull,LOW);
      digitalWrite(Mag1Push,LOW);
      SendMag = 0;
      Serial.print(rng);

   }


   //controls magnet 2(Reactive actions)


   if (SendMag > 0 && SendMag < 10){
       digitalWrite(Mag2Push,HIGH);  //runs if signal lasted less than 10 ms but more than 0
       digitalWrite(Mag2Pull,LOW);   // in test environment it'll just follow rng
       SendMag = 0;
   }

   if (SendMag > 10){
       digitalWrite(Mag2Push,LOW);   //runs if signal lasted longer than 10 ms
       digitalWrite(Mag2Pull,HIGH);
       SendMag = 0;

  if (SendMag = 0){
    digitalWirte(Mag2PUSH,LOW)
    digitalWrite(Mag2Pull,LOW)
  }

   }
   }
  }
