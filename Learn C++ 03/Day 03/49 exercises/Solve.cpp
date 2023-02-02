#include<iostream>

int getSecondHighest(int a[], int max, int n) {
	int ans = INT_MIN;
	for (int i = 0; i < n; i++) {
		if (a[i] > ans) {
			if (a[i] != max)
				ans = a[i];
		}
	}
	return ans;
}

int getHighestFrequencyElement(int a[], int n) {
	/*int positiveHigh = 0, negetiveHigh = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] < 0) {
			int temp = a[i] * -1;
			if (temp > negetiveHigh) {
				negetiveHigh = temp;
			}
		}
		else {
			if (a[i] > positiveHigh) {
				positiveHigh = a[i];
			}
		}
	}*/

	int a1[500] = { 0 };
	int a2[500] = { 0 };
	
	for (int i = 0; i < n; i++) {
		if (a[i] < 0) {
			a2[a[i]] = ++a2[a[i]];
		}
		else {
			a1[a[i]] = ++a1[a[i]];
		}
	}

	int max = 0, ans = 0;
	for (int i = 0; i < n; i++) {
		;
	}
}