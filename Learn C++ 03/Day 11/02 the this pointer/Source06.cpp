#include <iostream>
using namespace std;

struct Circle {
	int m_radius;

	void Print() {
		cout << m_radius << endl;
	}
};

int main() {
	Circle a = { 5 };
	a.Print();

	Circle b = { 10 };
	b.Print();
}

/*
- cpp compiler implicitely adds 'this' pointer thus we don't need to declare 'this' pointer explicitely.
- From cpp compiler point of view 'cout << m_radius;' == 'cout << this->m_radius;' inside member function.
-'this' pointer dose not present in global pointer.
*/