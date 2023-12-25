# code-arduino
Here I attached all my Arduino (.ino) code for Arduino UNO Board.

<br> 

# Route Swift System
<!--Route Swift System is a Arduino UNO based project which measures the jam by led light leveling. Also this project includes the bus bypass system for pick up the passengers which would decreases jam.-->
## Abstract
Swift Route Navigator is an advanced model that
can detect and calculate the jam intensity of a road precisely
and helps the drivers or passengers in decision making whether
they should take the road or not.The Jam intensity is shown using
a jam meter containing a number of LEDs which is situated at
the begining of a road.
## Index Terms
 - Arduino
 - Ultrasonic sensor
 - LED
 - IR sensor
 - Servo Motor

## Project Overview
As a developing nation, our country faces major issues, and
the biggest one is traffic jam. Specially in Dhaka city, the
traffic jam is so devastating that the government is seeing no
way even with multiple mega projects. We may not solve this
problem with a single project but we can somewhat ease the
traffic and save people’s valuable time. Our project doesn’t
aim to overhaul the entire traffic system; instead, we focus
on a specific aspect – helping people find the current traffic
situation at particular crossroads as well as properly distribute
traffic among the roads with same destination. We will not do
it forcefully, rather than we will give the traffic information to
the drivers and passengers and let them choose the easiest way
for them . As people will avoid the heavy roads and choose
the simple roads, the traffic will automatically be distributed
properly . Sometimes, in a hurry, it’s challenging to check
Google Maps for possible traffic. Our project addresses this by
providing real-time traffic information using lights located at
the entrance of the road for quick decision-making, especially
for those who may not have time to check their phones or
aren’t familiar with using Google Maps. We think it will make
a huge impact on the current traffic system and people to
understand the condition of the road in their crucial time.
Identify applicable funding agency here. If none, delete this.

## Component List
We list down our project components then we try to describe
our major components with pin diagram or image. On the other
hand we also include our components features.
 - Aruino UNO R3 (2)
 - Ultrasonic sensor (3)
 - LED (3)
 - IR sensor (2)
 - Servo Motor (1)
 - Jumper Wires
 - Bread Board
 - Arduino UNO R3

## Arduino UNO
The Arduino Uno R3 is a microcontroller board. It has 14 digital input/output pins (of which 6 can be used as PWM outputs), 6 analog inputs, a 16 MHz ceramic resonator, a USB connection, a power jack, an ICSP header, and a reset
button.

**Arduino UNO R3 specifications and features:**
 - ATmega328P based Microcontroller
 - The Operating Voltage of the Arduino is 5V
 - The i/p voltage (limit) is 6V to 20V
 - Digital input and output pins-14
 - Digital input and output pins (PWM)-6
 - Analog i/p pins are 6
 - DC Current for each I/O Pin is 20 mA
 - DC Current used for 3.3V Pin is 50 mA
 - Flash Memory -32 KB, and 0.5 KB memory is used by the boot loader
 - SRAM is 2 KB
 - EEPROM is 1 KB
 - The speed of the CLK is 16 MHz
 - In Built LED
 - Length and width of the Arduino are 68.6 mm X 53.4 mm
 - The weight of the Arduino board is 25 g

## Ultrasonic Sensor
Ultrasonic sensors work by sending out a sound wave at a frequency above the range of human hearing. The transducer of the sensor acts as a microphone to receive and send the ultrasonic sound. Our ultrasonic sensors, like many others,
use a single transducer to send a pulse and to receive the echo.

## LED
A light-emitting diode (LED) is a semiconductor device that
emits light when current flows through it. A LED has a
positive and a negative point . The positive point is connected
with the VCC pin of arduino and negative point with the GND.

## IR Sensor
An infrared sensor is an electronic device, that emits in order
to sense some aspects of the surroundings. An IR sensor can
measure the heat of an object as well as detects the motion.
These types of sensors measure only infrared radiation, rather
than emitting it that is called a passive IR sensor. Usually, in
the infrared spectrum, all the objects radiate some form of
thermal radiation.

## Servo Motor
Servos are controlled by sending an electrical pulse of
variable width, or pulse width modulation (PWM), through the control wire. There is a minimum pulse, a maximum pulse, and a repetition rate. A servo motor can usually only turn 90° in either direction for a total of 180° movement.
The motor is connected to the gear system, which reduces
the motor speed, increases torque, and provides feedback to
the potentiometer.

## Jumper Wire
A jumper wire is an electric wire that connects remote electric
circuits used for printed circuit boards. By attaching a jumper
wire on the circuit, it can be short-circuited and short-cut
(jump) to the electric circuit.

## Bread Board
A breadboard, solderless breadboard, or protoboard is a
construction base used to build semi-permanent prototypes of electronic circuits.

## Implementation
 - Jam Measurement: The implementation logic is simple and realistic . The goal
is to measure the length of blockage of a road . Here people
don’t need the blockage length in meters or other similar kind
of units . They just need a minimal measure by which they can
understand how much of the road is blocked . So, we decided
to divide the roads into three layers . Number of blocked layers
indicates the intensity of the jam . We placed ultrasonic sensor
in each layer . The sensors record the distance for two seconds
and compare all the values . If the values are within the length
of a single lane and same, then it is clear that the layer of the
road is blocked . Because same distance means no vehicle is
moving . And it is opened otherwise . Then we will enlighten
the LED corresponding to its layer . There are some cases also
. If the first layer is open but the second layer is detecting jam
then the light of second layer will not be enlighten . Because
it is not possible that the road is opened from the mouth but
blocked in the middle . This case will be possible if a vehicle
breaks in front the ultrasonic sensor due to some unexpected
reason . One stopped vehicle will not create a jam so the meter
will not show any jam . This logic is also applicable for the
third layered sensor.
 - Bus Stand Barricade: The bus stand is a distinct lane beside the main road . It has a fixed capacity and can not contain more . So, we created a
system that can measure if the capacity is full or not . If the
capacity is full then a barricade will close the entrance of the
bus stand . No more buses can enter until any of the buses
leave . For this we planted some IR sensors that will detect
the presence of a bus . If a bus is present in front of a IR
sensor then the sensor will return value 1 . If all the values of
IR sensors are 1, then the barricade will come down and close
the entrance . The barricade is attached to a Servo Motor .
The motor rotates to put the barricade...

## Future Scope
The future scope for this project is huge . The government
is trying hard and soul to solve the problem of traffic jam. Government is building new flyovers, expressways, establishing metro rails and stations only to solve traffic jam. As our system stores traffic information including the duration of jam, the government will get a clear idea of the traffic and
can easily analysis which are needs more attention regarding
this . As a result, they will have the idea about where the next
mega project will be situated.

## References
https://biffl.org.bd/wp-content/uploads/2019/06/EIA-FDEE-min.pdf

<br>

## _Author: Mahfuz Hasan Reza_
 - _Connect with me on [LinkedIn](https://www.linkedin.com/in/mahfuzhasanreza/)_
 - _Follow me on [Instagram](https://www.instagram.com/mahfuzhasanreza/)_
 - _Connect with me on [Facebook](https://www.facebook.com/mahfuzhasanreza/)_
