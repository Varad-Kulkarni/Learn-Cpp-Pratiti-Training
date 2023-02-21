#include <iostream>
using namespace std;

void multiply(int** a1, int r1, int c1, int** a2, int r2, int c2) {
	if (c1 != r2) {
		cout << "Invalid matrix multiplication...";
		return;
	}

	for (int i = 0; i < r1; i++) {
		for (int j = 0; j < c2; j++) {
			int ans = 0;
			for (int k = 0; k < c1; k++) {
				ans += a1[i][k] * a2[k][j];
			}
			cout << ans << " ";
		}
		cout << endl;
	}
}

int main() {
	int r1, c1, r2, c2;
	r1 = r2 = c1 = c2 = 0;
	cout << "Enter rows and column numbers for matrix 1: " << endl;
	cin >> r1 >> c1;
	cout << "Enter rows and column numbers for matrix 2: " << endl;
	cin >> r2 >> c2;
	int** mat1 = new int*[r1];
	int** mat2 = new int*[r2];
	for (int i = 0; i < r1; i++) {
		mat1[i] = new int[c1];
	}
	for (int i = 0; i < r2; i++) {
		mat2[i] = new int[c2];
	}

	cout << "Enter values as indicated for matrix 1 below..." << endl;
	for (int i = 0; i < r1; i++) {
		for (int j = 0; j < c1; j++) {
			cout << "Enter (" << i + 1 << ", " << j + 1 << " ) value: ";
			cin >> mat1[i][j];
			cout << endl;
		}
	}
	cout << "Enter values as indicated for matrix 2 below..." << endl;
	for (int i = 0; i < r2; i++) {
		for (int j = 0; j < c2; j++) {
			cout << "Enter (" << i + 1 << ", " << j + 1 << " ) value: ";
			cin >> mat2[i][j];
			cout << endl;
		}
	}

	multiply(mat1, r1, c1, mat2, r2, c2);
	delete[] mat1;
	delete[] mat2;
	mat1 = nullptr;
	mat2 = nullptr;
}