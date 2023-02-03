#include <iostream>
using namespace std;

void roots(int& a, int& b, int& c, double& r1, double& r2) {
	double delta = static_cast<double>((b * b) - (4 * a * c));
	if (delta < 0) {
		cout << "Error... (Roots are imaginary)" << endl;
		return;
	}
	delta = sqrt(delta);
	r1 = (-b + delta) / (2.0 * a);
	r2 = (-b - delta) / (2.0 * a);
}

int main() {
	cout << "Enter coefficient of 'a': " << endl;
	int a, b, c;
	a = b = c = 0;
	cin >> a;
	cout << "Enter coefficient of 'b': " << endl;
	cin >> b;
	cout << "Enter coefficient of 'c': " << endl;
	cin >> c;
	double root1, root2;
	root1 = root2 = 0.0;

	roots(a, b, c, root1, root2);
	cout << "Roots of equation are " << root1 << " and " << root2 << endl;
}