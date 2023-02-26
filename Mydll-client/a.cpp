#include<cstdio>
#include"b.h"
#include "Circle.h";

//int _declspec(dllimport) Add(int a, int b);

int main() {
	int a = 10, b = 11;
	int c = Add(a, b);
	printf("Addition is %d\n", c);
	Circle circle(10);
	circle.Print();
	//printf("PI is %lf", PI);
}

//- _declspec(dllimport) is known as decorator.
//- The symbol on which _declspec(dllimport) is written, implies that the symbol is imported from some DLL.

//-When linker is invoked with / DLL switch, it results into 3 files viz..dll, .expand .lib.
//- The.lib file is known as import library.
//- Import library is different from static library.Typical, static library contains binary code of symbols.
//Import library contains names of the symbols exported from DLL. It dosn't contains symbol.
//- Actual definition of symbols is present in.dll.

// Commands to delete dll and other files
//-Command Shell commands to build static library:
//cl / c b.cpp->makes b.obj file
//link / DLL b.obj->makes b.lib, b.expand b.dll files
//- Command Shell commands to build executable :
//cl / c a.cpp->makes a.obj file
//link a.obj b.lib->makes a.exe file OR
//link a.obj b.lib / OUT : myexe.exe->makes myexe.exe

//Steps :-
//1. cl /c a.cpp
//2. cl /c b.cpp /DB_EXPORTS
//3. link /DLL b.obj
//4. link a.obj b.lib
//5. a.exe

/*
- In implicite linking, DLL is loades when appplication starts and ends when application ends. 
- A dll containing global objects or variables cannot be delay loaded.
*/