#include <assert.h>

void total_capacitance(double& c1, double& c2, double& cs, double& cp) {
    cp = c1 + c2;
    cs = c1 * c2 / (c1 + c2);
}

int main() {
    double c1 = 100, c2 = 300;
    double cs = 0.0, cp = 0.0;
    total_capacitance(c1, c2, cs, cp);
    assert(cs == 75.0 && cp == 400.0);
}
