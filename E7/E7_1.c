#include <stdio.h>

#define N 20

int main(void)
{
	int a[N];
	scanf("%d", &a[0]);
	
	for(int i = 1; i < N; i ++){
		a[i] = 2*a[i-1] + 1;
	}
	
	for(int i = 0; i < N; i ++) {
		printf("%d\n", a[i]);
	}
	
	return 0;
}