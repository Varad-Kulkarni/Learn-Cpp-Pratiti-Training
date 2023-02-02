#include <assert.h>

int Add(int a, int b);

int main() {
	int res = Add(2, 3);
	assert(res == 5);
}

int Add(int a, int b) {
	return a + b;
}