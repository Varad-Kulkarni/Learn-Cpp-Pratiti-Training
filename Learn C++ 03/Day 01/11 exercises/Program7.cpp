#include<iostream>
using namespace std;

int main() {
	int num = 0;
	cout << "Enter the number: " << endl;
	cin >> num;
	
	int result = (num * (num + 1)) / 2;
	cout << "Sum of first " << num << "natural numbers is " << result;
}