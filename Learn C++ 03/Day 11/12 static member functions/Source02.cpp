class Calc {
public:
	static int Add(int u, int v);
};

int Calc::Add(int u, int v) {
	return u + v;
}

int main() {
	Calc calc;
	int res = calc.Add(1, 2);
	res = Calc::Add(3, 4);
}

/*
A non-static member function can only be called using
an object of the class.
*/