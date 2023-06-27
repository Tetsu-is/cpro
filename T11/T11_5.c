#include <stdio.h>

typedef unsigned int score_t;

int main(void)
{   
    score_t english, math; 
    scanf("%d %d", &english, &math);
    if(english > 100)
    {
        printf("英語の点数に誤りがあります\n");
    }
    else if(math > 100)
    {
        printf("数学の点数に誤りがあります\n");
    }
    else{
        printf("英語と数学の点数の合計は%d点です．\n", english + math);
    }
    return 0;
}