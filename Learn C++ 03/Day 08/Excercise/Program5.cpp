#include <iostream>
using namespace std;

int main() {
	cout << "Enter a1, b1, c1 for equation a1x + b1y + c1 = 0: " << endl;
	int a1, b1, c1, a2, b2, c2;
 	a1 = a2 = b1 = b2 = c1 = c2 = 0;
	cin >> a1 >> b1 >> c1;
	cout << "Enter a2, b2, c2 for equation a2x + b2y + c2 = 0: " << endl;
	cin >> a2 >> b2 >> c2;

	int D = a1 * b2 - a2 * b1;
	int Dx = c1 * b2 - c2 * b1;
	int Dy = a1 * c2 - a2 * c1;
	//cout << Dx / D << " " << Dy / D << endl;

	cout << "x = " << static_cast<double>(Dx) / static_cast<double>(D) << endl;
	cout << "y = " << static_cast<double>(Dy) / static_cast<double>(D) << endl;
}