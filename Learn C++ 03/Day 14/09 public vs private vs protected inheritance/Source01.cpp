class A {
public:
	int m_i;
protected:
	int m_j;
private:
	int m_k;
public:
	void f() {
		m_i = 1;
		m_j = 2;
		m_k = 3;
	}
};

class B : public A {
public:
	void g() {
		m_i = 1;
		m_j = 2;
		m_k = 3; // E
	}
};

class C : public B {
public:
	void h() {
		m_i = 1; 
		m_j = 2; 
		m_k = 3; // E
	}
};

int main() {
	A u;
	u.m_i = 1;
	u.m_j = 2; // E
	u.m_k = 3; // E

	B v;
	v.m_i = 1; // E
	v.m_j = 2; // E
	v.m_k = 3; // E

	C w;
	w.m_i = 1; // E
	w.m_j = 2; // E
	w.m_k = 3; // E
}

// private and protected inheritance are not true inheritance.

//Difference between structand class
//1. By default everything is public in struct and private in class
//2. class A : B = > class A : private B(in class)
//struct A : B = > struct A : public B(in struct)
//
//	Everything is possible = >
//	1. class A : public B (B - struct)
//	2. struct A : public B (B - class)
//	3. class -> class and
//	4. struct -> struct.