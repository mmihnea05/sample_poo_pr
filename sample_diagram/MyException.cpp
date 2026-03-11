#include "MyException.h"

MyException::MyException(){}

MyException& MyException::getInstanceMyException() {
	static MyException instanceMyException;
	return instanceMyException;
}