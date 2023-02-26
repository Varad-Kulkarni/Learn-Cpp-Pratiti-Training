template<class U, class T, class V>
class A {
public:
	void f() {

	}
};

template<class U, class V>
class A<U, int, V> {
public:
	void f() {

	}
};

template<class U>
class A<U, int, double> {
public:
	void f() {

	}
};

template<>
class A<char, int, double> {
public:
	void f() {

	}
};

int main() {
	A<float, float, char> a;
	a.f();

	A<float, int, char> b;
	b.f();

	A<float, int, double> c;
	c.f();

	A<char, int, double> d;
	d.f();

	return 0;
}