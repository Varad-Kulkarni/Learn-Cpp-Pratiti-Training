#include<iostream>
using namespace std;

int main() {
	int x1 = 3, y1 = 2, x2 = 9, y2 = 7;
	cin >> x1 >> y1 >> x2 >> y2;
	int val1 = x2 - x1;
	val1 *= val1;
	int val2 = y2 - y1;
	val2 *= val2;
	double result = sqrt(val1 + val2);
	cout << "Distance between two points is: " << result;
	return 0;
}