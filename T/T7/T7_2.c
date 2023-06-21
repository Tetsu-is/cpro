#include <stdio.h>

#define N 10

int main(void)
{
    int freq[N];
    int a;

    // 初期化
    for (int i = 0; i < N; i++)
    {
        freq[i] = 0;
    }

    // ７回繰り返す
    for (int i = 0; i < 7; i++)
    {
        // 入力
        printf("0 から 9で数字を入力してください: ");
        scanf("%d", &a);

        // 合計を１増やす
        freq[a]++;

        // 表示する
        for (int j = 0; j < N; j++)
        {
            printf("%d は %d 個 /", j, freq[j]);
        }
        printf("\n");
    }

    return 0;
}
