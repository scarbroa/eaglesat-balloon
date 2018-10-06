/*****************************************************************************
 *
 * File:
 * 	crp_ucamUart.c
 *
 * Description:
 * 	Functions for using the UART module with wiringPI
 *
 * Revision 1.0
 * 	Date: 10/6/18
 *	Author: David Stockhouse
 *	Changes: Created file andadded skeletom from wiringPi documentation
 *
 ****************************************************************************/

#include "crp.h"
#include "generateFilename.h"

#include <Python.h>

#include <stdio.h>
#include <stdlib.h>

int crp_SerialInit
