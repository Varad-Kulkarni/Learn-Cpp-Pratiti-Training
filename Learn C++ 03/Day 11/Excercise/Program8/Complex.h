#pragma once

class Complex {
public:
	Complex(int i = 0, int j = 0);
public:
	int GetR() const;
	int GetI() const;
public:
	Complex Add(const Complex& u) const;
	Complex Sub(const Complex& u) const;
	Complex Mul(const Complex& u) const;
	Complex Div(const Complex& u) const;
private:
	int m_real;
	int m_img;
};
