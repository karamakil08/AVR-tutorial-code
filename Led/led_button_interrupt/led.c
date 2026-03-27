/*##########################
 * ####SAVE KIDS IN GAZA####
 * #########################*/

#include <avr/io.h>
#include <avr/interrupt.h>


int main(void){
	// Set led pin as output
	DDRB |= (1 << PB5);
	// Set button pin as pull-up
	PORTB |= (1 << PB1);
	// Enable Interrupt control register
	PCICR = (1 << PCIE0);
	// Interrupt Mask
	PCMSK0 = (1 << PCINT1);

	sei();
	while(1){
	}
}


ISR(PCINT0_vect){
	// Toggle pin
	PINB = (1 << PB5);	
}
