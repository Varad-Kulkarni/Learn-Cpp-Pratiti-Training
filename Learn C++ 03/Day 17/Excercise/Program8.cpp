#include <iostream>
#include <vector>
using namespace std;

template <class T>
void Multiply(T a1[][2], T a2[][1], T a3[][1]) {
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 1; j++) {
			T sum = 0;
			for (int k = 0; k < 2; k++) {
				sum += a1[i][k] * a2[k][j];
			}
			a3[i][j] = sum;
		}
	}
}

int main() {
	int a1[][2] = { {1, 2}, {2, 3} };
	int a2[][1] = { {1}, {1} };
	int a3[2][1];
	Multiply(a1, a2, a3);
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 1; j++) {
			cout << a3[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	double d1[][2] = { {1.1, 2.2}, {2.2, 3.3} };
	double d2[][1] = { {1.1}, {1.1} };
	double d3[2][1];
	Multiply(d1, d2, d3);
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 1; j++) {
			cout << d3[i][j] << " ";
		}
		cout << endl;
	}
}