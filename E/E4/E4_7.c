#include <stdio.h>
#include <math.h>

double func ( double x )
{
    double fx;
    fx = pow(x,2) - 4*x + 2;

    return fx;
}

double inverse (double x )
{
    double fx;
    fx = 2 + sqrt((x+2));

    return fx;
}

int main(void)
{
    int n;
    scanf("%d", &n);
    if (n>=2) {
        for(int i = 2; i <= n; i ++) {
            double resultFunc = 0;
            resultFunc = func((double)i);
            printf("x = %d\n", i);
            printf("f(x) = %lf\n", func((double)i));
            printf("f-1( f(x) ) = %lf\n", inverse(resultFunc));
        }
    }
    return 0;
}