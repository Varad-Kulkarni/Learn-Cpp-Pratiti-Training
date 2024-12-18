#include <assert.h>
#include <iostream>
#include <stdexcept>
using namespace std;

class Circle {
private:
	int radius;
public:
	int GetRadius() {
		assert(radius > 0);
		return radius;
	}

	void SetRadius(int radius) {
		if (radius <= 0)
			throw invalid_argument("Radius must be positive number.");
		this->radius = radius;
	}
public:
	void Print() {
		cout << GetRadius() << endl;
	}
};

int main() {
	Circle a;
	a.SetRadius(5);
	int r = a.GetRadius();
	a.Print();
	a.SetRadius(10);
	a.Print();
}

// - if data member and parameters are of same name then 'this' pointer is used to distinguish the names.