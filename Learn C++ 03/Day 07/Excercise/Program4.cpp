#include <iostream>
using namespace std;

int min(int a[], int n) {
	int mn = INT_MAX;
	for (int i = 0; i < n; i++) {
		if (a[i] < mn) {
			mn = a[i];
		}
	}
	return mn;
}

int max(int a[], int n) {
	int mx = INT_MIN;
	for (int i = 0; i < n; i++) {
		if (a[i] > mx) {
			mx = a[i];
		}
	}
	return mx;
}

int sum(int a[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}
	return sum;
}

int count(int a[], int n) {
	return n;
}

int solve(int a[], int n, int (*func)(int a[], int n)) {
	int ans = func(a, n);
	return ans;
}

int main() {
	int a[] = {5, 7, 2, 9, 8};

	cout << "Min: " << solve(a, 5, min) << endl;
	cout << "Max: " << solve(a, 5, max) << endl;
	cout << "Sum: " << solve(a, 5, sum) << endl;
	cout << "Avg: " << static_cast<double>(solve(a, 5, sum)) / static_cast<double>(solve(a, 5, count)) << endl;
	cout << "Count: " << solve(a, 5, count) << endl;
}