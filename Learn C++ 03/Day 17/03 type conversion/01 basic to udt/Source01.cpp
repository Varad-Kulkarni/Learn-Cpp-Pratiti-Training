class Integer {
public:
	Integer(int i) : m_i(i) {}
private:
	int m_i;
};

int main() {
	int n = 5;
	Integer u = n;

	n = 10;
	u = n;
}

// Primary <- User_Defined_Datatype (UDT)
// Single parametric constructor is known as type conversion constructor
