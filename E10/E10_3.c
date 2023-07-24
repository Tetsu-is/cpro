#include <stdio.h>

int powint(int x, int p)
{
	int y = 1;
	
	while(p-- >0)
	{
		y *= x;
	}
	return y;
}

int main(void)
{
	int n;
	scanf("%d", &n);
	int time = 0;
	
	for(int i=1; i<=n; i++)
	{
		time = powint(3,i-1);
		for(int j=0; j<time; j++)
		{
			printf("@");
		}
		printf("\n");
	}
	
	return 0;
}