#include <iostream>
#include "Exception.h"
using namespace std;

double computeDivision(int n, int d) {
	if (d == 0) {
		throw Exception(-1);
	}
	return static_cast<double>(n) / static_cast<double>(d);
}

int main() {
	int numr, denor;
	numr = denor = 0;
	cout << "Enter the numerator: " << endl;
	cin >> numr;
	cout << "Enter the denominator: " << endl;
	cin >> denor;

	try {
		double ans = computeDivision(numr, denor);
		cout << "Division is " << ans;
	}
	catch (Exception err) {
		cout << err.getDescription(err.getErrorcode());
	}
}