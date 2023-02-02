#include "add.h"

int main() {
	int result = 0;
	result = 3 + 5; // inline
	result = add(1, 2); // not inline
}

/*
* Both declaration and definition of inline function is stored in header file.
* Non-inline function definition is stored in separate implementation file. Header contains only declaration.
*/