#pragma once
#include<string>
#include<vector>
using namespace std;
class IRoom;
class Promotions;

class RentalUnit{
private:
	int id; // static
	string name;
	string address;
	int capacity;
	vector<IRoom*> rooms;
	Promotions* promotion;

public:

};

