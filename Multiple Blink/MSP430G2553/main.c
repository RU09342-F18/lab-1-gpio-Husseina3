#include <msp430.h> 


/**
 * File: main.c for MSP430G2553
 * Created On: 9/14/2018
 * Last Edited: 9/15/2018
 * Author: Anwar Hussein
 */
int main(void)
{
	

    WDTCTL = WDTPW + WDTHOLD;                 // This line of code deactivates the Watch Dog Timer. The WDT is an electronic timer that
                                              // that resets the system whenever it detects a computer malfunction. Since this project is
                                              // made to blink a single LED the WTD is not necessary.

    P1DIR |= BIT0;                             // The Direction Register for port 1 is set to 1 on Pin0. Since BIT1 = 00000001, when a number
                                               //is ORed with it only the least significant bit get altered.  As a result P1.0 is set to be an
                                               //OUTPUT pin.
    P1DIR |= BIT6;                             // The Direction Register for port 1 is set to 1 on Pin6. Since BIT1 = 00000001, when a number
                                               //is ORed with it only the least significant bit get altered. As a result P1.6 is set to be an
                                               //OUTPUT pin.



    /*This block of code creates an infinite while loop. The ^= is an XOR operator
     *which is used to toggle Port 1 pin 0(P1.0) at a delay of 0.3 seconds and Port 
     *1 Pin 6 (P1.6) at a delay of 0.3 Seconds.
     */

    while(1)
    {
        P1OUT ^= BIT6;   // Toggles P1.6

        _delay_cycles(200000); // The Delay Between the Toggle is 0.2

       P1OUT ^= BIT0;
        _delay_cycles(300000); // The Delay Between the Toggle is 0.3
    }
    return 0;
}
