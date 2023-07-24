#include <stdio.h>

int max2(int a, int b)
{
	int max = 0;
	if(a>=b)
	{
		max = a;
	}
	if(b>a)
	{
		max = b;
	}
	return max;	
}

int min2(int a, int b)
{
	int min = 0;
	if(a<=b)
	{
		min = a;
	}
	if(b<a)
	{
		min = b;
	}
	return min;	
}

int max4( int a, int b, int c, int d ){
    return max2(max2(a,b), max2(c,d));
}

int min4( int a, int b, int c, int d ){
	return min2(min2(a,b), min2(c,d));
}

int main(void)
{	
	int a,b,c,d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	int maxabcd = max4(a,b,c,d);
	printf("maxabcd = %d\n",maxabcd);
	int minabcd = min4(a,b,c,d);
	printf("minabcd = %d\n",minabcd);
	return 0;
}