#include <iostream>
using namespace std;

void getSum(int n, int& ans) {
	if (n <= 0) {
		return;
	}
	
	ans += n % 10;
	getSum(n / 10, ans);
}

int main() {
	cout << "Enter the number: ";
	int num = 0;
	cin >> num;
	int ans = 0;

	getSum(num, ans);
	cout << "sum is " << ans;
}