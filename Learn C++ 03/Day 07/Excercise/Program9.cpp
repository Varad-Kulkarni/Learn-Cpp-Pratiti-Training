#include <assert.h>
#include <iostream>
using namespace std;

bool pred(char c) {
    return c == 'd';
}

char* find_if(string s, bool (*func)(char c)) {
    int n = s.length();
    for (int i = 0; i < n; i++) {
        if (func(s[i])) {
            return &s[i];
        }
    }
    return nullptr;
}

int main() {
    char s[] = "the lazy dog jumped over the brown fox";
    char* t = find_if(s, pred);
    assert(strcmp(t, "dog jumped over the brown fox") == 0);
}
