#include <iostream>
#include "Exception.h"
using namespace std;

int computeProduct(int*& a, int& n1, int*& b, int& n2, int*& c) {
	if (n1 != n2) {
		throw Exception(-1);
	}
	if (n1 < 0) {
		throw Exception(-2);
	}

	for (int i = 0; i < n1; i++) {
		c[i] = a[i] * b[i];
	}
}

int main() {
	int* a = nullptr;
	int* b = nullptr;
	int* c = nullptr;
	int n1 = 0, n2 = 0;
	cout << "Enter size of array1: " << endl;
	cin >> n1;
	cout << "Enter size of array2: " << endl;
	cin >> n2;
	a = new int[n1];
	b = new int[n2];
	c = new int[n1];
	cout << "Enter elements for array1: ";
	for (int i = 0; i < n1; i++) {
		cin >> a[i];
	}
	cout << endl;
	cout << "Enter elements for array2: ";
	for (int i = 0; i < n2; i++) {
		cin >> b[i];
	}
	cout << endl;

	try {
		computeProduct(a, n1, b, n2, c);
		for (int i = 0; i < n1; i++) {
			cout << c[i] << " ";
		}
	}
	catch (Exception err) {
		cout << err.getDescription(err.getErrorcode());
	}
	delete[] a;
	delete[] b;
	delete[] c;
	a = b = c = nullptr;
}