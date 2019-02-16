void setup() {
  // put your setup code here, to run once:
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,INPUT);
pinMode(7,INPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

Serial.println(digitalRead(6));
Serial.println(digitalRead(7));
digitalWrite(9,LOW);
digitalWrite(10,HIGH);
digitalWrite(2,LOW);
digitalWrite(3,HIGH);
digitalWrite(4,LOW);
digitalWrite(5,HIGH);//FORWARD
delay(5000);
digitalWrite(2,HIGH);
digitalWrite(3,LOW);
digitalWrite(4,HIGH);
digitalWrite(5,LOW);//BACKWARD
delay(5000);
digitalWrite(2,LOW);
digitalWrite(3,LOW);
digitalWrite(5,HIGH);
digitalWrite(4,LOW);//LEFT(OR RIGHT ANY ONE)
delay(5000);
digitalWrite(2,LOW);
digitalWrite(3,LOW);
digitalWrite(4,HIGH);
digitalWrite(5,LOW);//BACKLEFT(OR BACKRIGHT)
delay(5000);
digitalWrite(2,LOW);
digitalWrite(3,HIGH);
digitalWrite(4,HIGH);
digitalWrite(5,HIGH);//RIGHT(OR LEFT)
delay(5000);
digitalWrite(3,LOW);
digitalWrite(2,HIGH);
digitalWrite(4,HIGH);
digitalWrite(5,HIGH);
delay(5000);
digitalWrite(3,LOW);
digitalWrite(2,LOW);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
delay(5000);

if((digitalRead(6)==0)&&(digitalRead(7)==0))
{
digitalWrite(2,LOW);
digitalWrite(3,HIGH);
digitalWrite(4,LOW);
digitalWrite(5,HIGH);
}
else if((digitalRead(6)==1)&&(digitalRead(7)==0))
{digitalWrite(2,LOW);
digitalWrite(3,HIGH);
digitalWrite(4,HIGH);
digitalWrite(5,HIGH);//RIGHT(OR LEFT)
}
else if((digitalRead(6)==0)&&(digitalRead(7)==1))
{
digitalWrite(2,LOW);
digitalWrite(3,LOW);
digitalWrite(5,HIGH);
digitalWrite(4,LOW);//LEFT(OR RIGHT ANY ONE)
}
else if((digitalRead(6)==1)&&(digitalRead(7)==1))
{
digitalWrite(3,LOW);
digitalWrite(2,LOW);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
}


}     
