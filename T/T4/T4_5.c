#include <stdio.h>
#include <math.h>

double area(double r)
{
    double output;
    output = r*r*M_PI;

    return output;
}

int main(void)
{
    double a, result;
    scanf("%lf", &a);
    result = area( a );
    printf("半径が%6.1fの円の面積は%lfです。",a, result);

    return 0;
}