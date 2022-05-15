
# Abstract
#
**This project is based on implementing the *__CAR WIPER SYSYTEM__*. A windscreen wiper, windshield wiper or wiper blade is a device used to remove rain, snow, ice, washer fluid, water, and/or debris from a vehicle's front window as well as used in rear window. The wiper system is used to detect rainfall and activate wiper automatically with driver interaction. This system fulfills the safety of the drivers to focus on their primary task of providing clear view from in side for driving.Here in the project the first time button press is assumed as the ignition key for car, the action should occur is glow red led to show it is turned on.This project shows  the wiper's differnt speed when button pressed.To overcome different types of rain speeds, different speed's of wiper movement is enabled on every key press.The starting position of wiper is denoted as blue led and far postion is orange led.**

# WIPER_SYSTEM
#
* This project is based on implementing the *__WIPER SYSYTEM__*. 
* A windscreen wiper, windshield wiper or wiper blade is a device used to remove rain, snow, ice, washer fluid, water, and/or debris from a vehicle's front window as well as used in rear window. 
* The wiper system is used to detect rainfall and activate wiper automatically with driver interaction. This system fulfills the safety of the drivers to focus on their primary task of providing clear view from in side for driving.
* Here in the project the first time button press is assumed as the ignition key for car, the action should occur is glow red led to show it is turned on.
* This project shows  the wiper's differnt speed when button pressed.
* The starting position of wiper is denoted as blue led and far postion is orange led.
#
## __Commends__

| COMMEND | ACTION |
| ------ | -------- |
|2 seconds button press |-> Red led turn on.|
  |First press  |->  blue,green,orange in this order wiper runs at 1Hz frequency.| 
 | Second press |->  blue,green,orange in this order wiper runs at 4Hz frequency.| 
  |Third press  |->  blue,green,orange in this order wiper runs at 8Hz frequency. |
  |Fourth press |->  wiper turn off comes to blue position.|
  |Fifth press  |->  Red led turn off.|
#
# COMPONENT AND DISCRIPTION
* The STM32F4DISCOVERY Discovery kit allows users to easily develop applications with he STM32F407VG high-performance microcontroller with the Arm Cortex-M4 32-bit
core.
* It  includes everything required either for beginners or experienced users to get started quickly.
* Based on STM32F407VG, it includes an ST-LINK/V2-A embedded debug tool, one STMEMS digital accelerometer, one digital microphone, one audio DAC with integrated class D
speaker driver, LEDs, push-buttons and a USB OTG Micro-AB connector. Specialized addon boards can be connected by means of the extension header connectors. The
STM32F4DISCOVERY Discovery kit comes with the STM32 comprehensive free software
libraries and examples available with the STM32CubeF4 MCU Package.
#
# SIMPLE BLOCK DIAGRAM
![Untitled Diagram drawio](https://user-images.githubusercontent.com/101009349/168413690-17e27f2e-dabc-4971-963a-b5196207648d.png)

#
# SIMULATION QEMU
## OFF STATE
<img width="960" alt="2022-05-13-23-55-56" src="https://user-images.githubusercontent.com/101009349/168346599-7507051e-b152-4255-a969-6b3e27a2564e.png">

## ON STATE

<img width="960" alt="2022-05-13-23-56-40" src="https://user-images.githubusercontent.com/101009349/168346582-c11e1226-ef0a-4f04-be1c-02d75a99246a.png">

#
# SIMULATED 



https://user-images.githubusercontent.com/101009349/168459292-39c0f624-767a-4691-8312-9ffb8e1a33d4.mp4



OUTPUT WITH EXPLANATION
#

##  PROCEDURE
  * Button pressed 1st - RED LIGHT glows, which indicates the CAR IGNITION ON.
  * Button pressed 2nd - BLUE, GREEN, ORANGE LED glows with slow movement with some delay.
  * Button pressed 3rd - BLUE, GREEN, ORANGE LED glows with medium speed movement with some delay.
  * Button pressed 4th - BLUE, GREEN, ORANGE LED glows with fast speed movement with some delay.
  * Button pressed 5th - ORANGE, GREEN, BLUE LED glows anticlockwise direction indicating wiper off.
  * Button pressed 6th - RED LIGHT off, which indicates the CAR IGNITION OFF. 
#
# CIRCUIT FLOW DIAGRAM
![BEHAVIOUR_1_UPDATE](https://user-images.githubusercontent.com/101009349/168428514-d7e71706-f66d-4952-8020-50cd209a6abb.png)

#
# CONCLUSION
#
**The wiper system project is successfully implemented in STM32 CUBE IDE. STM32F407VG board is used for wiper system.The various speed movement of wiper is also implemented.** 



