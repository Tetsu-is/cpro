#include <stdio.h>

int main(void)
{
    int x;

    printf("type number less than 2024\n");
    scanf("%d", &x);
    if(x >= 2018){
        printf("令和です");
    }
    else if (x >= 1989){
        printf("平成です");
    }
    else if (x >= 1926){
        printf("昭和です");
    }
    else {
        printf("元号は不明です");
    }

    return 0;
}