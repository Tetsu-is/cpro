#include <stdio.h>
#include <math.h>

double g(double x, double h)
{
    return (exp(x + h) - exp(x)) / h;
}

int main(void)
{   
    int i, w;
    double a;
    double h = 1.0;
    double result = 0;
    
    printf("Enter a: ");
    scanf("%lf", &a);
    
    w = 1;
    for(i = 0; i < 20; i++) {
        h = 1.0 / (double)w;
        /* printf("%d \t %.25f \n", w, h); */ 

         /* 関数の呼び出し */
         result = g(a, h);

        /* 数値の表示 */
        printf("g( %.6f, %.6f ) = %.6f\n", a, h, result);

        w *= 2;
    }
    printf("f'( %.6f ) = %.6f\n", a, exp(a));

    return 0;
}
