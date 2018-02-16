#define FS 2 //front sensor for wall detection
#define LS 3 // left down sensor
#define RS 4 // right down sensor
#define LM1 5 // left motor M1a
#define LM2 6 // left motor M2a   
#define RM1 7 // right motor M2a
#define RM2 8 // right motor M2b
void setup()
{
  pinMode(FS,INPUT);
pinMode(LS, INPUT);
pinMode(RS, INPUT);
pinMode(LM1, OUTPUT);
pinMode(LM2, OUTPUT);
pinMode(RM1, OUTPUT);
pinMode(RM2, OUTPUT);
pinMode(12,OUTPUT);
Serial.begin(9600);

}
void loop()
{digitalWrite(12,HIGH);
if(digitalRead(FS))
{
  digitalWrite(LM1,HIGH);   //move backward
digitalWrite(LM2, LOW);
digitalWrite(RM1,HIGH) ;
digitalWrite(RM2, LOW);

delay(1000);
  digitalWrite(LM1,HIGH);//turnRIGHT
digitalWrite(LM2, LOW);
digitalWrite(RM1, LOW);
digitalWrite(RM2,HIGH);
delay(3000);
}

   if(digitalRead(LS)&&digitalRead(RS) )
  {
 digitalWrite(LM1,LOW);
digitalWrite(LM2, HIGH);
digitalWrite(RM1, LOW);
digitalWrite(RM2, HIGH);

  }
  else if(digitalRead(LS)&&!digitalRead(RS))
  {
    digitalWrite(LM1,HIGH);  //move backward
digitalWrite(LM2, LOW);
digitalWrite(RM1,HIGH) ;
digitalWrite(RM2, LOW);

delay(1000);
digitalWrite(LM1,HIGH);//turnRIGHT
digitalWrite(LM2, LOW);
digitalWrite(RM1, LOW);
digitalWrite(RM2,HIGH);

delay(2000);

  }
  else if(!digitalRead(LS)&&digitalRead(RS))
  {
   digitalWrite(LM1,HIGH);    //move backward
digitalWrite(LM2, LOW);
digitalWrite(RM1,HIGH) ;
digitalWrite(RM2, LOW);

delay(1000);
   digitalWrite(LM1,LOW);//turn left
digitalWrite(LM2, HIGH);
digitalWrite(RM1, HIGH);
digitalWrite(RM2, LOW);

delay(1000);
  }
  else if(!digitalRead(LS)&&!digitalRead(RS))
  {
 digitalWrite(LM1,HIGH);  //move backward
digitalWrite(LM2, LOW);
digitalWrite(RM1,HIGH) ;
digitalWrite(RM2, LOW);

delay(3000);

digitalWrite(LM1,LOW);//turn left
digitalWrite(LM2, HIGH);
digitalWrite(RM1, HIGH);
digitalWrite(RM2, LOW);

delay(2000);

  }
  
}
