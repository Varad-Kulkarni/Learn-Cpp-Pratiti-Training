#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "Enter decimal number: " << endl;
	double input = 0.0;
	cin >> input;

	int first = static_cast<int>(input);
	double second = input - static_cast<double>(first);
	string str = to_string(second);
	int n = str.length();

	n -= 2;
	second = pow(10, n) * second;

	while (n-- > 0 && static_cast<int>(second) % 10 == 0) {
		second = second / 10;
	}
	
	cout << "The integral portion is " << first << endl;
	cout << "The fraction portion is " << second << endl;
}