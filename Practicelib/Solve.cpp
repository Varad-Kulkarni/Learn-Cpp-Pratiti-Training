#include "Solve.h"

int search(int a[], int n, int num, int occurance) {
    for (int i = 0; i < n; i++) {
        if (a[i] == num) {
            if (--occurance == 0) {
                return i;
            }
        }
    }
    return -1;
}