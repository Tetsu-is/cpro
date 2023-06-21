#include <stdio.h>
#include <math.h>

int powint(int x) // 関数の定義
{
    int y = 1;           // 正の整数xのp乗を求める関数

    y = pow(x,3); 

    return y;            // yをこの関数の値とする
}

int main(void)
{
    int i;

    for (i = 1; i <= 10; i++)
    {
        printf("%d\n", powint(i));
    }

    return 0;
}