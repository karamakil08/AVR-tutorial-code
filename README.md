# AVR-tutorial-code
### The code in this repo was written following the [AVR programming tutorial](https://www.youtube.com/playlist?list=PLA6BB228B08B03EDD) on Youtube by [humanHardDrive](https://www.youtube.com/@humanHardDrive) 
This repo uses the Atmega328P MCU, [Datasheet](https://ww1.microchip.com/downloads/en/DeviceDoc/Atmel-7810-Automotive-Microcontrollers-ATmega328P_Datasheet.pdf).


## The Led folder includes sub folders that contain files of the following:
1. led_delay: Includes a program that toggles a led using the delay function
2. led_mask_delay: Includes a program that toggles a led using the delay function and also includes bit masking
3. led_button_interrupt: uses an Interrupt Service Routine (ISR) to turn on a led when button is pressed
4. led_timer_ctc_interrupt: uses an ISR that uses TIMER0 on CTC mode that prompts an interrupt on timer compare match
5. led_no_interrupt: Toggles the led with no interrupt and no delay function by using the Action on compare match on page 84 of the MCU.

in order to run any file edit the Makefile (I'm sorry I was too lazy to make a seperate Makefile for every file)
