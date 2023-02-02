#include <assert.h>
#include <iostream>
#include "Solve.h";
using namespace std;

int main() {
    int a[] = { 10, 20, 30, 30, 20, 10, 10, 20 };
    int len = sizeof(a) / sizeof(int);
    int oldvalue = 20, newvalue = 99;
    replace(a, len, oldvalue, newvalue);
    // post execution of replace function
    // the old value shouldn't exist
    // in an array
    for (int i = 0; i < len; ++i) {
        cout << a[i] << " ";
        if(a[i] == newvalue)
           assert(a[i] != oldvalue);
    }
    cout << "\nSuccess";
}
