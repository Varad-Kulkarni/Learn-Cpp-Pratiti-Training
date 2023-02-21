#pragma once

class MeterConverter {
public:
	MeterConverter();
	MeterConverter(double val);
public:
	double GetVal() const;
	void SetVal(double val);
public:
	double ToFoot() const;
	double ToInch() const;
	double ToMeter() const;
	double ToYard() const;
private:
	double m_val;
};