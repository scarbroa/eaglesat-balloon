/*****************************************************************************
 *
 * File:
 * 	uart_115200.h
 *
 * Description:
 * 	Header file for UART demonstration
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

// Other includes
#include <wiringSerial.h>

// Constants
#define UART0_DEVICE	"/dev/ttyAMA0"

// Function prototypes
int uart0_init(int baud);

