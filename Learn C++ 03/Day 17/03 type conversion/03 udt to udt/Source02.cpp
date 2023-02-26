class Double;

class Integer {
public:
	Integer(int i) : m_i(i) {}
	explicit Integer(const Double& d);
private:
	int m_i;
};

class Double {
public:
	Double(double d) : m_d(d) {}
public:
	double GetValue() const { return m_d; }
private:
	double m_d;
};

Integer::Integer(const Double& d) : m_i(static_cast<int>(d.GetValue())) {}

int main() {
	Integer u = 5;
	Double v = 3.14;
	u = Integer(v); // u = Integer(v) or u = (Integer)v -> u = v.operator Integer()
}

// If type conversion is returned without explixit return then conversion happens implicitely
// For explicite type conversion write 'explicit' keyword in conversion constructor