/*****************************************************************************
 *
 * File:
 * 	crp_generateFilename.c
 *
 * Description:
 * 	Generates a filename for a file in which to store raw image data
 *
 * Revision 1.0
 * 	Date: 10/2/18
 *	Author: David Stockhouse
 *	Changes: File brought to the project from the old eaglesat-plugsin
 *		repo. It may need to be changed to adapt to the new system.
 *
 ****************************************************************************/

#include "crp_generateFilename.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>


/**** Function crp_generateFilename ****
 * Generate a filename for the EagleSat 2 plugs-in test in March 2018 that 
 * matches the format "captureN-mm.dd.yyyy-hh:mm:ss.RAW" where "N" is the 
 * number index of the current capture within this process.
 */
int crp_generateFilename(char *buf, int bufSize, int exposure) {

	static int captureNum = 0;
	int charsWritten;

	// Time variables
	time_t t;
	struct tm currentTime;

	// Get current time in UTC
	t = time(NULL);
	currentTime = *localtime(&t);

	// If the exposure is more than three digits, it may as well be
	// infinite, so cap at 999
	if(exposure > 999) exposure = 999;

	// Create filename using date/time and exposure length
	charsWritten = snprintf(buf, bufSize, 
			"capture%d-%02d.%02d.%04d_%02d:%02d:%02d_exp%03d.RAW",
			captureNum,
			currentTime.tm_mon + 1,
			currentTime.tm_mday,
			currentTime.tm_year + 1900,
			currentTime.tm_hour,
			currentTime.tm_min,
			currentTime.tm_sec,
			exposure);

	// Increment counter number
	captureNum++;

	// Return length of the new string
	return charsWritten;

} // Function crp_generateFilename()

