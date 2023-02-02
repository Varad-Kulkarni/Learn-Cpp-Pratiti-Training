#include <iostream> 
#include <string>
using namespace std;

string reverseString(string& s) {
	int i = 0, j = s.length() - 1;
	while (i <= j) {
		swap(s[i], s[j]);
		i++;
		j--;
	}
	return s;
}

int main() {
	string s = "";
	cout << "Enter the string: ";
	getline(cin, s);

	string ans = reverseString(s);
	cout << "Reversed string is " << ans;
}