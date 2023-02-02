#include<iostream>
using namespace std;

int main() {
	int height = 4, base = 3;
	cout << "Input height of the triangle: ";
	cin >> height;
	cout << "Input base of the triangle: ";
	cin >> base;
	int result = static_cast<int>(0.5 * height * base);
	cout << "Area of a triangle is: " << result;
	return 0;
}