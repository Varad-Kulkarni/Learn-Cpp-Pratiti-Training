#pragma once
#include <iostream>

class Exception {
public:
	Exception(int errcode);
public:
	std::string getDescription(int errcode);
	int getErrorcode();
private:
	int m_errcode;
};