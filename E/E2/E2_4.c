 #include <stdio.h>

int main(void)
 {
	int i;

	for ( i = 1 ; i <= 40 ; i++ ) {
		if ( i % 3 == 0 ) {
			printf("%d ", i );
		} 
	}
	printf("\n");


	return 0;

 }