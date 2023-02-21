#include "Complex.h";

Complex::Complex(int r, int i) : m_real(r), m_img(i) {}

int Complex::GetR() const {
	return m_real;
}

int Complex::GetI() const {
	return m_img;
}

Complex Complex::Add(const Complex& v) const {
	return Complex(m_real + v.GetR(), m_img + v.GetI());
}

Complex Complex::Sub(const Complex& v) const {
	return Complex(m_real - v.GetR(), m_img - v.GetI());
}

Complex Complex::Mul(const Complex& v) const {
	int a = m_real;
	int b = m_img;
	int c = v.GetR();
	int d = v.GetI();

	return Complex(a * c - b * d, a * d + b * c);
}

Complex Complex::Div(const Complex& v) const {
	int a = m_real;
	int b = m_img;
	int c = v.GetR();
	int d = v.GetI();
	int den = c * c + d * d;
	int real = (a * c + b * d) / den;
	int img = (b * c - a * d) / den;
	return Complex(real, img);
}

