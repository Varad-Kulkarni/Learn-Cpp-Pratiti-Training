#include <iostream>
using namespace std;

int factorial(int n, int* p) {
	if (n <= 1) {
		return 1;
	}
	*p = n * factorial(n - 1, p);
	return *p;
}

int main() {
	cout << "Enter number: " << endl;
	int num = 0;
	cin >> num;
	int ans = 0;
	int* pa = &ans;
	factorial(num, pa);

	cout << "Factorial of " << num << " is " << ans;
}