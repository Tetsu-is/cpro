#include <stdio.h>

double combi2(int, int);                          // combi関数のプロトタイプ宣言
int fact(int);                                // fact関数のプロトタイプ宣言

int main(void)
{
    int t, m;

    for (t = 0; t <= 35; t++)
    {
        for (m = 0; m <= t; m++)
        {
            printf("%dC%d=%f\t", t, m, combi2(t, m)); // combi関数の呼び出し
        }
        printf("\n");
    }

    return 0;
}

double combi2( int n, int r ) {
    double x = 1.0;
    for (int i = 0; i < r; i ++) {
        x = x * ( n - i ) / ( i + 1 );
    }
    return x;
}


int fact(int n)                               // 階乗を求める関数の定義
{
    int i, fact;

    fact = 1;
    for (i = 1; i <= n; i++)
    {
        fact *= i;                            // n!を求める
    }

    return fact;
}