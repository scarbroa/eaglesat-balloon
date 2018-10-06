#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <wiringPi.h>
#include <wiringPiI2C.h>
#include <unistd.h>


void ISR(void);

int main() {

	// BCM mode
	wiringPiSetupGpio();

	int fd, result;

	// fd is identity of the I2C analog device
	fd = wiringPiI2CSetup(0x08);

	// sets BCM pin 6 to input, for kill switch on falling edge (switch set with pull-up resistor)
	system("gpio -g mode 6 in");
	wiringPiISR(6, INT_EDGE_FALLING, ISR);

	printf("Potentiometer Value:\n\n");

	while(1) {

		result = wiringPiI2CRead(fd);

		// '\033[A' moves cursor up one line, to overwrite previous output
		printf("\033[A%d     \n", result);
		usleep(20000);	// sleep 20 ms
	}

}


void ISR(void) {

	// exits on interrupt from pin 6
	exit(0);

}
