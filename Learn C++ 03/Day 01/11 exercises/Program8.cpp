#include<iostream>
using namespace std;

int main() {
	int a = 0, d = 0, n = 0;
	cout << "Enter first number, common difference and number of items in series: ";
	cin >> a >> d >> n;

	double result = static_cast<double>(n * (2 * a + (n - 1) * d)) / 2;
	cout << "Sum of series is: " << result;
}