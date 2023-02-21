#include <cstring>
#include <assert.h>

#include "Person.h"

int main() {
	/*Person p1("Abc", 17);
	assert(strcmp(p1.GetName(), "Abc") == 0);
	assert(p1.GetAge() == 17);

	Person p2(p1);
	assert(strcmp(p2.GetName(), "Abc") == 0);
	assert(p2.GetAge() == 17);

	Person p3("Xyz", 16);
	assert(strcmp(p3.GetName(), "Xyz") == 0);
	assert(p3.GetAge() == 16);

	p3 = p2;
	assert(strcmp(p3.GetName(), "Abc") == 0);
	assert(p3.GetAge() == 17);*/

	char* pname = new char[32];
	strcpy_s(pname, 32, "Pqr");
	Person p(pname, 18);
	delete[] pname;
	pname = nullptr;
	assert(strcmp(p.GetName(), "Pqr") == 0);
	assert(p.GetAge() == 18);



	Employee u("Abc", 25, "Accounts");
	assert(strcmp(u.GetName(), "Abc") == 0);
	assert(u.GetAge() == 25);
	assert(strcmp(u.GetDepartment(), "Accounts") == 0);

	Employee v("Defgh", 27, "Legal");
	assert(strcmp(v.GetName(), "Defgh") == 0);
	assert(v.GetAge() == 27);
	assert(strcmp(v.GetDepartment(), "Legal") == 0);

	Employee w(v);
	w = u;
}