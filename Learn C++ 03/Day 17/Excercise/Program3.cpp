#include <iostream>
#include <vector>
using namespace std;

template <class T>
int Length(vector<T> v) {
	return v.size();
}

int main() {
	vector<int> v1;
	for (int i = 0; i < 3; i++) {
		v1.push_back(i);
	}
	cout << Length(v1) << endl;
	v1.pop_back();
	cout << Length(v1) << endl;

	vector<double> v2;
	for (double i = 0.0; i < 3.0; i+=1.0) {
		v2.push_back(i);
	}
	cout << Length(v2) << endl;
	v2.pop_back();
	cout << Length(v2) << endl;
}