#include <stdio.h>

int main(void)
{
    double rate = 0.005;
    double deposit = 55555;
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i=1; i<=n; i++)
    {
        deposit = deposit * (1 + rate);
        printf("n = %d --> %d\n", i, (int)deposit);
        deposit += 55555;
    }
    return 0;
}