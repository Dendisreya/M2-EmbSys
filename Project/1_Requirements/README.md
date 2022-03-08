# Requirements

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
* When an object or a person is placed in front of the ultrasonic sensor, it sends out sound waves to strike the object or person. When these waves hit an object or a person, they bounce and reflect back until they reach the ultrasonic sensor. This sensor now calculates the distance between the object and the sensor and displays it on the OLED display. It also makes a sound with the buzzer and displays a red light with the LED.


Measure distance 
 Calculate distance
Distance less than 2m
Buzzer starts to sound
Shows alert distance on OLED
Turns on the LED

# High Level Requirements



| *ID*   | *Description* | *Category* |*Status* |-------------|------------|---------------------------------|-----------|
  
|  H_01   |User will be able to measure distance between people or objects	|  Technical| TBD|
|  H_02   |User will be able to calculate distance between people or objects|  Technical| TBD|
|  H_03  |User will be able to calculate distance less than 2m	            |Technical | TBD| 
|  H_04 |User will be able to find buzzer sound when distance less than 2m	|  Technical| TBD|
|  H_05 |User will be able to find Shows alert distance on OLED when distance less than 2m	| TechnicalTBD|
|  H_04 |User will be able to find Turns on the LED when distance less than 2m	|  Technical| TBD|



## Table no: Low level test plan

| *Test ID* | *HLT ID* |*Description*                                              | *Exp IN* | *Exp OUT* | *Actual Out* |*Type Of Test*  |    
|-------------|------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       | H_01, H_02, H_03|Tested on functions which accept two matrices as input|  matrix1, matrix2, n |SUCCESS|SUCCESS |Technical |
|  L_02       | H_04, H_05, H_06|Tested on functions which accept single matrix as input|  matrix1, n |SUCCESS|SUCCESS |Technical |
|  L_03       | H_07, H_08 |Tested on function which returns an integer value|  3  |-1|-1|Technical |












