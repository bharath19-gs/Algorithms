
#include<Arduino.h>
#include<blinko_n.h>

blink ::blink(int pin,int time)
{
	_led_state=LOW;
	pinMode(pin,OUTPUT);
	_interval=time;
	_pin=pin;
}
void blink::change(int pin)
{	
	_pin=pin;
	unsigned long P_time=millis();
	if(P_time >time_diff+_interval)
		{
			time_diff=P_time;
			digitalWrite(_pin,!digitalRead(_pin));
		}
}	

void blink::turnOn()
{
	digitalWrite(_pin,HIGH);
}
void blink::turnOff()
{
	digitalWrite(_pin,LOW);
}

