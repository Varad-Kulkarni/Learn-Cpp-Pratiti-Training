#include <iostream>
#include <string>
using namespace std;

int min(int a[], int n) {
	int mn = INT_MAX;
	for (int i = 0; i < n; i++) {
		int temp = static_cast<int>(a[i]);
		//int temp = atoi(a[i]);
		if (temp < mn) {
			mn = temp;
		}
	}
	return mn;
}

int max(int a[], int n) {
	int mx = INT_MIN;
	for (int i = 0; i < n; i++) {
		int temp = static_cast<int>(a[i]);
		if (temp > mx) {
			mx = temp;
		}
	}
	return mx;
}

int sum(int a[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		int temp = static_cast<int>(a[i]);
		sum += temp;
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

int main(int argc, char* argv[]) {
	int a[] = { atoi(argv[1]), atoi(argv[2]), atoi(argv[3]), atoi(argv[4]), atoi(argv[5]) };
	cout << "Min: " << solve(a, 5, min) << endl;
	cout << "Max: " << solve(a, 5, max) << endl;
	cout << "Sum: " << solve(a, 5, sum) << endl;
	cout << "Avg: " << static_cast<double>(solve(a, 5, sum)) / static_cast<double>(solve(a, 5, count)) << endl;
	cout << "Count: " << solve(a, 5, count) << endl;
}