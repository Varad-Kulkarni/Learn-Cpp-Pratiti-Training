class A {
public:
	void f() const {}
	static void g() const {}
};

/*
static member functions cannot be const functions.
Non-static member functions however can be.
*/
/*
- Static member function can be called using class name.
  It can also be called using object.
- 'this' pointer is absent in static member function.
- Static member function cannot be a constant member function.
*/