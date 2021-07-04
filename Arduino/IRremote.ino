//https://www.tinkercad.com/things/38XW5yGSY4I-funky-amberis/editel?sharecode=wAXAnf-jbZKmdbazSNx7JTDocvoM_wLOTNh17O6sT6I

//
#include <IRremote.h>

const int green = 8;
const int yellow = 7;
const int blue = 9;
const int irReciver = 3;

IRrecv irRecv(irReciver);

decode_results result;
//please refer the below one for results
//https://bengtmartensson.github.io/Arduino-IRremote/classdecode__results.html
// REFER THE ABOVE LINK FOR GETTING TO KNOW MORE ABOUT IRremote.h
void setup()
{
  Serial.begin(9600);
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(blue, OUTPUT);
  irRecv.enableIRIn(); // Start the receive
  digitalWrite(green, HIGH);
  
}

void loop()
{
  
  if (irRecv.decode(&result)) 
  {
    Serial.println(result.value, DEC);
    if (result.value == 16615543)
    {
     
      digitalWrite(green,!(digitalRead(green)));
      delay(500);
    }
    if (result.value == 16582903)
    {
     digitalWrite(blue,!(digitalRead(blue)));
      delay(500);
    }
    if (result.value == 16599223)
    {
     digitalWrite(yellow,!(digitalRead(yellow)));
      delay(500);
    }
    
    irRecv.resume();
  }
  delay(200);

}
