#include <iostream>
using namespace std;

class Math {
public:
	static const double PI;
};

const double Math::PI = 3.14;

int main() {
	Math m;
	cout << m.PI << endl;
	cout << Math::PI << endl;
}

/*
- Static data members are shared across all objects of that class.
- Static data members are located in static space.
- Note they are not located in object space.
- Though, they exist in static space, their scope is limited to the
  members of the class.
- Static data members need to be implemented in implementation file.
- If not implemented then it result in linking error.
- Note non-static data members are not to be implemented in implementation file
  like static data members.
*/