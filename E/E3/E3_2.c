#include <stdio.h>

int main(void)
{
    int total = 0;
    int max;
    int n;

    scanf("%d", &max);

    for (int i = 1; i < 20000; i++)
    {
        total = total + i;
        //printf("n=%d total=%d\n", i, total);
        if(total>max){
            n = i;
            break;
        }
        
    }
    printf("max = %d → n = %d, total = %d\n", max, n, total);

    return 0;
}