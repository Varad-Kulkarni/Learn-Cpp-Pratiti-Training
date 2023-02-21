#pragma once
//Clock.h
#include <iostream>

//class Clock {
//private:
//	std::string m_timestr;
//	int m_hour;
//	int m_minute;
//	int m_seconds;
//public:
//	Clock();
//	Clock(int hour, int minute, int seconds);
//public:
//	void Time(char* timestring, int size);
//	void Tick();
//};


class Clock {
public:
	Clock(int hr = 0, int min = 0, int sec = 0);
public:
	void Tick();
	void Time(char buffer[], int len);
private:
	unsigned int m_seconds;
};