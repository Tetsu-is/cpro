#include <stdio.h>

int main(void)
{
    int x;

    scanf("%d", &x);

    if( x % 2 == 0){
        printf("偶数です");
    }
    else if (x % 3 ==0){
        printf("偶数でないが3の倍数です");
    }
    else {
        printf("偶数でも３の倍数でもありません");
    }
    return 0;
}