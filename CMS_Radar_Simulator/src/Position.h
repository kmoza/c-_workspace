/*
 * Position.h
 *
 *  Created on: 29-Jan-2014
 *      Author: kmoza
 */

#ifndef POSITION_H_
#define POSITION_H_

class Position
{
private:
	// initial location of object
	unsigned int x;
	unsigned int y;
	unsigned int z;

	// initial velocity of the object
	unsigned int vx;
	unsigned int vy;
	unsigned int vz;

public:
	Position();
	~ Position();

	Position* getPosition();

};

#endif /* POSITION_H_ */
