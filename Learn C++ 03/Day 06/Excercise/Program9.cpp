#include <iostream>
#include <string>
using namespace std;

int main() {
	char s[12] = "Hello world";

	int v = 0, c = 0;
	char* ps = s;
	int ans = 0, * pa = &ans;
	int i = 0;
	while (true) {
		if (*(s + i) == '\0') {
			break;
		}
		i++;
		++* pa;
	}
	cout << "Length of string is " << ans;
}