#include <assert.h>
#include <iostream>
#include <stdexcept>
#include "Circle.h";
using namespace std;

#include "Circle.h"

Circle::Circle(int radius) {
	SetRadius(radius);
}

int Circle::GetRadius() const {
	assert(m_radius > 0);
	return m_radius;
}

void Circle::SetRadius(int radius) {
	if (radius <= 0)
		throw std::invalid_argument("Radius must be positive number.");
	m_radius = radius;
}

void Circle::Print() const {
	std::cout << GetRadius() << std::endl;
}

double Circle::GetArea() const {
	int radius = GetRadius();
	return 3.14 * radius * radius;
}