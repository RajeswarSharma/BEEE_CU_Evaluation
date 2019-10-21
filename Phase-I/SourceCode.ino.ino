/*
Written By Rajeswar Sharma
UID : 19BCS6051
*/
//res is used to read the value from analog values from A0(0-1023)
//red represents the RED LED to glow the PENDANT RED
//blue represents the BLUE LED to glow the PENDANT blue
int res; 
int red=10,blue=6;   
void setup()
{
  pinMode(red, OUTPUT);
  pinMode(blue,OUTPUT);
}

void loop(){

res=analogRead(A0);
Serial.println(res);
if(res>500)
	{
	digitalWrite(blue,LOW);
	delay(500);
	digitalWrite(red,HIGH);
	delay(500);
	digitalWrite(red,LOW);
    	}
else
 	{
  	digitalWrite(red,LOW);
	digitalWrite(blue,HIGH);
 	} 
}
