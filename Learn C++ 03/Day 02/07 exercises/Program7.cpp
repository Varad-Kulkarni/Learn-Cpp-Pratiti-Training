#include<iostream>
using namespace std;

bool isPrime(int n) {
	if (n <= 1) {
		return false;
	}
	if (n == 2) {
		return true;
	}
	if (n % 2 == 0) {
		return false;
	}
	for (int i = 3; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

bool Solve(int n) {
	if (n <= 1) {
		return false;
	}
	for (int i = 2; i <= n / 2; i++) {
		if (isPrime(i) && isPrime(n - i)) {
			cout << i << " " << n - i << endl;
			//return true;
		}
	}
	return false;
}

int main() {
	cout << "Enter the number: ";
	int num = 0;
	cin >> num;

	bool flag = Solve(num);
	if (flag) {
		cout << "Number can be displayed as sum of two prime numbers";
	}
	else {
		cout << "Number cannot be displayed as sum of two prime numbers";
	}
}