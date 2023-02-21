#include <assert.h>
#include <iostream>

struct Circle {
    int radius;
};

double CalculateArea(Circle c) {
    return 3.14 * static_cast<double>(c.radius * c.radius);
}

int main() {
    Circle c{ 10 };
    double area = CalculateArea(c);
    assert(area == 314);
    std::cout << "Area of circle of radius " << c.radius
        << " is " << area << std::endl;
}
