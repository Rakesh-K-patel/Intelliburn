# Intelliburn (IOT BASED SMART GAS STOVE)

## About Project

I have made IOT based Gas stove Device  in which intelliburn will detect the flame on gas stove and make status update on user phone via Blynk account and also can make control of gas stove knob using there phone. Its helps when you are out of your home or kitchen and want to check status of your gas stove whether you have close it properly or not, You can monitor and control your gas stove on your fingertips.

### Hardware Components

- Arduino
- SIM 800L (or upper version)
- Voltage Regulator
- Flame Sensor
- Bread Board
- Buzzer (5V)
- 1 kohm resistor
- 9g Micro Servo Motor
- 5V 10A Power Supply

Soldering is required for the Sim 800L to connect the points and for voltage Regulator.

### Hardware Overview

The hardware portion of this project is fairly plug and play, with the exception of some minor soldering for Sim800L and for educational purpose don't use as safety product.

### Software Requirement
The following need to be installed on your Laptop:
- [Arduino IDE] (https://support.arduino.cc/hc/en-us/articles/360019833020-Download-and-install-Arduino-IDE)
- Blynk Account (https://blynk.io/) Sould know how to use Blynk Website.
- Good Internet Connectivity sending commands.

### Architecture of device

Before start we have to make interface for  your device in Blynk account need to connect with it your device.

![image](https://github.com/Rakesh-K-patel/Intelliburn/assets/80409258/d6c8ebd1-3449-4dde-aebf-27d1d69a875d)

As shown in the schematic block diagram below, the project consists of Flame sensor, Arduino Nano & SIM800L GSM/GPRS module as its primary components. The fire can be detected by the flame sensor which gives a digital output that corresponds to the Fire status and is received by the Arduino Nano.
Arduino compares the signal and triggers the SIM800L in case of fire incidents. Through AT commands, SIM800L communicates with Blink server.

### Simulation Image 
I have used online tools to make simulation of hardware before start of project.

1. Circuito.io (https://www.circuito.io/)

![image](https://github.com/Rakesh-K-patel/Intelliburn/assets/80409258/1a7b5a9d-84b7-4e1a-94b6-9ca171d92bd6)

2. TinkerCad (https://www.tinkercad.com/)

![image](https://github.com/Rakesh-K-patel/Intelliburn/assets/80409258/ecec9d52-3107-4802-9a8b-3ba769e1d4d1)




