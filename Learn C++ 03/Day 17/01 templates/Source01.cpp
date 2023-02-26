#include <iostream>
using namespace std;

int IntCompare(int u, int v) { return (u < v ? -1 : (u > v ? 1 : 0)); }

class IntComparer {
public:
	int operator()(int u, int v) { return (u < v ? -1 : (u > v ? 1 : 0)); }
};

int DblCompare(double u, double v) { return (u < v ? -1 : (u > v ? 1 : 0)); }

class DblComparer {
public:
	int operator()(double u, double v) { return (u < v ? -1 : (u > v ? 1 : 0)); }
};

int main() {
	int a = 5, b = 2, result = 0;
	result = IntCompare(a, b);

	IntComparer intComparer;
	a = 6, b = 8;
	result = intComparer(a, b);

	double c = 5.0, d = 2.0;
	result = DblCompare(c, d);

	DblComparer dblComparer;
	c = 9.0, b = 8.0;
	result = dblComparer(c, d);

	return 0;
}