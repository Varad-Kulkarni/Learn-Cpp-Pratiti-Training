class Dummy {
public:
	void f() {}
	static void g() {}
public:
	void h() {
		f();
		g();
	}
	static void k() {
		//f();
		g();
	}
};

int main() {
	Dummy dummy;
	dummy.h();
	Dummy::k();
}

/*
A non-static member can access both static and non-static member.
A static member can access only static member.
*/