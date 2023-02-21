#include <iostream>

struct Dummy {};

int main() {
	Dummy dummy;
	std::cout << sizeof(dummy) << std::endl;
	std::cout << sizeof(Dummy) << std::endl;
}

/*
- The size of empty struct is 1 byte.
- Note this byte cannot be accessed.
- It is there to indicate presense of an object.
- Can C program have empty structure? -> No, at least one member must be present int structure.
- Can C++ program have empty structure> -> Yes.
*/
