default:
	avr-gcc -Os -DF_CPU=16000000UL -mmcu=atmega328p -c -o PROGRAM_NAME.o PROGRAM_NAME.c
	avr-gcc -mmcu=atmega328p PROGRAM_NAME.o -o PROGRAM_NAME
	avr-objcopy -O ihex -R .eeprom PROGRAM_NAME PROGRAM_NAME.hex
	avrdude -F -V -c arduino -p ATMEGA328P -P /dev/ttyUSB0 -b 115200 -U flash:w:PROGRAM_NAME.hex

