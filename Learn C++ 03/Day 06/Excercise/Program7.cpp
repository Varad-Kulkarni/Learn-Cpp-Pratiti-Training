#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cout << "Enter the string: " << endl;
	cin >> str;

	int i = 0, len = 0;
	int* n = &len;
	string* s = &str;
	while (true) {
		if (*(s + i) == '\0') {
			break;
		}
		*n += 1;
		i++;
	}
	cout << "Length of string is " << len << endl;
}