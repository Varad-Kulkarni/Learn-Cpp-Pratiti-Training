#include <iostream>
using namespace std;

struct Product1 {
	int r1 = 10;
	int r2 = 20;
	int r3 = 30;

	int getTotalRawProducts(int quantity = 1) {
		return quantity * (r1 + r2 + r3);
	}
};

struct Product2 {
	int r1 = 10;
	int r2 = 20;
	int r3 = 30;

	int getTotalRawProducts(int quantity = 1) {
		return quantity * (r1 + r2 + r3);
	}
};

struct Product3 {
	int r1 = 10;
	int r2 = 20;
	int r3 = 30;

	int getTotalRawProducts(int quantity = 1) {
		return quantity * (r1 + r2 + r3);
	}
};

struct Client {
	int getTotalPrice(Product1& p1, int q1, Product2& p2, int q2, Product3& p3, int q3) {
		return p1.getTotalRawProducts(q1) + p2.getTotalRawProducts(q2) + p3.getTotalRawProducts(q3);
	}
};

int main() {
	Product1 p1;
	Product2 p2;
	Product3 p3;

	Client c1, c2;
	cout << "Total price for client1 is " << c1.getTotalPrice(p1, 1, p2, 0, p3, 2) << endl;
	cout << "Total price for client1 is " << c2.getTotalPrice(p1, 2, p2, 1, p3, 2) << endl;
}