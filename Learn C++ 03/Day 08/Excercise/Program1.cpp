#include <iostream>
using namespace std;

int main() {
	int* pa = new int[2];
	cout << "Enter first number: " << endl;
	cin >> pa[0];
	cout << "Enter second number: " << endl;
	cin >> pa[1];

	/*int* pa = new int;
	*pa = a;
	int* pb = new int(b);*/
	int max = pa[0] > pa[1] ? pa[0] : pa[1];
	cout << "Max of two numbers is " << max;
	/*delete pa;
	delete pb;*/
	delete[] pa;
	pa = nullptr;
}