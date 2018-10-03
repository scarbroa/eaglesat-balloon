/*****************************************************************************
 *
 * File:
 * 	main.c
 *
 * Description:
 * 	The main function for testing the functionality of the CRP interface 
 * 	software.
 *
 * Revision 1.0
 * 	Date: 10/2/18
 *	Author: David Stockhouse
 *	Changes: Template file created.
 *
 ****************************************************************************/

#include "crp.h"
#include "generateFilename.h"

#include <stdio.h>
#include <stdlib.h>

/**** Function main ****
 * Test for the CRP software.
 */
int main() {

	char buf[64];
	int i;

	// Tests that valid filenames are generated
	for(i = 0; i < 13; i++) {
		generateFilename(buf, 64, captureNum * 2 + 3);
		printf("%s\n", buf);
		sleep(4);
	}

	return 0;

} // Function main()

