#pragma once

inline int add(int u, int v);

inline int add(int u, int v) {
	return u + v;
}

/*
* If function is inline then its declaration and definition must be stored in a header file.
  Not keeping inline function defintion in header file results in linking error.
* If function is non-inline then only declaration must be stored in a header file.
  Definition must be stored in a separate implementation file.
  Keeping inline function defintion in header file results in linking error.
*/