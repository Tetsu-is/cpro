#include <stdio.h>

int main(void)
{
	int a[100];
	int x = 0;
	int y = 0;
	int endpoint = 0;

	for(int i=0; i<100; i++)
	{
		scanf("%d", &a[i]);
		if(a[i]==-1)
		{
			endpoint = i;
			break;
		}
	}

	for(int i=endpoint; i<100; i++)
	{
		a[i] = 0;
	}

	for(int i=0;; i++)
	{
		for(int k=0; k<y; k++) printf(" ");
		for(int j=0; j<endpoint+x; j++)
		{
			printf("%d ",a[j]);
			a[j] = (a[j] + a[j+1])%10;
		}
		printf("\n");
		x --;
		y ++;
		if(endpoint+x==1) break;
	}
	return 0;
}