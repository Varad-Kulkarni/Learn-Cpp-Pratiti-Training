#include<iostream>
using namespace std;

int GCD(int a, int b) {
	if (a == 0) {
		return b;
	}
	return (b % a, b);
}

int main() {
	int a = 0, b = 0;
	cout << "Enter 2 numbers: ";
	cin >> a >> b;
	int gcd = GCD(a, b);
	cout << "GCD of given numbers is: " << gcd;
}