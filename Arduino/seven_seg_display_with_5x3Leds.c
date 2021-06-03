int array_of_pins[] = {3,4,5,6,7,8,9,10,11,14,15,16,17,18,19};
int flag = 0;
void setup()
{
  for(int i=0; i<15; i++)
  {
	pinMode(array_of_pins[i],OUTPUT);
  }
}


void number(int flag, int num[])
{
for(int i=0; i<15; i++)
  {
  	digitalWrite(array_of_pins[i], num[flag][i]);
  }
}
void loop()
{
  int num[10][15] = {{1,1,1,1,0,1,0,1,0,1,1,1,1,1,1},
  {0,0,1,1,0,1,0,1,0,1,0,0,0,0,0},
  {1,1,1,1,0,1,1,0,0,1,1,1,1,1,0},
  {1,1,1,1,0,1,1,1,0,1,1,1,0,1,0},
  {1,0,0,0,0,0,1,1,1,0,1,0,1,1,1},
  {1,1,1,0,0,1,1,1,0,1,1,1,0,1,1},
  {1,1,1,1,0,1,0,1,0,1,0,0,0,0,0},
  {1,1,1,1,0,1,1,1,0,1,1,1,1,1,1},
  {1,1,1,1,0,1,1,1,0,1,1,1,0,1,1}};
  
  // read the state of the pushbutton value
  buttonState = digitalRead(2);
  if (buttonState == 1) {
  	flag++;
    Serial.println(flag);
  }
  switch(flag)
  {
    case 1:
    	number(one);
    	break;
    case 2: 
    	number(two);
    	break;
    case 3:
    	number(three);
    	break;
    case 4:
    	number(four);
    	break;
    case 5: 
    	number(five);
    	break;
    case 6:
    	number(six);
    	break;
    case 7:
    	number(seven);
    	break;
    case 8:
    	number(eight);
    	break;
    case 9:
    	number(nine);
    	break;
    default:
    	number(zero);
    	flag = 0;
    	break;
  }

  delay(200); // Delay a little bit to improve simulation performance
}
