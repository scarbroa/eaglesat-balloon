/*****************************************************************************
 *
 * File:
 * 	generateFilename.h
 *
 * Description:
 * 	Header file for generateFilename.c which contains preprocessor
 * 	definitions and function headers
 *
 * Revision 1.0
 * 	Date: 10/2/18
 *	Author: David Stockhouse
 *	Changes: File brought to the project from the old eaglesat-plugsin
 *		repo. It may need to be changed to adapt to the new system.
 *
 ****************************************************************************/

#ifndef GENERATE_FILENAME_H
#define GENERATE_FILENAME_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define	FILENAME_SIZE	64

int generateFilename(char *, int, int);

#endif // GENERATE_FILENAME_H

