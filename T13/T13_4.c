#include <stdio.h>

int main(void)
{
    int amount = 5000;
    int left = amount;
    int n_hundred = 0;
    int sum = 0;
    for (int i=amount/1000; i>=0; i--)
    {
        left -= i*1000;
        for (int j=left/500; j>=0; j--)
        {
            left -= j*500;
            n_hundred = left/100;
            left -= n_hundred*100;
            if(left==0)
            printf("1000円が %2d 枚，500円が %2d 個，100円が %2d 個\n", i, j, n_hundred);
            sum++;
            left = amount;
            

        }
    }
    printf("総数は　%d 通り\n", sum);

    return 0;
}