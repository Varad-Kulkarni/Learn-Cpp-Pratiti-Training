#include <iostream>
#include "Exception.h";

Exception::Exception(int n) : m_errcode(n) {}

std::string Exception::getDescription(int n) {
	if (n == -1) {
		return "Invalid input...";
	}
	if (n == -2) {
		return "Array size should not be negative...";
	}
	return "";
}

int Exception::getErrorcode() {
	return m_errcode;
}