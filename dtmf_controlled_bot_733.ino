#define m11 4//defining input1 connect to pin4
#define m12 3//defining input2 connect to pin3
#define m21 6//defining input3 connect to pin6
#define m22 5//defining input4 connect to pin5

#define D0 19//defining D0 PIN of dtmf module connect to pin19
#define D1 18//defining D1 PIN of dtmf module connect to pin18
#define D2 17//defining D2 PIN of dtmf module connect to pin17
#define D3 16//defining D3 PIN of dtmf module connect to pin16

void forward()//
{
   digitalWrite(m11, HIGH);
   digitalWrite(m12, LOW);
   digitalWrite(m21, HIGH);
   digitalWrite(m22, LOW);
}

void backward()
{
   digitalWrite(m11, LOW);
   digitalWrite(m12, HIGH);
   digitalWrite(m21, LOW);
   digitalWrite(m22, HIGH); 
}

void left()
{
   digitalWrite(m11, HIGH);
   digitalWrite(m12, LOW);
   digitalWrite(m21, LOW);
   digitalWrite(m22, LOW);
}

void right()
{
   digitalWrite(m11, LOW);
   digitalWrite(m12, LOW);
   digitalWrite(m21, HIGH);
   digitalWrite(m22, LOW);
}

void Stop()
{ 
  digitalWrite(m11, LOW);
   digitalWrite(m12, LOW);
   digitalWrite(m21, LOW);
   digitalWrite(m22, LOW);
}

void setup() 
{
  pinMode(D0, INPUT);
  pinMode(D1, INPUT);
  pinMode(D2, INPUT);
  pinMode(D3, INPUT);

  pinMode(m11, OUTPUT);
  pinMode(m12, OUTPUT);
  pinMode(m21, OUTPUT);
  pinMode(m22, OUTPUT);
}

void loop() 
{
  int temp1=digitalRead(D0);//saving the input into variable temp1
  int temp2=digitalRead(D1);//saving the input into variable temp2
   int temp3=digitalRead(D2);//saving the input into variable temp3
  int temp4=digitalRead(D3);//saving the input into variable temp4
 
  if(temp1==0 && temp2==1 && temp3==0 && temp4==0)
  forward();

  else if(temp1==0 && temp2==0 && temp3==1 && temp4==0)
  left();

  else if(temp1==0 && temp2==1 && temp3==1 && temp4==0)
  right();

  else if(temp1==0 && temp2==0 && temp3==0 && temp4==1)
  backward();

   else if(temp1==1 && temp2==0 && temp3==1 && temp4==0)
  Stop();
}
