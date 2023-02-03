#include <iostream>
using namespace std;

int min(char a[], int n) {
	int mn = INT_MAX;
	for (int i = 1; i <= n; i++) {
		int temp = static_cast<int>(a[i]);
		if (temp < mn) {
			mn = temp;
		}
	}
	return mn;
}

int max(char a[], int n) {
	int mx = INT_MIN;
	for (int i = 1; i <= n; i++) {
		int temp = static_cast<int>(a[i]);
		if (temp > mx) {
			mx = temp;
		}
	}
	return mx;
}

int sum(char a[], int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		int temp = static_cast<int>(a[i]);
		sum += temp;
	}
	return sum;
}

int count(char a[], int n) {
	return n-1;
}

int solve(char a[], int n, int (*func)(char a[], int n)) {
	int ans = func(a, n);
	return ans;
}

int main(int argc, char* argv[]) {
	cout << "Min: " << solve(*argv, 6, min) << endl;
	cout << "Max: " << solve(*argv, 6, max) << endl;
	cout << "Sum: " << solve(*argv, 6, sum) << endl;
	cout << "Avg: " << static_cast<double>(solve(*argv, 6, sum)) / static_cast<double>(solve(*argv, 6, count)) << endl;
	cout << "Count: " << solve(*argv, 6, count) << endl;
}