#include <assert.h>
#include <string>
using namespace std;

bool palindrome(int n) {
    string temp = to_string(n);
    int i = 0, j = temp.length() - 1;
    while (i <= j) {
        if (temp[i++] != temp[j--]) {
            return false;
        }
    }
    return true;
}

int main() {
    bool palin = true;
    palin = palindrome(12321);
    assert(palin);

    palin = palindrome(102);
    assert(!palin);
}
