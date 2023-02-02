#include <iostream>
#include <string>
//#include <cctype>
using namespace std;

string getEncryptedMessage(string& s) {
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'z') {
			s[i] = 'a';
		}
		else if (s[i] == 'Z') {
			s[i] = 'A';
		}
		else if(isalpha(s[i])) {
			s[i] = s[i] + 1;
		}
	}
	return s;
}

int main() {
	string s = "";
	cout << "Enter string to get encrypted message: ";
	getline(cin, s);

	string message = getEncryptedMessage(s);
	cout << "Encrypted message is " << message;
}