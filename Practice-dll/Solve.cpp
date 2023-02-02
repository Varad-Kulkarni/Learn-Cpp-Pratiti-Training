#include "Solve.h";
#include <iostream>
#include <set>
using namespace std;

int getInt(int n) {
	return n;
}

void copy(int a[], int b[], int n) {
	for (int i = 0; i < n; i++) {
		a[i] = b[i];
	}
}

void replace(int a[], int n, int old, int newVal) {
	for (int i = 0; i < n; i++) {
		if (a[i] == old) {
			a[i] = newVal;
		}
	}
}

void bubblesort(int a[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[j] < a[i]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

int set_union(int a[], int n1, int b[], int n2, int c[]) {
	set<int> s;
	for (int i = 0; i < n1; i++) {
		s.insert(a[i]);
	}
	for (int i = 0; i < n2; i++) {
		s.insert(b[i]);
	}
	int i = 0;
	for (int k : s) {
		c[i++] = k;
	}
	return s.size();
}

bool equal(int a[], int n1, int b[], int n2) {
	if (n1 != n2) {
		return false;
	}
	for (int i = 0; i < n1; i++) {
		if (a[i] != b[i]) {
			return false;
		}
	}
	return true;
}

int mismatch(int a[], int n1, int b[], int n2) {
	int n = n1 < n2 ? n1 : n2;
	for (int i = 0; i < n; i++) {
		if (a[i] != b[i]) {
			return i;
		}
	}
	return -1;
}

int find_first_of(int a[], int n1, int b[], int n2) {
	if (n1 > n2) {
		return -1;
	}
	if (n1 == n2) {
		if (equal(a, n1, b, n2)) {
			return 0;
		}
		return -1;
	}

	for (int i = 0; i < n2; i++) {
		if (b[i] == a[0]) {
			if (n2 - i < n1) {
				return -1;
			}
			int j = i;
			bool flag = false;
			for (int k = 0; k < n1; k++) {
				if (a[k] != b[j]) {
					flag = true;
				}
				j++;
			}
			if (!flag) {
				return i;
			}
		}
	}
	return -1;
}

void merge(int a[], int n1, int b[], int n2, int c[], int n) {
	int i = 0, j = 0, k = 0;
	while (i < n1 && j < n2) {
		if (a[i] < b[j]) {
			c[k++] = a[i++];
			//c[k++] = b[j++];
		}
		else {
			c[k++] = b[j++];
			//c[k++] = b[i++];
		}
	}
	while (i < n1) {
		c[k++] = a[i++];
	}
	while (j < n2) {
		c[k++] = b[j++];
	}
}

int max(int a[], int n) {
	int mx = INT_MIN;
	for (int i = 0; i < n; i++) {
		if (a[i] > mx) {
			mx = a[i];
		}
	}
	return mx;
}

void rotate_left(int a[], int n) {
	if (n == 0 || n == 1) {
		return;
	}
	if (n == 2) {
		swap(a[0], a[1]);
	}
	int temp = a[0];
	for (int i = 0; i < n - 1; i++) {
		a[i] = a[i + 1];
	}
	a[n - 1] = temp;
}