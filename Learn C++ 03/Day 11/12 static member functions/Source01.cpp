class Calc {
public:
	int Add(int u, int v);
};

int Calc::Add(int u, int v) {
	return u + v;
}

int main() {
	Calc calc;
	int res = calc.Add(3, 2);
	//res = Calc::Add(1, 2); // Eror: A non-static member function cannot be called using class.
}

/*
When there are no data members in the class,
the size of an object is 1 byte.

A static member function can be called using both
an object and a class.
*/