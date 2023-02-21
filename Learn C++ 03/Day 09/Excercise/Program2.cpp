#include <iostream>

struct Triangle {
    double A;
    double B;
    double C;
    double a;
    double b;
    double c;
};

double max(double a, double b, double c) {
    double max = a;
    if (a > b) {
        max = a;
    } 
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    return max;
}

bool SidesFormTriangle(Triangle t) {
    if (t.a <= 0 || t.b <= 0 || t.c <= 0) {
        return false;
    }
    return true;
}

void ComputeAnglesFromSides(Triangle& t) {
    t.A = acos((t.b * t.b + t.c * t.c - t.a * t.a) / (2 * t.b * t.c));
    t.B = acos((t.a * t.a + t.c * t.c - t.b * t.b) / (2 * t.a * t.c));
    t.C = acos((t.a * t.a + t.b * t.b - t.c * t.c) / (2 * t.a * t.b));
}

int main() {
    Triangle t;
    std::cout << "Input the lengths of three sides (a, b, c) of a triangle:" << std::endl;
    std::cout << "Input length of side a: " << std::flush;
    std::cin >> t.a;
    std::cout << "Input length of side b: " << std::flush;
    std::cin >> t.b;
    std::cout << "Input length of side c: " << std::flush;
    std::cin >> t.c;
    if (SidesFormTriangle(t)) {
        ComputeAnglesFromSides(t);
        std::cout << "Measure of Angle A is " << t.A << std::endl;
        std::cout << "Measure of Angle B is " << t.B << std::endl;
        std::cout << "Measure of Angle C is " << t.C << std::endl;
    }
    else {
        std::cout << "Given lengths of sides cannot form a triangle." << std::endl;
    }
}

// t.A, t.B, t.C are of Angle type each containing a member value.
// t.a, t.ac, t.bc are of Side type each containing a member value.
// Note t.a, t.b, t.c are sides against angle A, B, C respectively.
// Note angles are in radians.
