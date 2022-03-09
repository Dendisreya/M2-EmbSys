# 1 Requirements

# Introduction

* This project is designed to provide a suitable device that assists people in maintaining social distance.
* It is intended to measure the distance between any object or person using an ultrasonic transducer and an Arduino UNO.
* It employs three distinct sensors, a buzzer, an OLED display, and an LED, so that the failure of a single device does not jeopardise the project's operation.
Because we use three different sensors, our project has a better chance of working in any situation. It is based on the simple phenomenon of sound wave reflection and produces an efficient output.

# Research
* Our society is currently dealing with the "COVID-19" health crisis. This is a contagious disease that has a significant impact on the lives of many people.
* Keeping a safe distance from others appears to be the most reliable method of slowing the spread of corona virus. However it would  be inconvenient to turn around every 30 seconds to see if anyone was approaching you.
* It would be useful if there was a device that could warn others to keep their distance from you. As a result, the primary goal of the project is to overcome the COVID situation by maintaining proper social distance through the use of this product.

# Defining Our System
* The project's main goal is to maintain social distance among the people.
* It is intended to measure the distance between any object or person using an ultrasonic transducer and   an Arduino UNO.
* The Arduino software IDE is used to programme the Arduino UNO.
* Any object within a 3cm to 3m range can be detected by the ultrasonic sensor.
* The sensor has four pins: Vcc, trigger, echo, and ground.
* The OLED has 7 pins and runs on 5 volts DC.

# SWOT Analysis

## Strengths
* Accuracy 
* Portability 
* Durability 
* Working of the product without depending on the other products 
* Power consumption of the product
## Weaknesses
* Ultrasonic sensor has a limited detection range.
* Issues with battery issues.
## Opportunities
* Connecting the components and transforming them into a functional product.
* To transform the non-functional prototype into a working product.
## Threats
* Wire usage can be reduced.
* Can be done as a single functional component
*   Connecting three peripheral devices.

# 4W's and 1'H
## Who
* Anyone
## What
* To provide a suitable device that assists people in maintaining social distance
## When
* This project has no end date because it can be used by generations for a long time until the product is functional.
## Where
* Shopping malls, Schools and colleges
## How
* When an object or a person is placed in front of the ultrasonic sensor, it sends out sound waves to strike the object or person. When these waves hit an object or a person, they bounce and reflect back until they reach the ultrasonic sensor. This sensor now calculates the distance between the object and the sensor and displays it on the OLED display. It also makes a sound with the buzzer and displays a red light with the LED	

# High Level Requirements

| *ID*   | *Description*                                                                    | *Category* |*Status* |
|--------|----------------------------------------------------------------------------------|------------|-----------|
|  HLR01   |User will be able to measure distance between people or objects	                 |  Technical| TBD|
|  HLR02   |User will be able to calculate distance between people or objects                |  Technical| TBD|
|  HLR03   |User will be able to calculate distance less than 2m	                            |  Technical | TBD| 
|  HLR04   |User will be able to find buzzer sound when distance less than 2m                 |  Technical| TBD|
|  HLR05   |User will be able to find Shows alert distance on OLED when distance less than 2m | Technical|TBD|
|  HLR06   |User will be able to find Turns on the LED when distance less than 2m	         |  Technical| TBD|
|  HLR07   |User will be able to identify the typeof battery                                  |Informative| TBD|


# Low Level Requirements

| *ID*   | *Description*                                                                    | *Category* |*Status* |
|--------|----------------------------------------------------------------------------------|------------|-----------|
|  LLR01   |Measured distance will be displayed                                              | HLR01|TBD|
|  LLR02   |Calculated distance will be displayed                                              | HLR02|TBD|
|  LLR03   |Calculated distance less than 2m will be displayed	                          | HLR03|TBD| 
|  LLR04   |Buzzer sound when distance less than 2m  will be analysed             | HLR04|TBD|
|  LLR05   |Alert distance on OLED when distance less than 2m will be analysed | HLR05|TBD|
|  LLR06   | Turns on the LED when distance less than 2m will be analysed	          | HLR06 |TBD|
|  LLR07   | identifying the typeof battery                                  | HLR07|TBD|


# 2_Architecture
* The main components of our project were an ultrasonic sensor, an Arduino UNO, an OLED display, LEDs, and a buzzer. These components are straightforward and widely available on the market. The ultrasonic sensor transmits and receives sound signals, whereas the Arduino UNO is a microcontroller that connects many peripheral devices. The OLED display is used to show the distance value, and the LED is used to blink the light. When an object or person exceeds the set distance, the buzzer makes a sound.
## 1 ARDUINO: 
The Arduino Uno is an open-source micro-controller board based on the Microchip ATmega 328P microcontroller and developed by Arduino.cc. The board is equipped with sets of digital and analog input/output (I/O) pins that may be interfaced to various expansion boards (shields) and other circuits.
## 2 LED: 
Light emitting diodes (LEDs) are versatile, energy efficient, and durable. A light-emitting diode (a semiconductor diode which glows when a voltage is applied).
## 3 ULTRASONIC SENSOR(HC-sr04):
The HC-SR04 Ultrasonic Distance Sensor is a sensor used for detecting the distance to an object using sonar. ... The HC-SR04 uses non-contact ultrasound sonar to measure the distance to an object, and consists of two ultrasonic transmitters (basically speakers), a receiver, and a control circuit.
## 4 OLED DISPLAY: 
An OLED (Organic Light Emitting Diode), also known as organic electroluminescent diode, is a light emitting diode in which the emissive electroluminescent layer is a film of organic compound that emits light in response to an electric current.
## 5 BUZZER: 
An electrical device that makes a buzzing noise and is used for signaling.
BREADBOARD: A breadboard is a construction base for prototyping of electronics. Originally the word referred to a literal bread board, a polished piece of wood used for slicing bread.
## 6 RESISTOR: 
A resistor is a passive two-terminal electrical component that implements electrical resistance as a circuit element. In electronic circuits, resistors are used to reduce current flow, adjust signal levels, to divide voltages, bias active elements and terminate transmission lines among other uses.













