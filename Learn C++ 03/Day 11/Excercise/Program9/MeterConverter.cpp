#include "MeterConverter.h"
#include <stdexcept>

MeterConverter::MeterConverter(double val) {
	SetVal(val);
}

MeterConverter::MeterConverter() {
	m_val = 0;
}

double MeterConverter::GetVal() const {
	return m_val;
}

void MeterConverter::SetVal(double val) {
	if (val < 0) {
		throw std::invalid_argument("Invalid input...");
	}
	m_val = val;
}

double MeterConverter::ToFoot() const {
	return GetVal() * 3.281;
}

double MeterConverter::ToInch() const {
	return GetVal() * 39.37;
}

double MeterConverter::ToMeter() const {
	return GetVal();
}

double MeterConverter::ToYard() const {
	return GetVal() * 1.094;
}
