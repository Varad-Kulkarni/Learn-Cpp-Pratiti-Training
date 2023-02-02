#include <iostream>
using namespace std;

void print(int v[]);

int main() {
	int len = 0;

	int a[] = { 1, 2, 3, 999 };
	len = sizeof(a) / sizeof(int);
	print(a);

	int b[] = { 10, 20, 30, 40, 999 };
	len = sizeof(b) / sizeof(int);
	print(b);

	int c[] = { 100, 200, 999 };
	len = sizeof(c) / sizeof(int);
	print(c);
}

void print(int v[]) {
	for (size_t i = 0; v[i] != 999; i++) {
		cout << v[i] << endl;
	}
}

// In above program 999 i called as terminal valude or centinal value.
// function looks for such value. As soon as this value is found processing of array is stopped.