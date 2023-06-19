/*************************************************************
  

  Rotate a servo using a slider!

  App project setup:
    Slider widget (0...180) on V3
 *************************************************************/

// Template ID, Device Name and Auth Token are provided by the Blynk.Cloud
// See the Device Info tab, or Template settings
#define BLYNK_TEMPLATE_ID           "TMPLeeTssNnK"
#define BLYNK_DEVICE_NAME           "Quickstart Device"
#define BLYNK_AUTH_TOKEN            "XUrWg_BB0Rd-9AUB-dUuyJUPT1cycq3b"


// Comment this out to disable prints and save space
#define BLYNK_PRINT SwSerial


#include <SoftwareSerial.h>
SoftwareSerial SwSerial(10, 11); // RX, TX

#include <BlynkSimpleStream.h>
#include <Servo.h>

char auth[] = "XUrWg_BB0Rd-9AUB-dUuyJUPT1cycq3b";

WidgetTerminal terminal(V3);
int flamePin = 11;
Servo servo;

BLYNK_WRITE(V4)
{
  servo.write(param.asInt());
}

void setup()
{
  pinMode(flamePin, INPUT);
  // Debug console
  SwSerial.begin(9600);

  // Blynk will work through Serial
  // Do not read or write this serial manually in your sketch
  Serial.begin(9600);
  Blynk.begin(Serial, auth);

  servo.attach(9);
}

void loop()
{
  Blynk.run();
  int Flame = digitalRead(flamePin);
  if (Flame == LOW)
  {
     terminal.println("FIRE !!!");
  } 
  else
  {
    terminal.println("No worries");
    delay(5000);
  }
  
}
