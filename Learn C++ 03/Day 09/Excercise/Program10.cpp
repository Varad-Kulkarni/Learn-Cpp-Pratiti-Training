#include <iostream>
#include <stdexcept>
using namespace std;

struct S1 {
	double CalculateArea(int top, int left, int bottom, int right) {
		if (top != bottom || left != right || top < 1 || bottom < 1 || left < 1 || right < 1) {
			throw invalid_argument("Shape should be rectangle...");
		}
		return static_cast<double>(top * left);
	}
};

struct S2 {
	double CalculateArea(int top, int left, int height, int width) {
		if (top != height || left != width || top < 1 || left < 1 || height < 1 || width < 1) {
			throw invalid_argument("Shape should be rectangle...");
		}
		return static_cast<double>(top * left);
	}
};

int main() {
	S1 type1;
	S2 type2;

	cout << type1.CalculateArea(1, 2, 1, 2) << endl;
	cout << type2.CalculateArea(1, 2, 1, 2) << endl;
}