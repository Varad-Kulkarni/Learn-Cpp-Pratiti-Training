#include <iostream>
using namespace std;

template <class T>
void myswap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

int main() {
	int a1 = 0, b1 = 1;
	char a2 = '0', b2 = '1';
	string a3 = "0", b3 = "1";
	double a4 = 0.0, b4 = 1.0;

	myswap(a1, b1);
	myswap(a2, b2);
	myswap(a3, b3);
	myswap(a4, b4);

	cout << a1 << " " << b1 << endl;
	cout << a2 << " " << b2 << endl;
	cout << a3 << " " << b3 << endl;
	cout << a4 << " " << b4 << endl;
}