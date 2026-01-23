#include <avr/io.h>


void main(void){
	// Set pin as output
	DDRD |= (1 << PD6);
	// Set timer mode as CTC
	TCCR0A = (1 << WGM01);
	// Set output compare register
	OCR0A = 255;
	// Toggle OC0A on compare match
	TCCR0A |= (1 << COM0A0) | (1 << WGM01);

	// Set prescalar and start timer
	TCCR0B = (1 << CS00) | (1 << CS02);
	// Infinite loop
	while(1){}
}
