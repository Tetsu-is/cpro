#include <stdio.h>

double powdbl(double x, int p)  // double型のべき乗計算関数
{
    double y = 1.0;  // double型で初期化

    while (p-- > 0)
    {
        y *= x;
    }

    return y;
}

int main(void) 
{
    int n;
    double x, sum = 0.0;

    printf("Enter n: ");
    scanf("%d", &n);
    
    printf("Enter x: ");
    scanf("%lf", &x);

    for(int i = 1; i <= n; i++) 
    {
        sum += i * powdbl(x, i);
    }

    printf("The sum is: %.2lf\n", sum);

    return 0;
}
