#include "CPU.h"

int main() {
	Keyboard qwertykbd;
	CPU mycpu(qwertykbd);
}

/*
- Note:
  - class CPU and class Keyboard instances are associated via aggregation relationship.
  - Since 
  - The size of CPU is influenced by the sizes of its members.
*/
