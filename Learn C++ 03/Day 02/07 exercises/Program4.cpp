#include<iostream>
using namespace std;

int main() {
	int num = 0;
	cout << "Enter number: ";
	cin >> num;
	int result = 0;

	while (num > 0) {
		result += num % 10;
		num = num / 10;
	}
	cout << "Sum is " << result;
}