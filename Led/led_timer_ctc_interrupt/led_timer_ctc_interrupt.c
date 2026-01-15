#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
// This program toggles the pin PB5 every 1 second using the timer0 on the atmega328p
typedef unsigned char byte;
#define DDRB *((volatile byte*)0x24);
#define PINB *((volatile byte*)0x23);
#define PB5 5
#define WGM01 1
#define CS00 0
#define CS02 2
#define OCIE0A 1


int main(void){
	// Set pin PB5 as output
	DDRB |= (1 << PB5);
	// Set timer mode to CTC
	TCCR0A = (1 << WGM01);
	// Set Output compare register
	OCR0A = 156;
	// Enable Interrupt On CTC
	TIMSK0  = (1 << OCIE0A);
	// Enable global interrupt
	sei();
	// Set prescalar and start timer
	TCCR0B = (1 << CS00) | (1 << CS02);
	while(1)
	{
	}
}

ISR(TIMER0_COMPA_vect){
		PINB |= (1 << PB5);
	}

