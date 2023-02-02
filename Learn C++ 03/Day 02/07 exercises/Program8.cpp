#include<iostream>
using namespace std;

int factorial(int n) {
	if (n == 0 || n == 1) {
		return 1;
	}
	return n * factorial(n - 1);
}

int getCombination(int n, int r) {
	return factorial(n) / (factorial(n - r) * factorial(r));
}

int main() {
	cout << "Enter the number: ";
	int num = 0;
	cin >> num;

	for (int i = 0; i < num; i++) {
		for (int j = 0; j <= i; j++) {
			cout << getCombination(i, j) << " ";
		}
		cout << "\n";
	}
}