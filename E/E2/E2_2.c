#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    if(n % 15 == 0){
        printf("15の倍数です");
    }
    else if (n % 5 == 0){
        printf("15の倍数ではないが、5の倍数です");
    }
    else if (n % 3 == 0){
        printf("5の倍数ではないが、3の倍数です");
    }
    else {
        printf("3の倍数でも、5の倍数でもありません");
    }
    return 0;
}