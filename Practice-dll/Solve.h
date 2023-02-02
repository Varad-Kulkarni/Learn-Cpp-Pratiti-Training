#pragma once

//#ifdef SOLVE_EXPORTS
//#define EXPIMP _declspec(dllexports)
//#else
//#define EXPIMP _declspec(dllimports)
//#endif

#ifdef B_EXPORTS
#define EXPIMP _declspec(dllexport)
#else
#define EXPIMP _declspec(dllimport)
#endif

int EXPIMP getInt(int n);
void EXPIMP copy(int a[], int b[], int n);
void EXPIMP replace(int a[], int n, int old, int newVal);
void EXPIMP bubblesort(int a[], int n);
int EXPIMP set_union(int a[], int n1, int b[], int n2, int c[]);
bool EXPIMP equal(int a[], int n1, int b[], int n2);
int EXPIMP mismatch(int a[], int n1, int b[], int n2);
int EXPIMP find_first_of(int a[], int n1, int b[], int n2);
void EXPIMP merge(int a[], int n1, int b[], int n2, int c[], int n);
int EXPIMP max(int a[], int n);
void EXPIMP rotate_left(int a[], int n);





