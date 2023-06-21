#include <stdio.h>

int main(void)
{
    int d[10] = {54, 28, 72, 9, 39, 44, 69, 15, 97, 88};
    int temp = 0;

    for (int k = 0; k < 10; k++)
    {
        printf("%d ", d[k]);
    }
    printf("\n");

    for (int i = 0; i < 9; i++) // 並べ替え
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (d[i] > d[j]) // もし d[ i ] < d [ j ] ならば
            {
                temp = d[i]; // d[ i ] と d[ j ]
                d[i] = d[j]; // を
                d[j] = temp; // 交換する

                for (int i = 0; i < 10; i++)
                {
                    printf("%d ", d[i]);
                }
                printf("\n");
            }
        }
    }

    return 0;
}