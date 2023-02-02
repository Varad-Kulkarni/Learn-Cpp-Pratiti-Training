#include <assert.h>
#include "Solve.h";

int main() {
    int index = false;

    int a[] = { 3, 7, 1, 4, 8, 6, 2, 7, 4 };
    rotate_left(a, 9);
    int result[] = { 7, 1, 4, 8, 6, 2, 7, 4, 3 };
    for (int i = 0; i < 9; ++i) {
        assert(a[i] == result[i]);
    }
}
