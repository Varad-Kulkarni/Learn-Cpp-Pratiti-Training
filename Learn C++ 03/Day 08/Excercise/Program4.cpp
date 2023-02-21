#include <iostream>
using namespace std;

void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void transpose(int** a, int r, int c) {
	if (r <= 1 || c <= 1) {
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
		return;
	}

	for (int i = 0; i < c; i++) {
		for (int j = 0; j < r; j++) {
			cout << a[j][i] << " ";
		}
		cout << endl;
	}
}

int main() {
	int r, c;
	r = c = 0;
	cout << "Enter rows and column numbers for matrix: " << endl;
	cin >> r >> c;
	int** mat = new int* [r];
	for (int i = 0; i < r; i++) {
		mat[i] = new int[c];
	}

	cout << "Enter values as indicated for matrix 1 below..." << endl;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cout << "Enter (" << i + 1 << ", " << j + 1 << " ) value: ";
			cin >> mat[i][j];
			cout << endl;
		}
	}

	transpose(mat, r, c);
	delete[] mat;
	mat = nullptr;
}