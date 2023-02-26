#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
	int n = 0;
	cout << "Enter the number of elements: ";
	cin >> n;
	vector<int> v(n);
	priority_queue<int> pq;

	for (int i = 0; i < n; i++) {
		cin >> v[i];
		pq.push(v[i]);
	}
	cout << "Elements is descending order are..." << endl;
	while (!pq.empty()) {
		cout << pq.top() << " ";
		pq.pop();
	}
	cout << endl;
}