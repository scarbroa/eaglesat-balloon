/*****************************************************************************
 *
 * File:
 * 	crp.h
 *
 * Description:
 * 	Header file for crp.c which contains preprocessor definitions and 
 * 	function headers
 *
 * Revision 1.0
 * 	Date: 10/2/18
 *	Author: David Stockhouse
 *	Changes: Template file created with function crp_sensorRead and
 *		crp_imageStore	
 *
 ****************************************************************************/

#ifndef EAGLESAT_CRP_H
#define EAGLESAT_CRP_H

#include <stdio.h>
#include <stdlib.h>

int crp_sensorRead(char *buffer, int bufSize);

int crp_imageStore(char *buffer, int bufSize, FILE *fd);

#endif // EAGLESAT_CRP_H

