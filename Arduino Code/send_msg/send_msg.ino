#include <SoftwareSerial.h>

//Create software serial object to communicate with SIM800L
SoftwareSerial mySerial(3, 2); //SIM800L Tx & Rx is connected to Arduino #3 & #2
int flamePin = 11;

void setup()
{
  pinMode(flamePin, INPUT);
  //Begin serial communication with Arduino and Arduino IDE (Serial Monitor)
  Serial.begin(9600);
  
  //Begin serial communication with Arduino and SIM800L
  mySerial.begin(9600);

  Serial.println("Initializing..."); 
  delay(1000);

  mySerial.println("AT"); //Once the handshake test is successful, it will back to OK
  delay(1000);
  updateSerial();

  mySerial.println("AT+CMGF=1");
  delay(1000);// Configuring TEXT mode
  updateSerial();
  
  mySerial.println("AT+CMGS=\"+918302115472\"");//change ZZ with country code and xxxxxxxxxxx with phone number to sms
  delay(1000);
  updateSerial();
  
  //mySerial.print("Hello World Ctrl+z"); //text content
  //updateSerial();
  //mySerial.write(26);
}

void loop()
{
  int Flame = digitalRead(flamePin);
  if (Flame == LOW)
  {
     Serial.println("Fire");
     mySerial.println("Fire!!! Ctrl+z");
     updateSerial();
     mySerial.write(26); 
  } 
  else
  {
    Serial.println("No worries");
    delay(3000);
  }
}

void updateSerial()
{
  delay(500);
  while (Serial.available()) 
  {
    mySerial.write(Serial.read());//Forward what Serial received to Software Serial Port
  }
  while(mySerial.available()) 
  {
    Serial.write(mySerial.read());//Forward what Software Serial received to Serial Port
  }
}
