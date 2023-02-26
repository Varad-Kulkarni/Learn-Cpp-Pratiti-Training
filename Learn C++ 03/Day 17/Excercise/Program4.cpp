#include <iostream>
using namespace std;

template <class T>
T DotProduct(T* a1, T* a2) {
	T ans = 0;
	for (int i = 0; i < 3; i++) {
		ans += a1[i] * a2[i];
	}
	return ans;
}

int main() {
	int a1[] = { 1, 2, 3 };
	int a2[] = { 1, 2, 3 };
	double d1[] = { 1.1, 2.2, 3.3 };
	double d2[] = { 1.1, 2.2, 3.3 };
	cout << DotProduct(a1, a2) << endl;
	cout << DotProduct(d1, d2) << endl;
}