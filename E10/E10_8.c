#include <stdio.h>

#define FULL 10
#define N 53  /*  使用しない場合は削除すること */

int main ( void ) 
{

	int freq[ FULL+1 ] = { 1, 3, 7, 4, 3, 8, 6, 5, 2, 7, 4 };    /* 点数が i である学生の人数を格納する配列 freq */
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    for(int i=0; i<FULL+1; i++)
    {
        if(i == a)
        {
            freq[i] = freq[i] + 1;
        }
        if(i == b)
        {
            freq[i] = freq[i] + 1;
        }
        if(i == c)
        {
            freq[i] = freq[i] + 1;
        }
    }

    //分布が増えているか確認
    for(int i=0; i<FULL+1; i++)
    {
        printf("%d ", freq[i]);
    }
    printf("\n");

    //中央値
    int count = 0;
    int median = 0;
    for(int i=0; i<FULL+1; i++)
    {
        count = count + freq[i];
        if(count >= (N+1)/2)
        {
            median = i;
            break;
        }
    }
    printf("median = %d\n", median);

    //最頻値
    int max = 0;
    for(int i=0; i<FULL+1; i++)
    {
        if(freq[i] > max)
        {
            max = freq[i];
        }
    }
    for(int i=0; i<FULL+1; i++)
    {
        if(freq[i]==max)
        {
            printf("mode = %d\n", i);
        }
    }

	return 0;

}