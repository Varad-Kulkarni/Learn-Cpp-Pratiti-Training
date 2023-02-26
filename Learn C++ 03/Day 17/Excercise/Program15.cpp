#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
	int n = 0;
	cout << "Enter number of elements: ";
	cin >> n;
	vector<int> v(n);
	multiset<int> ms;
	cout << "Enter elements: " << endl;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		ms.insert(v[i]);
	}
	for (int i = 0; i < n; i++) {
		cout << v[i] << " has a count " << ms.count(v[i]) << endl;
	}
}