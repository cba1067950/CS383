/*
 * JPLane.cpp
 *
 *  Created on: Oct 20, 2017
 *      Author: james
 */

#include "../../inc/JPLane.h"

JPLane::JPLane()
{
	_renderFlagged = false;

}

void JPLane::resetToFirstCar()
{
}

SFCar* JPLane::getNextCar()
{
	return 0;
}

SFCar* JPLane::getFirstRenderedCar()
{
	return 0;
}

void JPLane::removeCurrentCar()
{
}

void JPLane::removeFirstCar()
{
}

void JPLane::addCarAtPos(SFCar* car, double position)
{
}

void JPLane::addCarAtEnd(SFCar* car)
{
}

void JPLane::flagCarAsFirstRendered()
{
}

JPLane::~JPLane() {
	// TODO Auto-generated destructor stub
}

