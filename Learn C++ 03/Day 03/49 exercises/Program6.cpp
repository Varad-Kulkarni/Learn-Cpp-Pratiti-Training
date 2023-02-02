#include <iostream>
#include <string>
using namespace std;

void capatilize(string& s) {
	int n = s.length();
	bool flag = true;
	for (int i = 0; i < n; i++) {
		if (flag) {
			s[i] = toupper(s[i]);
			flag = false;
		}
		if (s[i] == ' ') {
			flag = true;
		}
	}
}

int main() {
	string s = "";
	cout << "Enter the sentence: ";
	getline(cin, s);

	capatilize(s);
	cout << "Sentence is: " << s;
}