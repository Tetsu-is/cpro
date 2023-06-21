#include <stdio.h>

char char_plus(char, int);
double ssum(double, int);

int main(void)
{
    char c, ck;
    int k;
    double x, y;

    c = 'f';
    k = 3;
    ck = char_plus(c, k);
    printf("'%c' の %d 個後の文字は '%c' です\n", c, k, ck);

    x = 2.0;
    y = ssum(x, 5);
    printf("x = %f, n = %d, y = %f \n", x, 5, y);

    return 0;
}

/* 文字 c の k 個後の文字を返す */
char char_plus(char c, int k)
{
    return c + k;
}

/* 1 + 1/x + 1/(x*x) + 1/(x*x*x) + ... + 1/x^k を計算して返す */
double ssum(double x, int k)
{
    int i;
    double s, r;
    s = 1;
    r = 1;
    for (i = 1; i <= k; i++)
    {
        r /= x;
        s += r;
    }

    return s;
}
