#include <stdio.h>

void print_square(int a,int  b)
{
	for(int i=0; i<a; i++){
		printf("■");
	}
	
	for(int i=0; i<b; i++){
		printf("□");
	}
}

int main(void)
{
	for(int i=0; i<4; i++){
		print_square(4-i,1+i);
		printf("\n");
	}
	return 0;
}