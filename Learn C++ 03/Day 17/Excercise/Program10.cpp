#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
	int n = 0;
	cout << "Enter the number of words: ";
	cin >> n;
	vector<string> v(n);
	set<string> s;

	for (int i = 0; i < n; i++) {
		cin >> v[i];
		s.insert(v[i]);
	}

	cout << "number of unique elements in the set is " << s.size() << endl;
}