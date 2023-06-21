#include <stdio.h>
#include <math.h>

int main(void)
{
    double a, b, c, D, x1, x2;

    printf("ax^2+bx+c=0のa b c を入力してください\n");
    scanf("%lf %lf %lf", &a, &b, &c); // double型は%lf

    if (a == 0)
    {
        if (b == 0)
        {
            printf("係数がおかしい。\n");
        }
        else
        {
            x1 = -c / b; // この場合2次方程式
            printf("解は、%gです。\n", x1);
        }
    }
    else
    {
        D = b * b - 4 * a * c;
        if (D >= 0.0)
        {
            x1 = (-b + sqrt(D)) / (2 * a);
            x2 = (-b - sqrt(D)) / (2 * a);
            if (D == 0)
            {
                if (x1 > 0)
                {
                    printf("正の解は１個です。\n");
                }
                printf("解は、重解となり%gです。\n", x1);
            }
            else
            {
                if (x1 > 0 || x2 > 0)
                {
                    if (x1 > 0 && x2 > 0)
                    {
                        printf("正の解は２個です\n");
                    }
                    else
                    {
                        printf("正の解は１個です\n");
                    }
                }
                else
                {
                    printf("正の解は０個です");
                }
                printf("解は、%gと%gです。\n", x1, x2);
            }
        }
        else
        {
            printf("虚数解となるため、解はありません。\n");
        }
    }

    return 0;
}