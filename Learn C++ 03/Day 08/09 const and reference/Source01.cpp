int main() {
	int a = 1;
	const int b = 1;

	int& ra = a; // a non-const reference can refer to non-const referent
	int& rb = b; // a non-const reference cannot refer to const referent

	const int& cra = a; // a const reference can refer to non-const referent
	const int& crb = b; // a const reference can refer to const referent
}


/*
- non-const reference can refer to non-const referent only.
- const reference can refer to const as well as non-const referent.
*/