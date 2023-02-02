#include <iostream>
using namespace std;

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int a[] = { 25, 45, 89, 15, 82 };
	int* pa = a;

	for (int i = 0; i < 4; i++) {
		for (int j = i + 1; j < 5; j++) {
			if (*(pa + i) > *(pa + j)) {
				swap(pa + i, pa + j);
			}
		}
	}

	for (int i = 0; i < 5; i++) {
		cout << i << "th element in array is " << *(pa + i) << endl;
	}
}