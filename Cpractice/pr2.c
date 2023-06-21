#include <stdio.h>

int main(void)
{	
	for(int i=0; i<100; i++){
		printf("■");
		if(i%10==9){
			printf("\n");		
		}
	}
	return 0;
}