#include <iostream>
using namespace std;

template <class T>
void mysort(T a[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				T temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

int main() {
	int a1[] = { 1, 4, 2, 5, 2 };
	mysort(a1, 5);
	for (int i = 0; i < 5; i++) {
		cout << a1[i] << " ";
	}
	cout << endl;

	double a2[] = { 1.1, 4.2, 2.3, 5.5, 2.8 };
	mysort(a2, 5);
	for (int i = 0; i < 5; i++) {
		cout << a2[i] << " ";
	}
	cout << endl;
}