#include <assert.h>
#include "Solve.h";

int main() {
    int a[] = { 5, 10, 15, 20, 25 }, b[] = { 50, 40, 30, 20, 10 };
    const int alen = sizeof(a) / sizeof(int);
    const int blen = sizeof(b) / sizeof(int);
    int c[alen + blen] = { 0 };
    bubblesort(a, alen);
    bubblesort(b, blen);
    int len = set_union(a, alen, b, blen, c);
    // post execution of set_union function
    // contents of two adjacent elements
    // will not be same
    for (int i = 1; i < len; ++i) {
        assert(c[i - 1] != c[i]);
    }
}
