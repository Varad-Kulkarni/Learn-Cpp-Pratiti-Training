#include <assert.h>
#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main() {
    int result = 0;
    result = fibonacci(12);
    assert(result == 144);
}
