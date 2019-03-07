/*
 * simclock.h
 *
 *  Created on: 28-Jan-2014
 *      Author: kmoza
 */

/*
 * ***************************************************************************************************
 * Simulator clock for tracking the simulation. Should have only one instance running throughout the simulation.
 ****************************************************************************************************
 */

#ifndef SIMCLOCK_H_
#define SIMCLOCK_H_

#include<cstdio>

class SimClock
{
private:

	//data members
	int clock_time; // stores current time of the simulator clock
	static SimClock* clock; //stores the single instance of simulator clock

	SimClock(); //constructor for clock

public:
	void tickClock(); //increments the clock time by 1 tick
	static SimClock* initClock(); //gets and instance of simulator clock
	int getTime();
	void displayTime();
};

#endif /* SIMCLOCK_H_ */
