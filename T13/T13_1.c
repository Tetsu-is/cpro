#include <stdio.h>

#define PRICE 350

int main(void)
{
    int amount, period;
    printf("Enter amount-->");
    scanf("%d", &amount);
    printf("Enter period-->");
    scanf("%d", &period);

    for (int i=period; i>=0; i--)
    {
        printf("あと%d日，残高は%d円\n", period, amount);
        if(amount>=PRICE)
        {
            amount -= PRICE;
        }
        period--;
    }
    return 0;
}