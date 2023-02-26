#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main() {
	int n;
	list<int> ls;
	cout << "Enter the size of element ";
	cin >> n;
	vector<int> v(n);
	cout << "Enter the elements: " << endl;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		ls.push_back(v[i]);
	}

	int r = 0;
	cout << "Enter element which you want to remove: ";
	cin >> r;
	ls.remove(r);
	for (auto itr = ls.begin(); itr != ls.end(); itr++) {
		cout << *itr << " ";
	}
	cout << endl;
}