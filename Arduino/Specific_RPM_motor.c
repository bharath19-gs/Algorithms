const pin=3;

void setup() 
{

pinMode(pin,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);//connected to the enB/enA for controlling speed.....even for serial control same circuit.

}

void loop() 
{
   digitalWrite(pin,HIGH);//clockwise
   digitalWrite(4,LOW);
   analogWrite(5,225);//THE SPECIFIED RPM....  
}
