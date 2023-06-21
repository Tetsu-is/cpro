#include <stdio.h>

int combi(int, int);                          // combi関数のプロトタイプ宣言
long int fact(int);                                // fact関数のプロトタイプ宣言

int main(void)
{
    int t, m;

    for (t = 0; t <= 35; t++)
    {
        for (m = 0; m <= t; m++)
        {
            printf("%dC%d=%d\t", t, m, combi(t, m)); // combi関数の呼び出し
        }
        printf("\n");
    }

    return 0;
}

int combi(int n, int r)                       // 組み合わせを求める関数の定義
{
    return fact(n) / (fact(r) * fact(n - r)); // n C rを求める（fact関数の呼び出し）
}

long int fact(int n)                               // 階乗を求める関数の定義
{
    int i;
    long int v_fact;

    v_fact = 1;
    for (i = 1; i <= n; i++)
    {
        v_fact *= i;                            // n!を求める
    }

    return v_fact;
}