int main() {
	int i = 1;
	int& j = i;
	int& k = j;
	k += 5;

	int* ptr = &j;
	*ptr = 10;
}