union Integer {
	struct Word{
		short lowword;
		short highword;
	};
	Word word;
	int i;
};

int main() {
	Integer u;
	u.i = 0x1234ABCD; 

	Integer v;
	v.word.highword = 0x4512;
	v.word.lowword = 0x2222;
	// 0x45122222
}

/*
- In union, data members shares the space amongst themselves.
- The data member having highest size determines the size of the union.
*/