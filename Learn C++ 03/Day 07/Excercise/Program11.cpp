#include <iostream>
using namespace std;

void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void solve(int* arr, int n) {
	int a[50];
	for (int i = 0; i < n; i++) {
		a[i] = arr[i];
	}
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				swap(a[i], a[j]);
			}
		}
	}

	cout << "Sorted array is ";
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

int main() {
	int n = 0, a[50] = { 0 };
	cout << "Enter the size of array: " << endl;
	cin >> n;
	cout << "Enter elements in array: " << endl;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	solve(a, n);
	cout << "Input array is ";
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}