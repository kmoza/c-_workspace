/*
 * Position.cpp
 *
 *  Created on: 29-Jan-2014
 *      Author: kmoza
 */

#include "Position.h"

Position::Position()
{
	x = y = z= 0;
	vx = vy = vz = 0;

}

Position:: ~Position()
{

}

Position* Position::getPosition()
{
	return this;
}
