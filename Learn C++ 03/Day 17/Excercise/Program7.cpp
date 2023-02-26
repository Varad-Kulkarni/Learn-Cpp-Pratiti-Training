#include <iostream>
using namespace std;

template <class T>
double Avarage(T a[], int n) {
	T sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}
	return static_cast<double>(sum) / static_cast<double>(n);
}

int main() {
	int a[] = { 1, 2, 3, 4, 5 };
	double d[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };

	double ans1 = Avarage(a, 5);
	double ans2 = Avarage(d, 5);
	cout << "Avarage of integer array is " << ans1 << endl;
	cout << "Avarage of double array is " << ans2 << endl;
}