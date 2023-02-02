#include <assert.h>
#include "Solve.h"
int main() {
    int a[] = { 10, 20, 30, 30, 20, 10, 10, 20 };
    int len = sizeof(a) / sizeof(int);
    bubblesort(a, len);
    // post execution of sort function
    // content of an array would be in
    // ascending order
    for (int i = 1; i < len; ++i) {
        assert(a[i - 1] <= a[i]);
    }
}
