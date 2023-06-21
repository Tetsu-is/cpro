#include <stdio.h>

int main(void)
{
    double a, x, y, z;
    int s, t, u;
    a = 34.0;
    s = 34;
    t = 8;
    u = s / t;
    printf("u = %d\n", u);
    x = s / t;
    printf("x = %f\n", x);
    y = (double)s / (double)t;
    printf("y = %f\n", y);
    z = a / t;
    printf("z = %f\n", z);

    return 0;
}