#include <assert.h>
#include <iostream>

void cartesian_to_polar(double& x, double& y, double& r, double& theta) {
    r = sqrt(x * x + y * y);
    theta = (180.0 / 3.14) * atan(y / x);
}

int main() {
    double x = 3.0, y = 4.0;
    double r = 0.0, theta = 0.0;
    cartesian_to_polar(x, y, r, theta);
    std::cout << r << " " << theta;
    assert(r == 5 && static_cast<int>(theta * 10000) == 531301);
}
