int g_data;

class Dummy {
public:
	Dummy();
public:
	void F() const;
private:
	int m_data;
};

Dummy::Dummy() {
	m_data = 1;
}

void Dummy::F() const {
	int data = 0;
	data = 1;
	g_data = 1;
	//m_data = 1;
}

int main() {
	const Dummy dummy;
	dummy.F();
}

/*
- local variables can be modified within const function.
- global variables can be modified within const function.
- data members cannot be modified within const function.
*/
