#pragma once
class Facilities {
private:
	bool balcony;
	bool fridge;
	bool AC;
	int numBeds;
	bool TV;
	bool couch;
	// ..... .....

public:
	void setBalcony(bool balcony);
	void setFridge(bool fridge);
	void setAC(bool AC);
	void setNumBeds(int numBeds);
	void setTV(bool TV);
	void setCouch(bool couch);

	bool getBalcony();
	bool getFridge();
	bool getAC();
	int getNumBeds();
	bool getTV();
	bool getCouch();
};

