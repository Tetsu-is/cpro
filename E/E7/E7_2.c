#include <stdio.h>

int main(void)
{
	int n;
	int a[50];
	int sum = 0;
	
	scanf("%d",&n);
	
	for(int i = 0; i < 50; i ++){
		
		if(i*i <= n){
			a[i] = i * i;
		}
		else if((i-1)*(i-1) <= n && i*i > n){
			a[i] = -1;
		}
	
	}
	
	
	for(int i = 0; i < 50 ; i ++){
		
		if(a[i]==-1){
			break;
		}
		printf("a[%d] = %d \n",i, a[i]);
	}
	
	for(int i = 0; i < 50; i ++){
		if(a[i] == -1){
			break;	
		}
		sum += a[i];
	}
	printf("sum = %d",sum);
	
	return 0;
}