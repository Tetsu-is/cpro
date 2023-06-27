#include <stdio.h>

int main(void)
{
    int balance = 5000;
    int cost = 390;
    int datecount = 1;
    printf("チャージ額：5000円\n");

    while(balance > cost) {
        balance -= cost;
        printf("%d日目残高：%d円\n", datecount, balance);
        datecount ++;
    }

    return 0;
}