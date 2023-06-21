#include <stdio.h>

int main(void)
{
    int i = 1;
    int max;

    scanf("%d", &max);
    //printf("aaa\n");
    
    while (i <= max)
    {
        if(i % 3 == 0 || i % 5 == 0){
            printf("%d ",i);
        }
        i ++;
    }

    return 0;
}