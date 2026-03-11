#include "Extras.h"

void Extras::setBreakfast(bool breakfast) {
	this->breakfast = breakfast;
}

void Extras::setParking(bool parking) {
	this->parking = parking;
}

void Extras::setPool(bool pool) {
	this->pool = pool;
}

void Extras::setSauna(bool sauna) {
	this->sauna = sauna;
}

void Extras::setExtraCleaning(bool extraCleaning) {
	this->extraCleaning = extraCleaning;
}

bool Extras::getBreakfast() {
	return breakfast;
}

bool Extras::getParking() {
	return parking;
}

bool Extras::getPool() {
	return pool;
}

bool Extras::getSauna() {
	return sauna;
}

bool Extras::getExtraCleaning() {
	return extraCleaning;
}