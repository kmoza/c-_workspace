/*
 * Track.h
 *
 *  Created on: 29-Jan-2014
 *      Author: kmoza
 */

#ifndef TRACK_H_
#define TRACK_H_

#include <string>
#include <vector>
#include "Position.h"
#include "ManoeuvreLeg.h"


class Track
{
private:
	std::string track_name;
	Position track_pos;
	std::vector<ManoeuvreLeg *> track_manoeuvre;

public:
	Track();
	~ Track();

};


#endif /* TRACK_H_ */
