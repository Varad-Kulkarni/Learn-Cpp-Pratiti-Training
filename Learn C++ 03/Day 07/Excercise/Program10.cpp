#include <assert.h>

int multiply_by_2(int n) {
    return 2 * n;
}

void for_each(int a[], int n, int (*func)(int n)) {
    for (int i = 0; i < n; i++) {
        a[i] = func(a[i]);
    }
}

int main() {
    int a[]{ 1, 2, 3, 4, 5 };
    int result[]{ 2, 4, 6, 8, 10 };
    for_each(a, 5, multiply_by_2);
    for (int i = 0; i < 5; ++i) {
        assert(a[i] == result[i]);
    }
}
