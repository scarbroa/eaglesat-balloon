/*****************************************************************************
 *
 * File:
 * 	adc.c
 *
 * Description:
 * 	Demonstration of reading the MCP3008 using SPI and wiringPi
 *
 * Revision 1.0
 * 	Date: 10/6/2018
 *	Author: David Stockhouse
 *	Changes: Created file from old work on RPi
 *
 ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <wiringPi.h>
#include <mcp3004.h>

#define ADC_CHAN 100
#define SPI_CHAN 0
#define ADC_NUM_CHANNELS	8

int main()
{
	int value, int i;

	// Initialize wiringPi SPI driver
	wiringPiSetup();
	mcp3004Setup(ADC_CHAN, SPI_CHAN);

	printf("Starting ADC test:\n\n");

	// Infinite loop. Use ctrl-c to exit
	while (1)
	{
		printf("Starting read cycle\n");

		// Read all ADC channels
		// for(i = 0; i < ADC_NUM_CHANNELS; i++) {
		for(i = 0; i < 4; i++) {

			value = analogRead(ADC_CHAN | i);
			printf("\tCH%d: %d\n", i, value);

		}

		// Wait 200 ms (5 Hz)
		usleep(200000);
	}

	// Will never reach here
	return 0;
}
