/*##########################
 * ### SAVE KIDS IN GAZA! ##
 * #########################*/


#include <avr/io.h>
#include <util/delay.h>
#include <stdio.h>


void main(void){
// Set direction register to pin 5 as output
DDRB |= (1 << 5) ;
// Repeat forever
   while(1)
{
// Set data register a pin 5 as 1 i.e. High
PORTB |= (1 << 5);
// Wait for 500ms
_delay_ms(1000);
// Set data register at pin 5 as 0 i.e. Low
PORTB &= ~(1 << 5);
// Wait for 500ms
_delay_ms(1000);
}
}

