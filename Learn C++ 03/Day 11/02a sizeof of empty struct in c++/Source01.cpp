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
	cout << "Size of a: " << sizeof(a) << endl;
	cout << "Size of Circle: " << sizeof(Circle) << endl;
}

/*
- Specification of 'this' pointer within member function is optional.
  Hence it is eliminated in above code.

- The 'this' is a keyword in c++ language.

- It exists in non-static member functions.

- It doesn't exist in global or static member functions.

- It is set automatically to the address of an object on which the member function is called.

- The usage of the 'this' pointer is optional, in order to access members of a structure.

- Logically we say, the 'this' pointer is first parameter of a non-static member function.

- It is also a constant pointer.

- Object space contains only data members not functions or its defination.

- Member functions are stored in code segment.
*/