#include "Macros.h"

int main() {
	int radius = 10;
	double area = PI * radius * radius;
	double volume = 4.0 / 3.0 * PI * radius * radius * radius;  //radius, area, volums are memory variables
}

/*
* When program is compiled, preprocessor replaces PI by its corresponding value.
* Note macro variable is not a memory variable hence no memory is reserved for macro variable.
* Macro variable improves program readability and maintenance.
*/
