// C++ code
//

int s1 = 13 ;
int s2 = 12 ;
int led11 = 11 ;
int led10 = 10 ;
int led9 = 9 ;
int led8 = 8 ;
int led7 = 7 ;
int led6 = 6 ;

void setup()
{
  pinMode(s1,INPUT);
  pinMode(s2,INPUT);
  pinMode(led11,OUTPUT);
  pinMode(led10,OUTPUT);
  pinMode(led9,OUTPUT);
  pinMode(led8,OUTPUT);
  pinMode(led7,OUTPUT);
  pinMode(led6,OUTPUT);
 
}

void loop()
{
 
 if(digitalRead(s1)==HIGH)
 {
   analogWrite(led11,126);
   digitalWrite(led10,HIGH);
   delay(250);
 }
  else
  {
   analogWrite(led11,0);
   digitalWrite(led10,LOW);
   delay(250);
  }
  
  
  if(digitalRead(s2)==1)
  {
    
   analogWrite(led6,126);
   digitalWrite(led8,HIGH);
   delay(250);
  
  }
  else
  {
       
   analogWrite(led6,0);
   digitalWrite(led8,LOW);
   delay(250);
  
  }
  
  
  
}