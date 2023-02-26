#include <iostream>
using namespace std;

template<class T>
int Compare(T& u, T& v) { return (u < v ? -1 : (u > v ? 1 : 0)); }

template<class T>
class Comparer {
public:
	int operator()(T& u, T& v); // { return (u < v ? -1 : (u > v ? 1 : 0)); }
};

template<class T>
int Comparer<T>::operator()(T& u, T& v) { return (u < v ? -1 : (u > v ? 1 : 0)); }


int main() {
	int a = 5, b = 2, result = 0;
	result = Compare(a, b);

	Comparer<int> intComparer;
	a = 6, b = 8;
	result = intComparer(a, b);

	const char* s1 = "Hello world";
	const char* s2 = "C++ is fun";
	result = Compare(s1, s2);
	return 0;
}