#include <iostream>
#include <map>
using namespace std;

int main() {
	int n = 0;
	cout << "Enter the size for map: ";
	cin >> n;
	map<string, int> m;
	string key;
	int val;

	cout << "Enter key-value (string-int) pair for the map: " << endl;
	for (int i = 0; i < n; i++) {
		cin >> key >> val;
		m.insert({ key, val });
	}

	for (auto itr = m.begin(); itr != m.end(); itr++) {
		cout << itr->first << " -> " << itr->second << endl;
	}
}