#include <assert.h>
#include <iostream>
using namespace std;

enum SortOrder { Ascending, Descending };

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int a[], int n, SortOrder type = Ascending) {
    bool flag = type == Ascending;
    if (n <= 1) {
        return;
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (flag) {
                if (a[i] > a[j]) {
                    swap(&a[i], &a[j]);
                }
            }
            else {
                if (a[j] > a[i]) {
                    swap(&a[i], &a[j]);
                }
            }
        }
    }
}

int main() {
    int a[]{ 6, 4, 3, 8, 7, 9, 1, 0, 2, 5 };
    size_t size = sizeof(a) / sizeof(int);
    sort(a, size); // Sorts ascending by default
    for (size_t i = 0; i < size; ++i) {
        assert(a[i] == i);
    }
    sort(a, size, Descending);
    for (size_t i = 0; i < size; --i) {
        assert(a[i] == 9 - i);
    }
    sort(a, size, Ascending);
    for (size_t i = 0; i < size; ++i) {
        assert(a[i] == i);
    }
}
