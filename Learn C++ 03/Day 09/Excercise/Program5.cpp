#include <assert.h>
#include <iostream>
using namespace std;

struct Resistor {
    double resistance;
};

double EffectiveSeriesResistance(Resistor* r[], int n) {
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += r[i] -> resistance;
        //std::cout << r[i]->resistance << std::endl;
    }
    return sum;
}

double EffectiveParallelResistance(Resistor* r[], int n) {
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += (1.0 / r[i]->resistance);
    }
    return 1.0 / sum;
}

int main() {
    Resistor r1{ 2.0 }, r2{ 3.0 }, r3{ 0.0 };
    Resistor* resistors[]{ &r1, &r2 };
    double resistance = 0.0;
    resistance = EffectiveSeriesResistance(resistors, 2);
    assert(resistance == 5.0);
    assert(r1.resistance > 0.0 && r2.resistance > 0.0);
    resistance = EffectiveParallelResistance(resistors, 2);
    std::cout << resistance;
    assert(resistance == 1.2);
}
