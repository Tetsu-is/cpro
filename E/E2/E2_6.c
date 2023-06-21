 #include <stdio.h>

int main(void)
 {
	int i, c, small, big;

	c = 0;

    printf("type small >> ");
    scanf("%d", &small);
    printf("type big >> ", &big);
    scanf("%d", &big);


	for ( i = small ; i < big ; i++ ) {
		if (i % 3 == 0||i % 5 == 0){
                c ++;
            }
        
	}

	printf( "答えは %d 個です\n", c );

	return 0;

 }