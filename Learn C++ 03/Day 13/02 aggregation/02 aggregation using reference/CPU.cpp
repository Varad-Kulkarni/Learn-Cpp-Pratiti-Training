#include <stdexcept>
#include <iostream>
using namespace std;

#include "CPU.h"

CPU::CPU(Keyboard &obj) : m_keyboard(obj) {
	cout << "from CPU constructor" << endl;
}

CPU::~CPU() {
	cout << "from CPU destructor" << endl;
}