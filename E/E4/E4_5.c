#include <stdio.h>
#include <math.h>

double area( double r, int a )
{
    double y;
    y = M_PI * pow(r,2) * (double) a / 360;

    return y;
}

int main(void)
{
    double x;
    int y;
    scanf("%lf", &x);
    scanf("%d", &y);
    if (y<360){
        printf("半径が%2.1lf,中心角が%dである扇形の面積は%4.2lfです。", x, y, area(x, y));
    }

    return 0;
}