#include<iostream>
using namespace std;

int main() {
	cout << "Enter number to get factors: " << endl;
	int num = 0;
	cin >> num;

	cout << 1 << " ";
	for (int i = 2; i < num/2; i++) {
		if (num % i == 0) {
			cout << i << " ";
		}
	}
	cout << num << endl;
}