////Clock.cpp
//
#include <iostream>
#include "Clock.h"
#include <stdexcept>
#include <string>
#include <cstring>
using namespace std;
//
//Clock::Clock() {
//	m_hour = 0;
//	m_minute = 0;
//	m_seconds = 0;
//	m_timestr = "00:00:00";
//}
//
//Clock::Clock(int hour, int minute, int seconds) {
//	if (hour > 23 || hour < 0) {
//		throw invalid_argument("Hour must be greater than -1 or less than 24...");
//	}
//	if (minute > 59 || minute < 0) {
//		throw invalid_argument("Hour must be greater than -1 or less than 60...");
//	}
//	if (hour > 59 || hour < 0) {
//		throw invalid_argument("Hour must be greater than -1 or less than 60...");
//	}
//
//	m_hour = hour;
//	m_minute = minute;
//	m_seconds = seconds;
//
//	string str_hour = to_string(hour), str_minute = to_string(minute), str_seconds = to_string(seconds);
//	if (m_hour < 10) {
//		str_hour = "0" + str_hour;
//	}
//	if (m_minute < 10) {
//		str_minute = "0" + str_minute;
//	}
//	if (m_seconds < 10) {
//		str_seconds = "0" + str_seconds;
//	}
//
//	m_timestr = str_hour + ":" + str_minute + ":" + str_seconds;
//}
//
//void Clock::Time(char* timestring, int size) {
//	for (int i = 0; i < 8; i++) {
//		timestring[i] = m_timestr[i];
//	}
//}
//
//void Clock::Tick() {
//	if(m_seconds < 59) {
//		m_seconds++;
//		int temp = m_seconds;
//		string tempstr = to_string(temp);
//		if (temp < 10) {
//			tempstr = "0" + tempstr;
//		}
//		m_timestr[6] = tempstr[0];
//		m_timestr[7] = tempstr[1];
//		return;
//	}
//
//	if (m_minute < 59) {
//		m_minute++;
//		int temp = m_minute;
//		string tempstr = to_string(temp);
//		if (temp < 10) {
//			tempstr = "0" + tempstr;
//		}
//		m_seconds = 0;
//		m_timestr[6] = '0';
//		m_timestr[7] = '0';
//		m_timestr[3] = tempstr[0];
//		m_timestr[4] = tempstr[1];
//		return;
//	}
//
//	m_hour++;
//	int temp = m_hour;
//	string tempstr = to_string(temp);
//	if (temp < 10) {
//		tempstr = "0" + tempstr;
//	}
//	m_seconds = 0;
//	m_minute = 0;
//	m_timestr[6] = '0';
//	m_timestr[7] = '0';
//	m_timestr[3] = '0';
//	m_timestr[4] = '0';
//	m_timestr[0] = tempstr[0];
//	m_timestr[1] = tempstr[1];
//}


Clock::Clock(int h, int m, int s) {
	if (h > 23 || h < 0 || m < 0 || m > 59 || s > 59 || m < 0) {
		throw invalid_argument("Invalid input...");
	}
	m_seconds = 3600 * h + 60 * m + s;
}

void Clock::Tick() {
	if (m_seconds == 86400) {
		m_seconds = 0;
	}
	m_seconds++;
}

void Clock::Time(char buffer[], int n) {
	int hr = m_seconds / 3600;
	int temp = m_seconds;
	temp = temp % 3600;
	int sec = temp % 60;
	int min = temp / 60;
	snprintf(buffer, n, "%02d:%02d:%02d", hr, min, sec);
}