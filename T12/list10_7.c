#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STRING_SIZE 200

int main(int argc, char *argv[])
{
    int val;
    int sum = 0;
    int cnt;
    char filename[FILENAME_MAX];
    char string[STRING_SIZE];
    FILE *fp;

    strcpy(filename, argv[1]); // filenameにコマンドラインから与えたファイル名を代入

    if ((fp = fopen(filename, "r")) == NULL)
    {
        printf("ファイルが見つかりません。 --- %s\n", filename);
        exit(EXIT_FAILURE);
    }

    cnt = 0; // データの入力
    while (fgets(string, STRING_SIZE, fp))
    {
        if (sscanf(string, "%d", &val) == 0)
        {
            // 読み込んだ文字列が数値に変換できないので無視して次の行へ
            continue;
        }
        sum += val;
        cnt++;
    }

    if (cnt > 0) // 合計・平均値の表示
    {
        printf("合計=%d 平均値=%g\n", sum, (double)sum / cnt);
    }

    fclose(fp); // ファイルのクローズ

    return EXIT_SUCCESS;
}