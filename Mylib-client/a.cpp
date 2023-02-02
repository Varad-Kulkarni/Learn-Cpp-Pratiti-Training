#include<cstdio>
#include "b.h"
int Add(int a, int b);

int main() {
	//int a = 10, b = 1;
	int c = Add(1, 2);
	//c += PI;
	printf("Addition is %d\n", c);
	printf("PI value is %lf", PI);
}


// 1. Go to required library.
// 2. Go to file containing functions (suppose b.cpp)
// 3. Type the following commands
// 4. cl /c b.cpp
// 5. lib b.obj
// 6. cl /c a.cpp  (file containing client side code)
// 7. link a.obj b.lib
// 8. a.exe or a (It produces output)
// 9. type command used as cat in linux and dir as a ls in linux
