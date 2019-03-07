/*
 * main.cpp
 *
 *  Created on: 26-Dec-2013
 *      Author: kmoza
 */

#include<iostream>
#include<cstring>

using namespace std;

class Logger{
public:
	static Logger Instance();
	//bool openLogFile(string logFile);
	//void writeToLogFile();
	//bool closeLogFile();

private:
	Logger(){}; // so that it cannot be called
	Logger(Logger const&){}; //copy constructor is private
	Logger& operator=(Logger const&){}; //assignment operator is private
	static Logger m_pInstance;
	//static Logger instance;

};



