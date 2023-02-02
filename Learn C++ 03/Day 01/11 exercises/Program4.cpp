#include<iostream>
using namespace std;

int main() {
	cout << "Input speed in Km/hr: ";
	int input = 0;
	cin >> input;
	double result = 0.6213 * input;
	cout << "Speed in miles per hour is: " << result;
	return 0;
}