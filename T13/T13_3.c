#include <stdio.h>

double comp(double x)
{
    return 0.9*x + 2.5;
}

int main(void)
{
    double a;
    printf("Enter a1-->");
    scanf("%lf", &a);
    printf("a1 = %g\n", a);
    for(int i=2; i<=20; i++)
    {
        a = comp(a);
        printf("a%d = %g\n", i,  a);
    }

    return 0;
}