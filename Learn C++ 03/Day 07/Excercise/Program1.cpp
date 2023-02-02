#include <iostream>
using namespace std;

void add(int* a, int* b, int* ans) {
	*ans = *a + *b;
}

int main() {
	cout << "Enter 1st number: " << endl;
	int a = 0, b = 0, ans = 0;
	cin >> a;
	cout << "Enter second number: " << endl;
	cin >> b;
	add(&a, &b, &ans);
	cout << "Addition is " << ans;
}