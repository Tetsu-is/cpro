#include <math.h>
#include <stdio.h>

int main(void)
{
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);
    int i = n;
    printf("        逆数      2乗     平方根     自然対数\n");
    printf("-------------------------------------------\n");

    while (i <= m) // iが10以下の間繰り返す
    {
        double value = i; // 実数計算をするのでiを実数化しvalueにセット
        double a = 1 / value;
        double b = value * value;
        double c = sqrt(value);
        double d = log(value);
        printf("%5.1f   %5.3f   %6.1f    %6.4f    %6.1f\n", value, a, b, c, d);
        i ++; // 変数iをカウントアップ
    }

    return 0;
}