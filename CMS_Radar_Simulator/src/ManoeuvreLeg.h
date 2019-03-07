/*
 * ManoeuvreLeg.h
 *
 *  Created on: 06-Feb-2014
 *      Author: kmoza
 */

#ifndef MANOEUVRELEG_H_
#define MANOEUVRELEG_H_


#include "Acceleration.h"

class ManoeuvreLeg
{
protected:
	unsigned int start_time;
	unsigned int end_time;
	Acceleration a;
public:
	ManoeuvreLeg();
	~ ManoeuvreLeg();

};


#endif /* MANOEUVRELEG_H_ */
