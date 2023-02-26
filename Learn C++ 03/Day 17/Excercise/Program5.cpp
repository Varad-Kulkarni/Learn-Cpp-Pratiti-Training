#include <iostream>
#include <vector>
using namespace std;

template <class T>
class Stack {
public: 
	Stack();
public:
	void push(T data);
	void pop();
	int length() const;
private:
	vector<T> m_stack;
};

template<class T>
Stack<T>::Stack() {}

template<class T>
void Stack<T>::push(T data) {
	m_stack.push_back(data);
}

template<class T>
void Stack<T>::pop() {
	m_stack.pop_back();
}

template<class T>
int Stack<T>::length() const {
	return m_stack.size();
}

int main() {
	Stack<int> s1;
	s1.push(1);
	s1.push(2);
	cout << s1.length() << endl;
	s1.pop();
	cout << s1.length() << endl;

	Stack<char> s2;
	s2.push('a');
	s2.push('b');
	s2.push('c');
	cout << s2.length() << endl;
	s2.pop();
	cout << s2.length() << endl;
}