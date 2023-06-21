#include <stdio.h>

int main(void)
{
    int x;

    scanf("%d",&x);

    if (x >= 100){
        printf("big number\n");
    }
    else if (x % 2 ==0){
        printf("small even number");
    }
    else {
        printf("small odd number");
    }

    return 0;
}