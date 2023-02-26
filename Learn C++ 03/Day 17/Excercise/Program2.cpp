#include <iostream>
using namespace std;

template <class T>
T mymax(T a[], int n) {
	T ans = a[0];
	for (int i = 1; i < n; i++) {
		ans = std::max(ans, a[i]);
	}
	return ans;
}

int main() {
	int a1[] = { 1, 3, 2, 8, 3 };
	double a2[] = { 1.1, 3.2, 2.3, 8.4, 3.5 };
	char a3[] = { '1', '3', '2', '8', '3' };

	cout << mymax(a1, 5) << endl;
	cout << mymax(a2, 5) << endl;
	cout << mymax(a3, 5) << endl;
}