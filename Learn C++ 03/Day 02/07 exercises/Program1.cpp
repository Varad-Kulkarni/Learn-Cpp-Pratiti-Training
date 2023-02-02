#include<iostream>
using namespace std;

int main() {
	int num = 0;
	cout << "Enter the number: ";
	cin >> num;

	if (num <= 1) {
		cout << "The entered number is not a prime number nor composite";
	}
	else if (num == 2 || num == 3) {
		cout << "The entered number is a prime number";
	}
	else if (num % 2 == 0) {
		cout << "The entered number is not a prime number";
	}
	else {
		bool flag = true;
		for (int i = 3; i <= num / 2; i++) {
			if (num % i == 0) {
				flag = false;
				break;
			}
		}

		if (flag) {
			cout << "The entered number is a prime number";
		}
		else {
			cout << "The entered number is not a prime number";
		}
	}

	return 0;
}