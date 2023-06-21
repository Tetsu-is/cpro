#include <stdio.h>

int main(void)
{

	int a = 1234;
   	int b = 5678;
   	int c = 7777;
	
	int *pa;
	int *pb;
	int *pc;
	
	pa = &a;
	pb = &b;
	pc = &c;
	
	printf("AddressPA = %p\n", pa);
	printf("AddressPB = %p\n", pb);
	printf("AddressPC = %p\n", pc);
	
	return 0;	
}