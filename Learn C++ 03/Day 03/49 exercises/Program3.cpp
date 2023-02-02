#include <iostream> 
#include <vector>
using namespace std;

int main() {
	cout << "Enter the size of array: ";
	int n = 0;
	cin >> n;
	cout << "Enter elements in array: ";
	int a[500];
	vector<int> v1, v2;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] < 0) {
			v1.push_back(a[i]);
		}
		else {
			v2.push_back(a[i]);
		}
	}

	for (int i = 0; i < v1.size(); i++) {
		cout << v1[i] << " ";
	}
	for (int i = 0; i < v2.size(); i++) {
		cout << v2[i] << " ";
	}
}