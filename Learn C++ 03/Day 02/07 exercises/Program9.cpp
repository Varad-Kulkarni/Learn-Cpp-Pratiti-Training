#include<iostream>
using namespace std;

int main() {
	int num = 0;
	cout << "Enter the number: ";
	cin >> num;

	int first = num % 10;
	if (num / 10 == 0) {
		cout << "Addition is " << first;
	}
	else {
		int r = 0;
		while (num > 0) {
			r = num % 10;
			num = num / 10;
		}
		cout << "Addition is: " + first + r;
	}
}