// #define LS 3 // left sensor
//#define RS 4 // right sensor
#define LM1 5 // left motor M1a
#define LM2 6 // left motor M2a   
#define RM1 7 // right motor M2a
#define RM2 8 // right motor M2b
void setup()
{
//pinMode(LS, INPUT);
//pinMode(RS, INPUT);
pinMode(LM1, OUTPUT);
pinMode(LM2, OUTPUT);
pinMode(RM1, OUTPUT);
pinMode(RM2, OUTPUT);
pinMode(12,OUTPUT);
Serial.begin(9600);

}
void loop()
{digitalWrite(12,HIGH);
  while(Serial.available())
  {
    char ch=Serial.read();
    
  if(ch=='a')
  {
digitalWrite(LM1,LOW);//turn left
digitalWrite(LM2, HIGH);
digitalWrite(RM1, HIGH);
digitalWrite(RM2, LOW);
  }
  else if(ch=='w')
  {
digitalWrite(LM1,LOW);
digitalWrite(LM2, HIGH);
digitalWrite(RM1, LOW);
digitalWrite(RM2, HIGH);
  }
  else if(ch=='z')
  {
 digitalWrite(LM1,HIGH);
digitalWrite(LM2, LOW);
digitalWrite(RM1, HIGH);
digitalWrite(RM2, LOW);
  }
  else if(ch=='d')
  {
    digitalWrite(LM1,HIGH);
digitalWrite(LM2, LOW);
digitalWrite(RM1, LOW);
digitalWrite(RM2, HIGH);
  }
  else if(ch=='s'||ch=='S')
  {
    digitalWrite(LM1,LOW);
digitalWrite(LM2, LOW);
digitalWrite(RM1, LOW);
digitalWrite(RM2, LOW);
  }
}
}
