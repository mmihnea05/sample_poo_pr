#pragma once
#include "IRoom.h"
class CRoom : public IRoom{
protected:
	float pricePerNight;
	int capacity;
	int id; // static
	Facilities* facilities;
	ReservationTime* reservationTime;
	Extras* extras;

public:
	void setPricePerNight(float pricePerNight);
};

