#include <stdio.h>

int main(void)
{
    int i = 1;
    int t = 0;
    scanf("%d", &t);
    int total = 0;
    // 境界条件に等号が入る場合
    while (i <= t) // 正解バージョン
    {
        total += i*i;
        printf("t=%dの場合:\n",i);
        printf("    \"%d周目 total = %d\"\n", i, total);
        printf("    \"1から%dまでの2乗の和は %d です\n", i, total);
        i++;
    }

    return 0;
}