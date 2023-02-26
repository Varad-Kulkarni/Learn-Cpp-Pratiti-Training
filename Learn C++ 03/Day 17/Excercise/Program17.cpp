#include <iostream>
#include <vector>
#include <forward_list>
using namespace std;

int main() {
	int n = 0;
	forward_list<int> fls;
	cout << "Enter size of list: ";
	cin >> n;
	vector<int> v(n);
	cout << "Enter elements in the list: " << endl;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		fls.push_front(v[i]);
	}
	cout << "Reversed list is " << endl;
	for (auto itr = fls.begin(); itr != fls.end(); itr++) {
		cout << *itr << " ";
	}
	cout << endl;
}