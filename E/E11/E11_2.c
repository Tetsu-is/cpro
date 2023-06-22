#include <stdio.h>

struct s_complex {
    double re;
    double im;
};

typedef struct s_complex complex_t;

void complex_print( complex_t a )
{
    printf("%f + %fi\n", a.re, a.im);
}

complex_t complex_add( complex_t a, complex_t b )
{
    complex_t sum;
    sum.re = a.re + b.re;
    sum.im = a.im + b.im;

    return sum;
}

complex_t complex_mul( complex_t a, complex_t b )
{
    complex_t prod;
    prod.re = a.re * b.re - a.im * b.im;
    prod.im = a.re * b.im + a.im * b.re;

    return prod;
}

int main(void)
{
    complex_t x;
    complex_t y;
    scanf("%lf %lf", &x.re, &x.im);
    scanf("%lf %lf", &y.re, &y.im);
    complex_print(complex_add(x, y));
    complex_print(complex_mul(x, y));

    return 0;
}