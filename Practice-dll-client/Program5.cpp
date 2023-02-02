#include <assert.h>
#include "Solve.h"
int main() {
    bool isequal = false;

    int a[] = { 3, 2, 4, 6, 7 };
    int b[] = { 3, 2, 4, 6, 7 };
    isequal = equal(a, 5, b, 5);
    assert(isequal);

    int c[] = { 0, 9, 1, 2, 5 };
    isequal = equal(b, 5, c, 5);
    assert(!isequal);

    int d[] = { 3, 2, 4, 6 };
    isequal = equal(c, 5, d, 4);
    assert(!isequal);
}
