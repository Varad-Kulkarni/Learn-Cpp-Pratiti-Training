#include <iostream>
using namespace std;

int getLargest(int a[], int n) {
	if (n == 1) {
		return a[0];
	} 
	return max(getLargest(a, n-1), a[n]);
}

int main() {
	cout << "Enter size of array: ";
	int n = 0, a[500];
	cin >> n;
	cout << "Enter array elements: ";

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int result = getLargest(a, --n);
	cout << "Largest element in array is " << result;
}