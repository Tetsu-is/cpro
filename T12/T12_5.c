#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
        srand((unsigned int)time(NULL));
        int i;

        for (i = 0;i < 10;i++) {
                printf("%d\n",1 + rand() % 6); 
        }

        return 0;
}