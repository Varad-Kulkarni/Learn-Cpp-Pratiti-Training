#include "Person.h"
#include <stdexcept>
#include <assert.h>

int Person::m_maxAge = 115;

Person::Person() {
	m_age = 0;
	m_pname = nullptr;
}

Person::Person(const char* pname, int age) {
	if (m_age < 0 || m_age > m_maxAge) {
		throw std::invalid_argument("Invalid age entered...");
	}
	if (pname == nullptr) {
		throw std::invalid_argument("Name should not be null...");
	}
	SetAge(age);
	SetName(pname);
}

Person::Person(Person& p) {
	if (p.m_age < 0 || m_age > m_maxAge) {
		throw std::invalid_argument("Invalid age entered...");
	}
	if (p.m_pname == nullptr) {
		throw std::invalid_argument("Name should not be null...");
	}
	SetAge(p.m_age);
	SetName(p.m_pname);
}

Person& Person::operator=(const Person& p) {
	if (p.m_age < 0 || m_age > m_maxAge) {
		throw std::invalid_argument("Invalid age entered...");
	}
	if (p.m_pname == nullptr) {
		throw std::invalid_argument("Name should not be null...");
	}
	SetAge(p.m_age);
	SetName(p.m_pname);
	return *this;
}

Person::~Person() {
	delete[] m_pname;
	m_pname = nullptr;
	m_age = 0;
}

int Person::GetAge() const {
	return m_age;
}

int Person::GetMaxAge() const {
	return m_maxAge;
}

const char* Person::GetName() const {
	return m_pname;
}

void Person::SetAge(int age) {
	if (m_age < 0 || m_age > m_maxAge) {
		throw std::invalid_argument("Invalid age entered...");
	}
	m_age = age;
}

void Person::SetName(const char* pname) {
	if (pname == nullptr) {
		throw std::invalid_argument("Name should not be null...");
	}
	int len = strlen(pname);
	m_pname = new char[len + 1];
	strcpy_s(m_pname, len + 1, pname);
}

Employee::Employee(const char* pname, int age, const char* pdepartment) {
	if (pname == nullptr || pdepartment == nullptr) {
		throw std::invalid_argument("name or department name should not be null...");
	}
	if (age < 0 || age > GetMaxAge()) {
		throw std::invalid_argument("Age should not be negetive or greater than maximum age");
	}
	SetAge(age);
	SetName(pname);
	SetDepartment(pdepartment);
}

const char* Employee::GetDepartment() const {
	return m_department;
}

Employee::Employee(Employee& emp) {}

Employee::~Employee() {
	delete[] m_department;
	m_department = nullptr;
}

void Employee::SetDepartment(const char* pdepartment) {
	if (pdepartment == nullptr) {
		throw std::invalid_argument("Department should not be null");
	}
	int len = strlen(pdepartment);
	m_department = new char[len + 1];
	strcpy_s(m_department, len + 1, pdepartment);
}