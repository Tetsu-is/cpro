#include <stdio.h>

int main(void)
{
	int x;
   	scanf("%d", &x);
	double a = 0;
	double b = 0;
	a = x * 0.95;
	b = x -100;

	if(a<b) {
		printf("5パーセント引きが安い\n");
	}
	else if(a>b) {
		printf("100円引きが安い\n");
	}
	else {
		printf("同じ\n");
	}
	return 0;
}