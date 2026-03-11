#include "Logger.h"

Logger::Logger(){}

Logger& Logger::getInstanceLogger() {
	static Logger instanceLogger;
	return instanceLogger;
}

void Logger::setMessage(string message) {
	this->message = message;
}

void Logger::printMessage() {
	cout << message << endl;
}