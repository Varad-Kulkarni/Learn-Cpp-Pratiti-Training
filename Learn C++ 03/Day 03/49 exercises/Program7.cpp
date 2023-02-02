#include <iostream>
#include <string>
using namespace std;

int getNumberOfWords(string& s) {
	int count = 0, ans = 0, n = s.length();
	for (int i = 0; i < n; i++) {
		if (s[i] == ' ') {
			if (count > 0) {
				ans++;
			}
			count = 0;
			continue;
		}
		if (isalpha(s[i])) {
			count++;
		}
	}
	if (count > 0) {
		ans++;
	}
	return ans;
}

int main() {
	string s = "";
	cout << "Enter the sentence: ";
	getline(cin, s);

	int ans = getNumberOfWords(s);
	cout << "Sentence contains " << ans << " words";
}