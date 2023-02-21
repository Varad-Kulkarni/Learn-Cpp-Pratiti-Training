#pragma once

class Person {
public:
	Person();
	Person(const char* pname, int age);
	Person(Person& p);
	Person& operator=(const Person& p);
	virtual ~Person();
public:
	int GetAge() const;
	int GetMaxAge() const;
	const char* GetName() const;
public:
	void SetAge(int age); // age > 0 and age < m_maxAge
	void SetName(const char* pname); // pname != nullptr
private:
	char* m_pname;
	int m_age;
private:
	static int m_maxAge;
};

class Employee : public Person {
public:
	Employee(const char* pname, int age, const char* pdepartment);
	Employee(Employee& emp);
	Employee& operator=(const Employee& emp);
	~Employee();
public:
	const char* GetDepartment() const;
	void SetDepartment(const char* pdepartment);
private:
	char* m_department;
};
