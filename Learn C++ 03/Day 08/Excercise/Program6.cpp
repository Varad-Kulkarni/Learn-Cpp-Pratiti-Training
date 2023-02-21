#include <iostream>
using namespace std;

void dealloc(char*& pc) {
	delete[] pc;
	pc = nullptr;
}

void alloc(char*& pc, int n) {
	pc = new char[n];
	for (int i = 0; i < n; i++) {
		cin >> pc[i];
	}
}

int main() {
	cout << "Enter size for string: " << endl;
	int n = 0;
	cin >> n;
	char* pc = nullptr;
	alloc(pc, n);
	cout << "Your entered string is: " << pc << endl;
	dealloc(pc);
}