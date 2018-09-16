# Multiple Blink MSP430G2553 and MSP430f5529

In this project the Green and The Red LEDs on MSP430G2553 and MSP430f5529 dev boards will be toggled with different delays. While  implementing this project the Watch Dog Timer (WDT) has also been devactivated. The watch dog timer is an electronic timer that is capable of reseting the system when there is a computer malfunction. Since this project is to only blink an LED we're better off deactivating it. 

# Implementation
## MSP430G2553
In multiple Blinking the Red and Green LEDs on the lunchpads an infinite while loop was used where. The itteration through the code in the loop makes the green and red LEDs to blink in different speeds.  
### Special Function Registers

||7|6|5|4|3|2|1|0|
|---------|--|--|--|--|--|--|--|--|
|P1 **In**|||||||||
|P1 **OUT**||||||||1/0|
|P1 **DIR**||||||||1|

**Table** green LED's SFR P1.0.

||7|6|5|4|3|2|1|0|
|---------|--|--|--|--|--|--|--|--|
|P1 **In**|||||||||
|P1 **OUT**||||||||1/0|
|P1 **DIR**||1|||||||

**Table** *Special Function Registers for the RED LED P1.6* 

The above table shows as the two different states of the green LED and RED LED

## MSP430F5529
In MSP430F5529, the green led is connected to P4.7.
### Special Function Registers

||7|6|5|4|3|2|1|0|
|---------|--|--|--|--|--|--|--|--|
|P4 **In**|||||||||
|P4 **OUT**||||||||0/1|
|P4 **DIR**|1||||||||

**figure** *Special Function Registers* 

In the approach to blinking the green LED on MSP430F5529, the Direction register was set to 1. Which sets the pin to be an output pin. The **P4OUT** register is **XOR**ed inorder to get the toggle effect. The togle interval was set to delay 0.2seconds and the blinking was implemented using infinite while loop.

# Resources Used
* TI wikipedia 
* TI Resource Explorer

#Code Editor
* The One and Only **Code Composer Studio** By TI Instrunments 
