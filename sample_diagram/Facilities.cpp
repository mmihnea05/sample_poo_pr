#include "Facilities.h"

void Facilities::setBalcony(bool balcony) {
	this->balcony = balcony;
}

void Facilities::setFridge(bool fridge) {
	this->fridge = fridge;
}

void Facilities::setAC(bool AC) {
	this->AC = AC;
}

void Facilities::setNumBeds(int numBeds) {
	this->numBeds = numBeds;
}

void Facilities::setTV(bool TV) {
	this->TV = TV;
}

void Facilities::setCouch(bool couch) {
	this->couch = couch;
}

bool Facilities::getBalcony() {
	return balcony;
}

bool Facilities::getFridge() {
	return fridge;
}

bool Facilities::getAC() {
	return AC;
}

int Facilities::getNumBeds() {
	return numBeds;
}

bool Facilities::getTV() {
	return TV;
}

bool Facilities::getCouch() {
	return couch;
}