#include<iostream>
using namespace std;

int HCF(int a, int b) {
	if (b == 0) {
		return a;
	}
	return HCF(b, a%b);
}

int main() {
	cout << "Enter two numbers: " << endl;
	int a = 0, b = 0;
	cin >> a >> b;

	int hcf = HCF(a, b);
	int lcm = (a * b) / hcf;
	cout << "LCM is " << lcm;
}