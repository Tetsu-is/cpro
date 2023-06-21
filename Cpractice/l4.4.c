// Even or Odd
#include <stdio.h>

int main(void)
{
    int a;

    printf("type here >>");
    scanf("%d", &a);

    printf("the data is");
    if (a % 2 ==0){
        printf(" Even");
    }
    else {
        printf(" Odd");
    }
    printf(" !!");

    return 0;
}