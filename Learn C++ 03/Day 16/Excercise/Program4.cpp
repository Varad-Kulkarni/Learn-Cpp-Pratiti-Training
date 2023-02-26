#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream fin("E:/Training Pratiti/C++/Visual C++/Learn C++/Learn C++ 03/Day 16/Excercise/example.txt"); // the file will be opened in ios::in mode
	if (!fin) {
		cout << "File is not opened. Exiting the application.";
		return 0;
	}

	string s;
	fin >> s;
	int ans = 0;
	do {
		ans++;
		fin >> s;
	} while (!fin.eof());
	cout << "Total words in file are: " << ans + 1;

	fin.close();
}