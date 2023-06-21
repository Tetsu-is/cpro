#include <stdio.h>

int main(void)
{
    int i, j;

    for(i = 0;i < 10;i++){
        j = 3 * i * i - 4 * i + 2;
        printf("%d %d \n", i, j); 
    }

    return 0;
}