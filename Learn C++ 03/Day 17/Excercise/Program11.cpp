#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n = 0;
	cout << "Enter number of integers: ";
	cin >> n;
	deque<int> d;
	vector<int> v(n);

	cout << "Enter deque elements: " << endl;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		d.push_back(v[i]);
	}
	int s = 3;
	rotate(d.begin(), d.begin() + 2, d.end());
	
	cout << "List is rotated by 2 units..." << endl;
	for (int i = 0; i < n; i++) {
		cout << d[i] << " ";
	}
	cout << endl;
}