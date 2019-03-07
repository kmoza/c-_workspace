/*
 * Radar.h
 *
 *  Created on: 29-Jan-2014
 *      Author: kmoza
 */

#ifndef RADAR_H_
#define RADAR_H_

#include <string>
#include <vector>
#include "Position.h"
#include "ManoeuvreLeg.h"
#include "Track.h"

class Radar
{
private:
	unsigned int sweep_time;
	unsigned int radius; // represents the range of the radar [temporary arrangement]
	std::string radar_name;
	Position radar_pos; //position indicates the centre point of the radar
	std::vector<ManoeuvreLeg *> radar_manoeuvre;

public:
	Radar();
	~ Radar();

	void scanTracks(Track *trck);
	void getRadarPosition();

};


#endif /* RADAR_H_ */
