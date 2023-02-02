#include <assert.h>
#include "Solve.h"
int main() {
    int index = false;

    int a[] = { 2, 3, 4, 6, 7 };
    int b[] = { 1, 4, 7, 9 };
    int c[9] = { 0 };
    merge(a, 5, b, 4, c, 9);
    int result[] = { 1, 2, 3, 4, 4, 6, 7, 7, 9 };
    for (int i = 0; i < 9; ++i) {
        assert(c[i] == result[i]);
    }
}
