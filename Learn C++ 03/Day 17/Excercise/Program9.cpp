#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n = 0;
	cout << "Enter the number of words: ";
	cin >> n;
	vector<string> v(n);
	cout << "Enter the words: " << endl;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}