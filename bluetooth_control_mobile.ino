int i1=2;
int i2=3;
int i3=4;
int i4=5;
int buzzer=6;
int led1=7;
int led2=8;
int data;

void setup()
{
  Serial.begin(9600);
  pinMode(i1,OUTPUT);
  pinMode(i2,OUTPUT);
  pinMode(i3,OUTPUT);
  pinMode(i4,OUTPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(buzzer,OUTPUT);
}

void loop()
{
 if(Serial.available()>0)
 { 
   data=Serial.read();
        if(data=='F')
        {
          forward();
        }
        if(data=='B')
        {
          backward();
        }
         if(data=='L')
         {
          left();
         }
         if(data=='R')
         {
          right();
         }
         if(data=='S')
         {
          stopall();
         }
         if(data=='V')
         {
          digitalWrite(buzzer,HIGH);
         }
         if(data=='v')
         {
          digitalWrite(buzzer,LOW);
         }
         if(data=='W')
         {
          digitalWrite(led1,HIGH);
         }
         if(data=='w')
         {
          digitalWrite(led1,LOW);
         }
         if(data=='U')
         {
          digitalWrite(led2,HIGH);
         }
         if(data=='u')
         {
          digitalWrite(led2,LOW);
         }
        }
}
void forward()
{
  digitalWrite(i1,HIGH);
  digitalWrite(i2,LOW);
}

void backward()
{
  digitalWrite(i1,LOW);
  digitalWrite(i2,HIGH);
}

void right()
{
  digitalWrite(i3,HIGH);
  digitalWrite(i4,LOW);
}

void left()
{
  digitalWrite(i3,LOW);
  digitalWrite(i4,HIGH);
}

void stopall()
{
  digitalWrite(i1,LOW);
  digitalWrite(i2,LOW);
  digitalWrite(13,LOW);
  digitalWrite(i4,LOW);  
}
