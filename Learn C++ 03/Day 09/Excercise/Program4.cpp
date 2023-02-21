#include <assert.h>
#include <iostream>

struct Temperature {
    double value;
    std::string unit;
};

void ChangeTemperatureUnit(Temperature& t, std::string unit) {
    if (t.unit == unit) {
        return;
    }
    if (t.unit == "Celsius") {
        if (unit == "Kelvin") {
            t.value = t.value + 273.15;
            t.unit = "Kelvin";
            return;
        }
        t.value = 1.8 * t.value + 32.0;
        t.unit = "Fahrenheit";
        return;
    }
    if (t.unit == "Kelvin") {
        if (unit == "Celsius") {
            t.value = t.value - 273.15;
            t.unit = "Celsius";
            return;
        }
        t.value = 1.8 * t.value + 32.0;
        t.unit = "Fahrenheit";
        return;
    }
    if (unit == "Celsius") {
        t.value = (5.0 / 9.0) * (t.value - 32);
        t.unit = "Celsius";
        return;
    }
    t.value = (t.value - 32.0) * (5.0 / 9.0) + 273.15;
    t.unit = "Kelvin";
}

int main() {
    Temperature t{ 37.5, "Celsius"};
    ChangeTemperatureUnit(t, "Fahrenheit");
    assert(t.value == 99.5 && t.unit == "Fahrenheit");
}
