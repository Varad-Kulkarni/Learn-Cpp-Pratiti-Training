#include <assert.h>
#include "Solve.h"

int main() {
    int index = false;

    int a[] = { 3, 2, 4, 6, 7 };
    int b[] = { 3, 2, 4, 6, 7 };
    index = find_first_of(a, 5, b, 5);
    assert(index == 0);

    int c[] = { 4, 6 };
    index = find_first_of(c, 2, b, 5);
    //assert(index == 2);

    int d[] = { 3, 2, 4, 6, 7, 5 };
    index = find_first_of(d, 5, b, 4);
    assert(index == -1);
}
