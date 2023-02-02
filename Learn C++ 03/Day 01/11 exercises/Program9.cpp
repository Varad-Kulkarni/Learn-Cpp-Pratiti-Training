#include<iostream>
using namespace std;

int main() {
	int r1 = 0, r2 = 0, r3 = 0;
	cout << "Input Resistance 1: ";
	cin >> r1;
	cout << "Input Resistance 2: ";
	cin >> r2;
	cout << "Input Resistance 3: ";
	cin >> r3;
	double result = 1.0 / r1 + 1.0 / r2 + 1.0 / r3;
	result = 1.0 / result;
	cout << "Total Effective Resistance is " << result << " ohms";
	return 0;
}