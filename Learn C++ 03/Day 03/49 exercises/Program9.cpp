#include <iostream>
#include <string>
using namespace std;

string removeExtraSpaces(string& s) {
	string ans = "";
	for (int i = 0; i < s.length(); ) {
		if (s[i] == ' ') {
			if (i == 0 || i == s.length() - 1) {
				i++;
				continue;
			}
			while (s[i + 1] == ' ') {
				i++;
			}
		}
		ans += s[i++];
	}
	return ans;
}

int main() {
	string s = "";
	cout << "Enter sentence: ";
	getline(cin, s);

	string ans = removeExtraSpaces(s);
	cout << "New sentence is: " << ans;
}