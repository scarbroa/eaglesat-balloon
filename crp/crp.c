/*****************************************************************************
 *
 * File:
 * 	crp.c
 *
 * Description:
 * 	Functions related to interfacing to the CRP system.
 *
 * Revision 1.0
 * 	Date: 10/2/18
 *	Author: David Stockhouse
 *	Changes: Template file created with function crp_sensorRead and
 *		crp_imageStore	
 *
 * Revision 1.1
 * 	Date 10/3/18
 * 	Author: David Stockhouse
 * 	Changes: Modified file to be composed of wrapper functions for python
 * 		scripts rather than C functions.
 *
 ****************************************************************************/

#include "crp.h"
#include "generateFilename.h"

#include <Python.h>

#include <stdio.h>
#include <stdlib.h>


/**** Function crp_sensorRead ****
 * Reads an image from the sensor and places it into the buffer.
 */
int crp_sensorRead(char *buffer, int bufSize) {

	// Initialize use of the embedded python module
	Py_Initialize();


	// Close out use of python
	Py_Finalize();

	return 0;

} // Function crp_sensorRead


/**** Function crp_imageStore ****
 * Stores an image that has been read from a buffer into the file described
 * by df.
 */
int crp_imageStore(char *buffer, int bufSize, FILE *fd) {


	return 0;

} // Function crp_imageStore

