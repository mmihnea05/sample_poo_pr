#pragma once
class Extras{
private:
	bool breakfast;
	bool parking;
	bool pool;
	bool sauna;
	bool extraCleaning;
	// .... .... 

public:
	void setBreakfast(bool breakfast);
	void setParking(bool parking);
	void setPool(bool pool);
	void setSauna(bool sauna);
	void setExtraCleaning(bool extraCleaning);

	bool getBreakfast();
	bool getParking();
	bool getPool();
	bool getSauna();
	bool getExtraCleaning();
};

