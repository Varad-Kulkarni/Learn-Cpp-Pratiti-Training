#include <iostream>
using namespace std;

void printAllPermutations(string *str, string ans) {
	string s = *str;
	if (s.length() == 0) {
		cout << ans << " ";
		return;
	}

	for (int i = 0; i < s.length(); i++) {
		char c = s[i];
		string temp = s.substr(0, i) + s.substr(i + 1);
		printAllPermutations(&temp, ans + c);
	}
}

int main() {
	string s = "abcd";
	string* ps = &s;
	string ans = "";
	printAllPermutations(ps, ans);
}