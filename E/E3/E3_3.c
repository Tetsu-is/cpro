#include <stdio.h>

int main(void)
{
    
    int i = 1;
    int total = 0;
    int max;
    int n = 0;

    scanf("%d", &max);

    // 境界条件に等号が入る場合
    while (i <= 20000) // 正解バージョン
    {
        total = total + i;
        //printf("total = %d, i = %d\n", total, i);
        if(total>max){
            n = i;
            i = 20000;
        }
        i++;
    }
    printf("max = %d → n = %d, total = %d\n", max,  n, total);

    return 0;
}