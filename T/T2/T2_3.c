#include <stdio.h>

int main(void)
{
    int x;
    scanf("%d", &x);
    if (x % 7 == 0){
        printf("７の倍数です");
    }
    else {
        printf("７の倍数ではない");
    }

    return 0;
}