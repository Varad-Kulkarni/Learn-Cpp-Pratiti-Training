#include <assert.h>
#include "Solve.h"

int main() {
    int index = false;

    int a[] = { 3, 7, 1, 4, 8, 6, 2, 7, 4 };
    int maxret = max(a, 9);
    for (int i = 0; i < 9; ++i) {
        assert(maxret == 8);
    }
}
