#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
        srand((unsigned int)time(NULL));
        int i;

        for (i = 0;i < 10;i++) {
                printf("%d\n",rand()); 
        }

        return 0;
}