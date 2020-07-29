# Shape-Based-hand-Gesture-Recognition
Srishti 2020

## Abstract
   
   <p align="justify">The aim of the project is to create hand bot which can replicate the movements of hands of the person who is interacting with the bot, with the help of image processing. This project is a combination of live motion detection and gesture identification.</p>

![](https://github.com/Rohit-Kumar-219/Shape-Based-hand-Gesture-Recognition/blob/master/Images/Image%20identification.jpg)

## Motivation 
   <p align="justify">The motivation is to create a bot that can copy the movements of an original hand. With further motivations this bot can be upgraded to an artificial hand. This model is just to understand the coordination between the human and robotic actions. This bot aims in maximising of the patterns of the human hand, to replicate it.</p> 

## Components
   
   - 2x Arduino 
   - 2x NRF module
   - 5x Servomotor
   - Laptop (for image processing)
   - 5x 10k Resistors
   - 9V Batteries
   - 2x Breadboard
   - Jumpers
   - Braid wire (for the stifness of the  fingures of the bot)
   - Copper wire

## Workflow
![Workflow](https://github.com/Rohit-Kumar-219/Shape-Based-hand-Gesture-Recognition/blob/master/Images%20and%20Videos/Images/Workflow.png)

## Mechanical aspect of the design

### Structure
<p align="justify">The bot has 5 servo motors connected to separate copper strings which is joined to the fingures of the bot. When the arduino of the bot recieves the signals, the corresponding set of motor is <b> switched on </b> amd hence the copper string is pulled, thus, bending the corresponding fingure. When the srint is released the braid wire in the rear part of the fingure brings the fingure into its original state.</p>

![Hand](https://github.com/Rohit-Kumar-219/Shape-Based-hand-Gesture-Recognition/blob/master/Images%20and%20Videos/Images/Bot.PNG)

## Electrical aspect of the design
   
### Microcontroler 
   
   Two Arduino Uno are used, one in the receiver segment and other in the bot.

### Sensor 
   
   The laptop camera works as a sensor in the project, for image identification.
   
   
![Image identification and segregation workflow](https://github.com/Rohit-Kumar-219/Shape-Based-hand-Gesture-Recognition/blob/master/Images%20and%20Videos/Images/IP%20process.jpg)
### Actuators 
   
   Five 90 degree servo motors are used in the bot for the comprassion and relaxation of the fingures.
   
 ![](https://github.com/Rohit-Kumar-219/Shape-Based-hand-Gesture-Recognition/blob/master/Images%20and%20Videos/Images/Receiver_circuit_diagram.jpg)

### Other components  
   
   - 2 nRF24L01 modules are used for the data transmission from the laptop to the bot.
   - 10k resistors are attacher to the motors to reduce the effective voltage over the motors.

## Cost Structure

| Components | Cost(INR) per unit | Cost(INR) |
| --- | --- | --- |
| Arduino Uno(x2) | 499 | 998 |
| nRF24L01 module(x2) | 81 | 162 |
| Servo motor(x5) | 149 | 745 |
| 9V Battery | 25 | 25 |
| **Total Cost** | --- | 1930 |

## Applications 
 
   - For conrolling the movements of the robotic hands in factories for more precise works.
   - For upgrading the home automation technology, with the help of hand gesture recognition.

## Limitations
   
   - the intermidiate state between straight and complete bend fingure cannot be taken into consideration.
   - the bot can hold items with less weight only.

## Future Improvements 
   
   - better length analysis will help in judging the semi-bend state,i.e., including the length from the palm point.
   - Image processing can be replaced by ultra sensitive flex sensors and small stepper motors for better precision of the motion.

## Team members 
   1. [Anubhuti Shruti](https://github.com/Anu-123-gif)
   2. [Dhaval kanani](https://github.com/Dhaval-Kanani)
   3. [Rohit Kumar](https://github.com/Rohit-Kumar-219)
   4. [Rohit Sondarva](https://github.com/rohitsndrva)
   5. [Siddhant Taksande](https://github.com/d-siddhant)

## Mentors

   1. [Kunal](https://github.com/Ryuzaki1947)
   2. [Shiva Sri Teja](https://github.com/shivasriteja) 

## References
   
   - https://www.hindawi.com/journals/tswj/2014/267872/
   - https://www.hackster.io/mertarduino/how-to-make-wireless-gesture-control-robotic-hand-cc7d07