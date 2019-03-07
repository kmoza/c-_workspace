/*
 * Scenario.h
 *
 *  Created on: 06-Feb-2014
 *      Author: kmoza
 */

#ifndef SCENARIO_H_
#define SCENARIO_H_

#include "simclock.h"
#include <string>

using namespace std;
class Scenario
{
protected:

	long sim_start_time;
	long sim_end_time;
	string scenario_name;
	SimClock *si_clock;

public:
	Scenario();
	~ Scenario();
};


#endif /* SCENARIO_H_ */
