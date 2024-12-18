#include <iostream>
using namespace std;

int main() {
	int i = 1;
	int &j = i;
	i++;
	j += 2;
	cout << "&i = " << &i << endl;
	cout << "&j = " << &j << endl;
}

/*
- In above program 'j' is known as reference and 'i' is known as referent.
- Since i is scaler j called as reference to the scaler.
- The relationship between reference and referent remains in existance till reference exists.
  It cannot be broken in between. Once reference is released, the relation comes to an end.
		+------+			
		|	   |		    
	  i	|	2  | j		    
		|	   |		    
		+------+
*/