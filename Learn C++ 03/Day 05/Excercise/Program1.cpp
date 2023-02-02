#include <assert.h>
#include <iostream>
using namespace std;

int search(int a[], int n, int num, int occurance = 1) {
    for (int i = 0; i < n; i++) {
        if (a[i] == num) {
            if (--occurance == 0) {
                return i;
            }
        }
    }
    return -1;
}

int main() {
    int a[]{ 1, 2, 3, 4, 5, 3 }, result = 0;

    result = search(a, 6, 3);
    assert(result == 2);

    result = search(a, 6, 3, 2);
    assert(result == 5);

    result = search(a, 4, 3);
    assert(result == 2);

    result = search(a, 6, 7);
    assert(result == -1);
}
