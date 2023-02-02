#include <assert.h>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int search(string s, string input, bool isSensitive = true, bool considerChar = false) {
    int n = s.length();
    vector<string> v;
    string temp = "";
    int charAns = 0;

    if (!isSensitive) {
        int len = input.length();
        for (int i = 0; i < len; i++) {
            input[i] = tolower(input[i]);
        }
    }
    for (int i = 0; i < n; i++) {
        if (!isSensitive) {
            s[i] = tolower(s[i]);
        }
        if (s[i] == ' ') {
            v.push_back(temp);
            temp = "";
        }
        else {
            if (isalpha(s[i])) {
                temp += s[i];
            }
        }
    }
    v.push_back(temp);

    int ans = 0;
    for (string str : v) {
        
        ans++;
        if (str == input) {
            if (considerChar) {
                return charAns + 1;
            }
            else {
                return ans;
            }
        }
        if (considerChar) {
            charAns += str.length() + 1;
        }
    }
    return -1;
}

int main() {
    int result = 0;
    char s[] = "Your language quality should improve, as you grow in age.";
    result = search(s, "age");
    assert(result == 10);
    result = search(s, "Age");
    assert(result == -1);
    result = search(s, "Age", false);
    assert(result == 10);
    result = search(s, "Age", false, true);
    assert(result == 53);
}
