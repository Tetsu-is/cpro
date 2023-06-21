#include <stdio.h>

int main(void)
{
	int a=0;
	int b=0;
	int c=0;
	for(int i=100; i<1000; i++){
		a = i/100;
		b = (i%100)/10;
		c = i%10;
		if(a*a*a + b*b*b + c*c*c == i){
			printf("%d %d %d %d\n", i,a,b,c);
			printf("%d\n", i);
		}
	}
	return 0;	
}