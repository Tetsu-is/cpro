#include <stdio.h>

int main(void)
{
    int prize[5];
    int k;
    prize[0] = 10000;
    prize[1] = 5000;
    prize[2] = 3000;
    prize[3] = 1000;
    prize[4] = 500;

    printf("何等ですか: ");
    scanf("%d", &k);
    
    if(k>=1 && k<=5) {
        printf("%d等は%d円です", k, prize[k-1]);
    } else {
        printf("1以上5以下の値を入力して下さい");
    }

    return 0;
}