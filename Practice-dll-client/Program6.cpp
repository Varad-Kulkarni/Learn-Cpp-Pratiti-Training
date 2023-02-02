#include <assert.h>
#include "Solve.h";

int main() {
    int index = false;

    int a[] = { 3, 2, 4, 6, 7 };
    int b[] = { 3, 2, 4, 6, 7 };
    index = mismatch(a, 5, b, 5);
    assert(index == -1);

    int c[] = { 3, 2, 4, 2, 5 };
    index = mismatch(b, 5, c, 5);
    assert(index == 3);

    int d[] = { 3, 2, 4, 6 };
    index = mismatch(c, 5, d, 4);
    assert(index == 3);
}

