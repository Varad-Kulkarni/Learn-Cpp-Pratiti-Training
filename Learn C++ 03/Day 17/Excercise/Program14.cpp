#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
	int n;
	cout << "Enter the number of elements in the stack: ";
	cin >> n;
	vector<int> v(n);
	stack<int> s;
	cout << "Enter elements in the stack " << endl;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		s.push(v[i]);
	}
	cout << "Printing stack in reverse oder..." << endl;
	while (!s.empty()) {
		cout << s.top() << " ";
		s.pop();
	}
	cout << endl;
}