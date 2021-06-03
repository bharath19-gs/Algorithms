#include<EEPROM.h>

void setup() 
{
  Serial.begin(9600);  
  Serial.println("EEPROM addresses 0 - 1023"); 
  Serial.println("EEPROM values 0 - 255");
  Serial.println("Write Command in stated format: 'write <address> <value>' or 'read <address>' or 'help'");
   
}

void loop() 
{
  int Command;
  int address;
  int value;
  while (Serial.available() > 0)  
  {
     Command = Serial.read();
      address = Serial.parseInt(); 
         value = Serial.parseInt(); 

        if(address > (EEPROM.length()-1))
      {
      Serial.println("Wrong input: please choose EEPROM address: 0 - 1023");
      break;
      }
  
      if(value > 255)
      {
      Serial.println("Wrong input: please choose EEPROM value: 0 - 255"); 
      break;
      }
    
      if((Command == 'w')||(Command == 'W'))
      {
      EEPROM.write(address, value);
      Serial.print("Write: EEPROM address = ");
      Serial.print(address);
      Serial.print(", value = ");
      Serial.print(value);
      Serial.println();
      }
    
      if ((Command == 'r')||(Command == 'R'))
      {
      Serial.print("Read:  EEPROM address = ");
      Serial.print(address);
      Serial.print(", value = ");
      Serial.print(EEPROM.read(address), DEC);
      Serial.println();
      }
   
      if((Command == 'h')||(Command == 'H'))
      {
        Serial.println("EEPROM addresses 0 - 1023"); 
        Serial.println("EEPROM values 0 - 255");
        Serial.println("Comand syntax 'write <address> <value>' or 'read <address>'"); 
        }
    
         if((Command != 'r')&&(Command != 'R')&&(Command != 'w')&&(Command != 'W')&&(Command != 'h')&&(Command != 'H'))
         {
         Serial.println("Command not given in stated format! Command format is: 'write <address> <value>' or 'read <address>' or 'help'");
         }
           
  
  }
}
