/*
 * simclock.cpp
 *
 *  Created on: 28-Jan-2014
 *      Author: kmoza
 */

#include "simclock.h"
#include <cstdio>
#include <iostream>

SimClock* SimClock::clock = NULL;

SimClock::SimClock()
{
	clock_time = 0;
}

void SimClock::tickClock()
{
	clock_time++;
}


SimClock* SimClock::initClock()
{
	if(clock == NULL)
	{
		clock = new SimClock();

	}
	return clock;
}

int SimClock::getTime()
{
	return clock_time;
}



void SimClock::displayTime()
{
	std::cout << "Current Simulation Time == " <<clock_time << " secs. " <<std::endl;
}
