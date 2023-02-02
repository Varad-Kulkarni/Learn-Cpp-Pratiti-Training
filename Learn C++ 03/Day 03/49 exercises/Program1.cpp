#include<iostream>
#include"exe3.h"
using namespace std;

int main() {
	int a[500];
	cout << "Enter the size of array (Note: size of array should be greater than 1 and less than 501): ";
	int n = 0;
	cin >> n;
	cout << "Enter the numbers: " << endl;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int max = INT_MIN;
	for (int i = 0; i < n; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}

	int ans = getSecondHighest(a, max, n);
	cout << "Second highest element in array is " << ans;
}