#include <assert.h>
#include <iostream>
using namespace std;

int ans = 0;

int len(int n) {
    if (n == 0) {
        return 0;
    }
    return 1 + len(n / 10);
}

int main() {
    int result = 0;
    result = len(12345);
    assert(result == 5);
}
