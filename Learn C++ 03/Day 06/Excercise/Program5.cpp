#include <iostream>
using namespace std;

int main() {
	int a = 0, b = 0, res = 0;
	cout << "Enter first number: " << endl;
	cin >> a;
	cout << "Enter second number: " << endl;
	cin >> b;

	int* pa = &a, * pb = &b, * pres = &res;
	*pres = *pa > *pb ? *pa : *pb;
	cout << "Largest number is " << res << endl;
}