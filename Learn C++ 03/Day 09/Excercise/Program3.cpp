#include <iostream> 
using namespace std;

struct Pendulum {
	double L;
	double g = 9.8;
	double pi = 3.14;
};

int main() {
	Pendulum p;
	p.L = 15;
	double ans = 2 * p.pi * sqrt(p.L / p.g);
	cout << ans;
}