/*****************************************************************************
 *
 * File:
 * 	uart_115200.c
 *
 * Description:
 * 	Demonstration of UART using 115200 baud rate
 *
 * Revision 1.0
 * 	Date: 10/6/2018
 *	Author: David Stockhouse
 *	Changes: Created file
 *
 ****************************************************************************/

// User application header files

// System header files
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

// Other includes
#include <wiringSerial.h>

int uart_test(void) {

	int uart0_fd;

	// Open serial interface identified by the device (in uart_115200.c)
	uart0_fd = serialOpen(UART0_DEVICE, 115200);

	if(uart0_fd == -1) {
		perror("uart_115200: Failed to open serial device: ");
		return -1;
	}

	// Print test string to UART
	serialPuts(uart0_fd, "Test\n\r");

}

