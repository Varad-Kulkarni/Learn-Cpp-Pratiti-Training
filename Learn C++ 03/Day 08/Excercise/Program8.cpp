#include <assert.h>
#include <iostream>

void ucm(double& m, double& r, double& omega, double& f, double& v) {
    f = m * omega * omega * r;
    v = sqrt((f * r) / m);
}

int main() {
    double m = 7.26, r = 2, omega = 2;
    double f = 0.0, v = 0.0;
    ucm(m, r, omega, f, v);
    assert(f == 58.08 && v == 4);
}

// Fc = mw^2r   &   F = mv^2/r
