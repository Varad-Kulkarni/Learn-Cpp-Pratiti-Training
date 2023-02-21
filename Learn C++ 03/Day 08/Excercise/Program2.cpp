#include <iostream>
using namespace std;

int main() {
	int n = 0;
	cout << "Enter the size of array: " << endl;
	cin >> n;
	int* pa = new int[n];
	cout << "Enter elements in array: " << endl;
	for (int i = 0; i < n; i++) {
		cin >> pa[i];
	}

	for (int i = 0; i < n; i++) {
		cout << "element-" << i << " is " << pa[i] << endl;
	}
	delete[] pa;
	pa = nullptr;
}