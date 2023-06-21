#include <stdio.h>

int main(void)
{
    int c = getchar(); // 1文字入力する
    while ((65 <= c && c <= 90) || (65 + 32 <= c && c <= 90 + 32))   // 入力された文字がEOF(データの終了)でない間繰り返す
    {
        putchar(c);    // cを出力する
        c = getchar(); // 1文字入力する
    }

    return 0;
}