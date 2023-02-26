#include <iostream>
#include "Exception.h";
using namespace std;

int factorial(int n) {
	if (n == 0 || n == 1) {
		return 1;
	}
	if (n < 0) {
		throw Exception(-1);
	}
	return n * factorial(n - 1);
}

int main() {
	int num = 0;
	cout << "Enter the number: " << endl;
	cin >> num;

	try {
		int ans = factorial(num);
		cout << "Factorial is " << ans << endl;
	}
	catch (Exception err) {
		cout << err.getDescription(err.getErrorcode());
	}
}