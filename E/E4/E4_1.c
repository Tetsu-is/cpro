#include <stdio.h>

int price( int x )
{
    int y;
    y = 100 * x + 5;

    return y;
}
 
int main(void)
{
    int num, payment;
    scanf("%d", &num);
    payment = price( num );
    printf("%d個購入したときの支払い金額は%dです。", num, payment);
    
    return 0;
}