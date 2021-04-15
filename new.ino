 double del;
double t;
double freq;
double T;
double tim;


int a=2;
int b=3;
int c=4;

void setup() {
  Serial.begin(9600);

pinMode(a,OUTPUT);
pinMode(b,OUTPUT);
pinMode(c,OUTPUT);

//------------------------------
freq=500;

{
Serial.print("freq=");
Serial.println(freq);

t=1/(freq);

Serial.print("t=");
Serial.println(t);

T=t/4;

Serial.print("T=");
Serial.println(T);

tim=(2.00/3.00)*T;

del=tim*1000000;


}

}

void loop() {

{
  
  delaymicro();
}

 
}






void delaymicro()
{

digitalWrite(a, HIGH);
digitalWrite(b, LOW);
digitalWrite(c, HIGH);
delayMicroseconds(del);
digitalWrite(a, HIGH);
digitalWrite(b, LOW);
digitalWrite(c, LOW);
delayMicroseconds(del);
digitalWrite(a, HIGH);
digitalWrite(b, HIGH);
digitalWrite(c, LOW);
delayMicroseconds(del);
digitalWrite(a, LOW);
digitalWrite(b, HIGH);
digitalWrite(c, LOW);
delayMicroseconds(del);
digitalWrite(a, LOW);
digitalWrite(b, HIGH);
digitalWrite(c, HIGH);
delayMicroseconds(del);

//Serial.print("delay=");
//Serial.println(del);

digitalWrite(a, LOW);
digitalWrite(b, LOW);
digitalWrite(c, HIGH);
delayMicroseconds(del);

}
