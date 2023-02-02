#include<iostream>
#include <map>
using namespace std;

int getHighestFrequencyElement(int a[], int n) {
	map<int, int> Map;
	for (int i = 0; i < n; i++) {
		Map[a[i]]++;
	}
	int max = 0, ans = 0;
	for (auto m : Map) {
		if (m.second > max) {
			max = m.second;
			ans = m.first;
		}
	}
	return ans;
}

int main() {
	cout << "Enter the size of the array: ";
	int n = 0;
	cin >> n;

	cout << "Enter elements in array: ";
	int a[500];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int ans = getHighestFrequencyElement(a, n);
	cout << "Highest frequency element is: " << ans;
}