# REQUIREMENTS

##  Feautures
   * Easy in controlling speeds of wiper rotate movement.
   * Turning on/off car on button for 2 Seconds.
   * controlling speeds using button press count.

## Research
   * Referred many research papers on wiper control.
   * Referred many e-sources for coding part.
   * Surfed in internet(youtube, google scholar).
     * [Dynamic Modeling and Control of the Windshield Wiper Mechanisms](http://www.wseas.us/e-library/transactions/systems/2009/29-486.pdf)
     * Mahindra 
     WIPER CONTROL

      <img width="960" alt="2022-05-14-19-56-22" src="https://user-images.githubusercontent.com/101009349/168429982-15e602b9-d560-4a53-8403-5cce7a27241e.png">
   
      <img width="960" alt="2022-05-14-19-56-41" src="https://user-images.githubusercontent.com/101009349/168430027-d01e134a-b244-4b73-af1d-2f2a29a80066.png">

<img width="960" alt="2022-05-14-19-56-41" src="https://user-images.githubusercontent.com/101009349/168430101-828ddb83-3895-4c6b-a9ab-6510cb15e39a.png">
       
##  Key feautures
   * Controlling speeds of wiper by key presses.
   * Three differnt speed of wiper rotation available.
    
# The 4W's and a H 

## WHAT
   * It is the process of operating the wiper system's with 3 differnet speed (1 hz,4 hz,8 hz)under various rainy circumstances.
## WHY
  * The main goal of this project is to control the speed of the wiper system in  rainy conditions.
## WHO
  * Windshield wiper's manufacturers/car manufacturers, who require the controlling of wipers on different speeds.
## WHERE
  * This mainly comes in use on Vehicle front Windshield glasses.
  * Rare windshield wiper which is available in some cars.
## HOW
  * This project is implemented using "Embedded C Program" based on ARM Processors/Controllers.
  * stm32 cubeide is also used.
# SWOT ANALYSIS OF THE PROJECT
 ## STRENGTHS:
    * Easily Operating.
    * Easy controlling of speed's.
 ## WEAKNESS:
    * No sensor control of wiper action.
    * STM32 board need period maintance to work fine.
    * Firmware upadte is not provided.
 ## THREATS:
    * Failure of operation may lead to wiper struck in any position .
    * Accident may occur if not has maintance or software update is not done.
 
# Detail Requirements

## High Level Requirements:

|  ID   | Description | Status (Implemented/In Future) |
| ----- | ----------- | ------------------------------ |
| HLR 1 |    Car ignition/ON  |  Implemented  |
| HLR 2 |    wiper Speed Control    | Implemented |
| HLR 3 |    Switch based speed control  | Implemented |
| HLR 4 |    Wpier ends at were it is started| Implemented|
| HLR 5 |    Car ignition OFF  |  Implemented  |
| HLR  6|    Controlling wiper speed using sensor   | In Future |

## Low Level Requirements:

|  ID   | Description | Status (Implemented/ In Future) |
| ----- | ----------- | ------------------------------- |
| LLR 1 | LED glow  |  Implemented  |
| LLR 1 | LED glow  with delay  |  Implemented  |
