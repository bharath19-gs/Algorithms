#ifndef blinkled_h
#define blinkled_h

class blink
{	
	public:
		blink(int pin,int time);
		void change();
		void turnOn();
		void turnOff();
		
	private:
		int _pin;
		int _interval;
		int _led_state;
		unsigned long time_diff;
};





#endif




