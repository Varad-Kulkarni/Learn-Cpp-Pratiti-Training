#include<iostream>
using namespace std;

int main() {
	cout << "Input temperature in Celsius: ";
	double input = 0;
	cin >> input;
	double result = 1.8 * input;
	result += 32;
	cout << "Temperature in Fahrenheit is: " << result;
	return 0;
}