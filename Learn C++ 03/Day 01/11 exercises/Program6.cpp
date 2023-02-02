#include<iostream>
using namespace std;

int main() {
	int angle1 = 0, angle2 = 0;
	cout << "Enter 2 angles of triangle: " << endl;
	cin >> angle1 >> angle2;

	if (angle1 + angle2 >= 180 || angle1 <= 0 || angle2 <= 0) {
		cout << "Enter correct angles";
	}
	else {
		int result = 180 - angle1 - angle2;
		cout << "Third angle is: " << result;
	}
}