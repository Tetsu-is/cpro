#include <stdio.h>

int sum_by_loop( int n )
{
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int sum_by_formula( int n )
{
    int sum = 0;
    sum = (1 + n) * n / 2;
    return sum;
}

int main(void)
{
    int input, suml, sumf;
    scanf("%d", &input);
    suml = sum_by_loop(input);
    sumf = sum_by_formula(input);
    printf("「for 文による計算結果は %d です」「和の公式による計算結果は %d です」", suml, sumf);

    return 0;
}