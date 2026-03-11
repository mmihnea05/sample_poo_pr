#pragma once
class Date;

class ReservationTime{
private:
	Date* checkIn;
	Date* checkOut;

public:
	ReservationTime(Date* checkIn, Date* checkOut);
};

