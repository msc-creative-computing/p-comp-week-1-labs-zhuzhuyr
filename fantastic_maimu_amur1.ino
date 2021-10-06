// C++ code
//
int x1 = 0;
int x2 = 0;
  
void setup()
{
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(10,INPUT);
  pinMode(12,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(2,INPUT);
}

void loop()
{
 x1 = digitalRead (10);
 x2 = digitalRead (2);
  if (x1== LOW){
  digitalWrite (12, LOW);
  }
  else{
   digitalWrite (12, HIGH) ;
   delay(500);
   digitalWrite (12, LOW) ;
  }
  
  if (x2== LOW){
  digitalWrite (5, LOW);
  digitalWrite (4, LOW);
  }
  else{
   digitalWrite (5, LOW) ;
   digitalWrite (4, HIGH);
   delay(25);
    digitalWrite (5, HIGH) ;
   digitalWrite (4, LOW);
  }
      
  
}