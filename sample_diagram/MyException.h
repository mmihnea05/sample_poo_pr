#pragma once
#include<string>
using namespace std;

class MyException{
private:
	string message;

private:
	MyException();
	MyException(const MyException& obj) = delete;
	MyException& operator=(const MyException& obj) = delete;

public:
	static MyException& getInstanceMyException();
};

