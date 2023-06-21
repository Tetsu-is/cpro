#include <stdio.h>

int main(void)
{
    int a;

    scanf("%d", &a);

    if (a >=0 && a <= 10){
        printf("a is 0~10\n");
    }

    if (a % 2 == 0 || a % 3 == 0) {
        printf("a is x2 or x3\n");
    }
    return 0;
    //a
    
}