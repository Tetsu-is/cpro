#include <stdio.h>

int main(void)
{
    int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int m, d;
    int totalDays = 0;

    printf("月を入力してください（1-12）: ");
    scanf("%d", &m);

    printf("日を入力してください（1-31）: ");
    scanf("%d", &d);

    //日にちのvalidationしてるとこ
    if (d >= 1 && d <= month[m-1])
    {
        for (int i = 0; i < m - 1; i++)
        {
            totalDays += month[i];
        }

        totalDays += d;
        printf("%d 月 %d 日 → %d 日目\n", m, d, totalDays);
    } else {
        printf("その日は存在しません");
    }

    return 0;
}
