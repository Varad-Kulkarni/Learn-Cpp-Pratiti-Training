#include <assert.h>
#include <iostream>
using namespace std;

bool pred(char c) {
    return c == 'd';
}

char* find_if(char s[], bool (*func)(char c)) {
    int len = sizeof(s) / sizeof(char);
    for (int i = 0; i < len; i++) {
        if (func(*(s + i))) {
            return s + i;
        }
    }
    return nullptr;
}

int main() {
    char s[] = "the lazy dog jumped over the brown fox";
    char* t = find_if(s, pred);
    assert(strcmp(t, "dog jumped over the brown fox") == 0);
}
