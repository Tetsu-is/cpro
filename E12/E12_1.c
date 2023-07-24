#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


int main(void)
{
    int val;
    int sum = 0;
    int cnt = 0; 
    FILE *fpin, *fpout, *fpres;
    double avg = 0;
    int max = 0;
    int min = 0;

    if ((fpin = fopen("indata.txt", "r")) == NULL) // 入力ファイルのオープン
    {
        printf("ファイルが見つかりません。 --- indata.dat\n");
        exit(EXIT_FAILURE);
    }

    if ((fpout = fopen("outdata.txt", "w")) == NULL)
    {
        printf("ファイルが見つかりません。 --- outdata.dat\n");
        fclose(fpin);
        exit(EXIT_FAILURE);
    }

    if ((fpres = fopen("result.txt", "w")) == NULL)
    {
        printf("ファイルが見つかりません。 --- result.dat\n");
        fclose(fpin);
        fclose(fpout);
        exit(EXIT_FAILURE);
    }

    while (fscanf(fpin, "%d", &val) != EOF) // データの入力
    {
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
        fprintf(fpout, "入力データ>>> %d\n", val);
        sum += val;
        cnt ++;
    }

    avg = (double)sum / (double)cnt;

    if (cnt > 0) // 合計・平均値の表示
    {
        printf("平均値 %3.1f，最大値 %d，最小値 %d\n", avg, max, min);
        fprintf(fpres, "平均値 %3.1f，最大値 %d，最小値 %d\n", avg, max, min);
    }

    fclose(fpin); // ファイルのクローズ
    fclose(fpout);
    fclose(fpres);

    return EXIT_SUCCESS;
}