void f(int* p);

void f(const int* q);

int main() {
	int b = 2;
	const int a = 1;
	f(&a);
	f(&b);
}

void f(int* p) {}

void f(const int* q) {}