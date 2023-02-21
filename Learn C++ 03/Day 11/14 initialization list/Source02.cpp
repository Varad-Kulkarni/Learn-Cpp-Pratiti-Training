class Integer {
public:
	Integer(int i);
private:
	int m_i;
};

Integer::Integer(int i) : m_i(i) {}

int main() {
	Integer u(5);
}


/*
- Initialization list can be used to initialize data members only.
- It cannot be used to initialize or assign values to local or global variables.
- Attempting to initialize static data member in initialization results in compilation error.
- To initialize data member between initialization list ans the body of constructor always prefer initialization list.
*/