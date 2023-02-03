#include <iostream>
#include <string>
using namespace std;

char geta() {
	return 'a';
}

char gete() {
	return 'e';
}

char geti() {
	return 'i';
}

char geto() {
	return 'o';
}

char getu() {
	return 'u';
}

int count_vovels(string s, int n, char (*ch)()) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == ch()) {
			count++;
		}
	}
	return count;
}

int main() {
	string s;
	cout << "Enter the string: " << endl;
	getline(cin, s);
	int n = s.length();

	cout << "count of 'a' is " << count_vovels(s, n, geta) << endl;
	cout << "count of 'e' is " << count_vovels(s, n, gete) << endl;
	cout << "count of 'i' is " << count_vovels(s, n, geti) << endl;
	cout << "count of 'o' is " << count_vovels(s, n, geto) << endl;
	cout << "count of 'u' is " << count_vovels(s, n, getu) << endl;

}