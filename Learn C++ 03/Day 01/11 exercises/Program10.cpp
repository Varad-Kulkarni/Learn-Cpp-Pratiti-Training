#include<iostream>
using namespace std;

int main() {
	int u = 0, a = 0, t = 0;
	cout << "Enter initial velocity, acceleration and time: ";
	cin >> u >> a >> t;

	int v = u + a * t;
	cout << "Final velocity is " << v;
}