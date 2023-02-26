template<class T, class U, class V>
void f(T a, U b, V c) {

}

template<class T, class V>
void f(T a, int b, V c) {      // Partial specialization

}

template<class V>
void f(double a, int b, V c) {      // Partial specialization

}

template<>
void f(double a, double b, bool c) {      // Full specialization

} 

int main() {
	f(5, 'a', 2.5);
	f('a', 5, 2.5);
	f(2.5, 5, 'a');
	f(2.6, 1.8, true);
	return 0;
}