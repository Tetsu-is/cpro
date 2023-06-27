#include <math.h>
#include <stdio.h>

int discriminant( int a, int b, int c ) {
    int d = b*b - 4*a*c;
    /* printf("d: %d\n", d); */
    return d;
}

double quad_eq( int a, int b, int d ) {
    double res1, res2, resb;

    res1 = ( (-b + sqrt(d)) / 2*a);
    res2 = ( (-b - sqrt(d)) / 2*a);

    if(res1 > res2) {
        resb = res1;
    }
    else {
        resb = res2;
    }

    /* printf("res1: %f/res2: %f/resb: %f\n", res1, res2, resb); */
    
    return resb;
}

int main(void)
{
    double a, b, c, d, x;

    printf("ax^2+bx+c=0のa b cを入力してください >>> ");
    scanf("%lf %lf %lf", &a, &b, &c); // double型は%lfを用いる

    d = discriminant(a, b, c);

    x = quad_eq(a, b, d);
    
    if (d > 0) {
        printf("2個の実数解のうち大きい方は x = %f です", x);
    }

    else if (d == 0) {
        printf("重解は x = %f です", x);
    }

    else {
        printf("実数解はありません");
    }

    return 0;
}