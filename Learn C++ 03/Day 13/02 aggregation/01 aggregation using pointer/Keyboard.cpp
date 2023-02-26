#include <iostream>
using namespace std;

#include "Keyboard.h"

Keyboard::Keyboard() {
	cout << "from keyboard constructor" << endl;
}

Keyboard::~Keyboard() {
	cout << "from keyboard destructor" << endl;
}
