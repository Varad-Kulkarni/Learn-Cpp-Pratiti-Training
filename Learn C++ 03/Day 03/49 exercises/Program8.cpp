#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string& s) {
	//remove_if(s.begin(), s.end(), isspace);
	s.erase(remove(s.begin(), s.end(), ' '), s.end());
	int i = 0, j = s.length() - 1;
	for (int k = i; k <= j; k++) {
		s[k] = tolower(s[k]);
	}
	while (i <= j) {
		if (s[i] != s[j]) {
			return false;
		}
		i++;
		j--;
	}
	return true;
}

int main() {
	string s = "";
	cout << "Enter string to check for palindrom string: ";
	getline(cin, s);

	bool flag = isPalindrome(s);
	if (flag) {
		cout << "string is palindrome";
	}
	else {
		cout << "string is not palindrome";
	}
}