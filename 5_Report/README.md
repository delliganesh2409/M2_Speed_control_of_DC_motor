## Report

# OBJECTIVE OF THIS PROJECT
Speed control of Dc motor is a simple project based on Dc motor and atmega328p, by using potentiometer, we can vary the speed of dc motor.

# INTRODUCTION
The speed control mechanism is applicable in many cases like controlling the movement of robotic vehicles, movement of motors in paper mills and the movement of motors in elevators where different types of DC motors are used. Speed control of DC motor is one of the most useful features of the motor.The DC motor is the motor which converts the direct current into the mechanical work. It works on the principle of Lorentz Law, which states that the current carrying conductor placed in a magnetic and electric field experience a force.

# CATEGORY
Potentiometer is used to vary the speed of the Dc motor and oscope is used to shows the output voltage graph of dc motor.


# COMPONENTS AND SUPPLIES:
1.atmega328p 

2.Dc motor 

3.Connecting Wires

4.L293 motor driver

5.5V voltage source

6.Oscope

7.Potentiometer


# ADVANTAGES
1. Operates on DC power supply without a control.
2. Inexpensive controls for speed regulation.
3. Generally a low-cost motor option.
4. Easily pairs with gear reducers.

## High Level Requirements

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


## Block diagram

![block diagram](https://user-images.githubusercontent.com/101784923/164815196-a8a88ab7-8906-451b-aeca-83d5e0716b10.png)


## Data Flow Transition
![data](https://user-images.githubusercontent.com/101784923/164815239-2b001c68-639d-48d2-b730-31b2756bc2bc.png)


## Flow chart
![flowchar](https://user-images.githubusercontent.com/101784923/164815303-b5f0f435-8c88-42d5-b8d3-317812ec678a.png)



## State Transistion Diagram
![state](https://user-images.githubusercontent.com/101784923/164814521-8fb5ae08-0ba6-46d8-b728-25b6245b80c6.png)


## Schematic Diagram
![schematic ](https://user-images.githubusercontent.com/101784923/164802954-85bba1cd-d82a-48ae-b959-5c0df3fa8fd8.png)



## 4W & H  (WHO,WHAT,WHEN,WHERE,HOW)

## * WHO
 * The speed control mechanism is applicable in many cases like controlling the movement of robotic vehicles, movement of motors in paper mills and the movement of motors in elevators where different types of DC motors are used.
 
## * WHAT
 * Speed control of Dc motor.
 
## * WHEN
 * It can be used for many applications like elevators, steel mills, rolling mills, locomotives, and excavators.
 
## * WHERE
 * Robots
 * Cranes.
 * Air compressor.
 * Lifts(shopping mall etc).
 * Elevators.
 * Winching system.
 * Electric traction.
 
## * HOW
 * By changing value of the potentiometer, we can easy to adjust the speed of the Dc motor.

## * SWOT(STRENGTH,WEAKNESS,OPPORTUNITY,THREATS)

## * STRENGTH
 * They are suitable for low-speed torque
 * They have adjustable speed
 * They offer a wide range of speed control both below and above the rated speed
 * They have a very high and strong starting torque
 * They are used in appliances such as electric trains and cranes having overwhelming burdens in the beginning conditions
 * They are more affordable
 * Their maintenance is easy and takes little to no time
 
## * WEAKNESS
 * DC motors have a high initial cost.
 * Maintenance cost is high and increased operation due to the presence of brushes and commutator.
 * Due to sparking at brush DC motors cannot operate in explosive and hazardous conditions.
 * As the speed increases, the shaft gets vibrated and the armature gets damaged.
 * We need converters to supply power to the motor.
 
## * OPPORTUNITY
 * DC series motors are used where high starting torque is required and variation of speed is possible. Series motors are used in traction systems, cranes, air  compressors, vacuum compressors, sewing machines, etc.
 * Shunt motors are a special type of motor used where constant speed is required. These motors are used in blowers, weaving machines, spinning machines, lifts, etc.
 
## * THREATS
 * Its drive produces more noise.
 * The losses are higher because of lower efficiency.

## The Test plan of this project is

* To know the importnace of the project.
* To know the work in specific conditions.
* To know the Working Principle.
* To verify the microcontroller chip.
* To verify the devices are interfacing with microcontroller.

## Test Cases

| ID        |  Description                                       | Test cases                 |  
| :-------- | :--------------------------------                  | :------------------------- | 
| `1`       | `Dc motor`                                         | `Passed`                   |  
|  `2`      | `potentiometer`                                    |   `Passed`                 |   
|`3`        | `Oscope`                                           |	`Passed`	                |



# OUTPUT

## THE CIRCUIT IN OFF POSITION

![off](https://user-images.githubusercontent.com/101784923/164803404-72fcd247-3523-4392-85c0-c512d08425a9.png)


## THE CIRCUIT IN ON POSITION
![on](https://user-images.githubusercontent.com/101784923/164803522-d13d9636-0c30-4fd2-b785-b5fd3d505e51.png)

