#include <stdio.h>

int main(void)
{
    int a, b, c, d, e, q, r;
    a = 2;
    b = 3;
    c = 5;
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    d = 2*a + 3*a - c;
    printf("d = %d\n", d);
    q = a / b;
    r = a % b;
    printf("q = %d, r = %d\n", q, r);
    e = (a + b) * (q + r);
    printf("e = %d\n", e);
}