#include <assert.h>
bool is_positive(int n) {
    return n >= 0;
}

int copy_if(int b[], int n1, int a[], int n2, bool (*func)(int a)) {
    int count = 0;
    for (int i = 0; i < n2; i++) {
        if (func(a[i])) {
            b[count++] = a[i];
        }
    }
    return count;
}

int main() {
    int a[5]{ -3, 1, -2, 6, 9 };
    int b[5]{ 0 };
    int count = copy_if(b, 5, a, 5, is_positive);
    for (int i = 0; i < count; ++i) {
        assert(b[i] >= 0);
    }
}
