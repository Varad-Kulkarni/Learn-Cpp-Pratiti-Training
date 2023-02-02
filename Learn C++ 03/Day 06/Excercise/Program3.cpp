#include <iostream>
using namespace std;

int main() {
	int a = 10;
	
	cout << "Address of a: " << &a << endl;
	cout << "Value of a: " << a << endl;

	int* pa = &a;
	cout << "Value of pa: " << pa << endl;
	cout << "Value of *pa: " << *pa << endl;

	a = 34;
	cout << "Value of pa: " << pa << endl;
	cout << "Value of *pa: " << *pa << endl;

	*pa = 7;
	cout << "Address of a: " << &a << endl;
	cout << "Value of a: " << a << endl;
}