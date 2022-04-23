# Report

## OBJECTIVE OF THIS PROJECT:
Speed control of Dc motor is a simple project based on Dc motor and atmega328p, by using potentiometer and L293 we can vary the speed of dc motor.

# INTRODUCTION:
The speed control mechanism is applicable in many cases like controlling the movement of robotic vehicles, movement of motors in paper mills and the movement of motors in elevators where different types of DC motors are used. Speed control of DC motor is one of the most useful features of the motor.The DC motor is the motor which converts the direct current into the mechanical work. It works on the principle of Lorentz Law, which states that the current carrying conductor placed in a magnetic and electric field experience a force.

# CATEGORY:
Potentiometer is used to vary the speed of the Dc motor and oscope is used to shows the output voltage graph of dc motor.


# COMPONENTS AND SUPPLIES:
1.atmega328p 

2.Dc motor 

3.Connecting Wires

4.L239

5.5V Rail

6.Oscope


# ADVANTAGES:
1. Operates on DC power supply without a control.
2. Inexpensive controls for speed regulation.
3. Generally a low-cost motor option.
4. Easily pairs with gear reducers.

## High Level Requirements:

| ID        |  Description                                       |  Status         |
| :-------- | :--------------------------------                  | :-------------- |
|`HR01`	    |`Potentiometer interfacing with Atmega328p`             |`IMPLEMENTED`  
|  `HR02`   | `L293 interfacing with Atmega328p`              | `IMPLEMENTED `  |   
|`HR03`     | `DC motor interfacing with Atmega328p using LM329`|`IMPLEMENTED`    |
|`HR04`	    |`Oscope interfacing with Atmega328p`             |`IMPLEMENTED`    |


## low level Requriments  

|  ID   |  Description                                                                 |  HLR ID              | Status (Implemented/Future)|           
| :-----| :----------------------------------------------------                        | :--------------------| :-------------------       |
| `LR01`|	`By using potentioment, we can vary the speed of the dc motor`                 |`HR01`                |	`IMPLEMENTED`              |
|`LR02`	|  `change the direction of the dc motor`                                          |     ` HR01`	        |`IMPLEMENTED`               |
|`LR03` |	`change the speed of the dc motor automatically                             `|  `HR01`              |	`IMPLEMENTED`              |
|`LR04`|	`view the output in oscope `	                                               |       `HR02`          |`IMPLEMENTED`              |


## Block diagram:

![block diagram](https://user-images.githubusercontent.com/101784923/164815196-a8a88ab7-8906-451b-aeca-83d5e0716b10.png)


## Data Flow Transition:
![data](https://user-images.githubusercontent.com/101784923/164815239-2b001c68-639d-48d2-b730-31b2756bc2bc.png)


## Flow chart
![flowchar](https://user-images.githubusercontent.com/101784923/164815303-b5f0f435-8c88-42d5-b8d3-317812ec678a.png)



## State Transistion Diagram:
![state](https://user-images.githubusercontent.com/101784923/164814521-8fb5ae08-0ba6-46d8-b728-25b6245b80c6.png)


## Schematic Diagram:
![schematic ](https://user-images.githubusercontent.com/101784923/164802954-85bba1cd-d82a-48ae-b959-5c0df3fa8fd8.png)



# 4W & H  (WHO,WHAT,WHEN,WHERE,HOW)

# * WHO:
 * A DOOR SENSOR IS THE APPLICATION USED TO DETECT THE PERSONS NEAR THE SENSOR.
# * WHAT:
 * HIGH RELIABILITY.
# * WHEN:
 * IT CAN BE USED ANY TIME MOSTLY.
# * WHERE:
 * PRESENCE OF NEAR BY OBJECTS
# * HOW:
 * EASY TO USE AND ADJUSTED IN A SHORT RANGE.

# * SWOT(STRENGTH,WEAKNESS,OPPORTUNITY,THREATS)

# * STRENGTH:
 * IT IS LESS IN PRICE.
 * HELPS IN SECURITY SYSTEM.
 * TYPE OF ALERT WE GET ONCE THYE DOOR OPENS.
 * WE CAN CHOOSE ALARAM OR LED TO ACTIVATE.
# * WEAKNESS:
 * LIMITED RANGE.
# * OPPORTUNITY:
 * INTERNET OF THINGS(IOT).
 * DOOR SENSOR DEVICES MARKETT UPCOMING TRENDS.
# * THREATS:
 * SENSOR DIS CONNECTION.
 * FAILURE OF THE COMPONENTS.
 * MORE POWER CONSUMPTION.
# OUTPUTS:
# * OFF CONDITION
![OFF MODE](https://user-images.githubusercontent.com/101619680/164508488-3ddbe5f8-25fd-4cb8-9f19-af29bcad3520.png)
# * ON CONDITION:
![ON MODE](https://user-images.githubusercontent.com/101619680/164508574-bc06b492-6e78-4a3a-8c7f-2e2f57b109c1.png)
