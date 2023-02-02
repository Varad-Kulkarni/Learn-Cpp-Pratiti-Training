#include<iostream>
using namespace std;

int Solve(int n) {
	if (n <= 0) {
		return 1;
	}
	return n * Solve(n - 1);
}

int main() {
	int num = 0;
	cout << "Enter the number: ";
	cin >> num;

	int ans = Solve(num);
	cout << "Factorial: " << ans;
}