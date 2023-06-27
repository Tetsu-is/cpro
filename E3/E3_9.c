#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num = 45; // 当たりの回数
    int i;          // 試行回数
    int j;          // 残りの回数
    int input_num;  // ユーザの入力した値
    int score = 0;

    for (i = 0, j = 4; i < 5; i++, j--)
    {   
        /* printf("(テスト用に表示)%d\n", num); */
        printf("%d回目の数字をどうぞ　？　>>> ", i + 1); // 30回の繰り返し
        scanf("%d", &input_num);

        if (input_num > num)
        {
            printf("大きいです　！　持ち点はあと%d回\n\n", j);
        }
        else if (input_num < num)
        {
            printf("小さいです　！　持ち点はあと%d回\n\n", j);
        }
        else
        {
            printf("\n\n ********** \n");
            printf(" * 大正解 *\n");
            printf(" **********\n ");
            score = 1;
            break;
        }
    }

    if(score == 0) {
        printf("０点です。");
    }

    return 0;
}