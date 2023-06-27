#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[])
{
    if( argc != 2 ){
        printf("使い方: %s filename \n", argv[0]);
        exit(EXIT_FAILURE);
    }

    int val;
    int sum = 0;
    int cnt;
    char filename[FILENAME_MAX];
    double avg = 0;
    int max = 0;
    int min = 0;
    FILE *fp;

    strcpy(filename, argv[1]); // filenameにコマンドラインから与えたファイル名を代入

    if ((fp = fopen(filename, "r")) == NULL) // 入力ファイルのオープン
    {
        printf("ファイルが見つかりません。 --- %s\n", filename);
        exit(EXIT_FAILURE);
    }

    /* for (cnt = 0;; cnt++) // データの入力
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
    } */

    cnt = 0;
    while (fscanf(fp, "%d", &val) != EOF)
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
        sum += val;
        cnt++;
    }

    avg = (double)sum / (double)cnt;

    if (cnt > 0) // 合計・平均値の表示
    {
        printf("平均値 %4.2f，最大値 %d，最小値 %d\n", avg, max, min);
    }

    fclose(fp); // ファイルのクローズ

    return EXIT_SUCCESS;
}