#include <iostream>
using namespace std;

#include "Drive.h"

Drive::Drive(char driveLetter) : m_driveLetter(driveLetter) {
	cout << "from Drive constructor" << endl;
}

Drive::~Drive() {
	cout << "from Drive destructor" << endl;
}