#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


int main(void)
{
    int val;
    int sum = 0;
    int cnt;
    FILE *fp;
    double avg = 0;
    int max = 0;
    int min = 0;

    if ((fp = fopen("indata.txt", "r")) == NULL) // 入力ファイルのオープン
    {
        printf("ファイルが見つかりません。 --- indata.dat\n");
        exit(EXIT_FAILURE);
    }

    for (cnt = 0;; cnt++) // データの入力
    {
        fscanf(fp, "%d", &val);
        if (val == 0)
        {
            break;
        }
        if (cnt == 0)
        {
            max = val;
            min = val;
        }
        else
        {
            if (val > max)
                max = val;
            if (val < min)
                min = val;
        }
        sum += val;
    }

    avg = (double)sum / (double)cnt;

    if (cnt > 0) // 合計・平均値の表示
    {
        printf("平均値 %3.1f，最大値 %d，最小値 %d\n", avg, max, min);
    }

    fclose(fp); // ファイルのクローズ

    return EXIT_SUCCESS;
}