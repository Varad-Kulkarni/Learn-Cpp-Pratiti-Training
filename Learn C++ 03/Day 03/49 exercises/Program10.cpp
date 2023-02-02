#include <iostream>
#include <string>
using namespace std;

void reversedCase(string& s) {
	int n = s.length();
	for (int i = 0; i < n; i++) {
		if (islower(s[i])) {
			s[i] = toupper(s[i]);
		}
		else {
			s[i] = tolower(s[i]);
		}
	}
}

int main() {
	cout << "Enter the string to reverse case: ";
	string s = "";
	getline(cin, s);

	reversedCase(s);
	cout << "reversed case string is: " << s;
}