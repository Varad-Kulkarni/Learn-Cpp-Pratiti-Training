#include<iostream>
using namespace std;

int Solve(int n) {
	if (n == 0 || n == 1) {
		return 1;
	}
	return Solve(n - 1) + Solve(n - 2);
}

int main() {
	int num = 0;
	cout << "Enter number for series: ";
	cin >> num;

	for (int i = 0; i <= num; i++) {
		int temp = Solve(i);
		cout << temp << " ";
	}
}