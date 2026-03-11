#pragma once
class Users;
class IRoom;

typedef enum status {
	cancelled, confirmed, finished
};

class Accomodation{
private:
	int accomodationId; // static
	int clientId;
	Users* user;
	IRoom* rentedRoom;
	status accomodationStatus;

public:

};

