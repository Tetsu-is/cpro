#include <stdio.h>

int main(void)
{
    int math, eng;

    printf("数学\n");
    scanf("%d",&math);
    printf("英語\n");
    scanf("%d", &eng);

    if (math >= 90){
        printf("数学は秀です\n");
    }

    else if (math >= 80){
        printf("数学は優です\n");
    }

    if (eng > math) {
        printf("英語の方が得意です\n");
    }

    if (math < 60 && eng < 60){
        printf("学習不足です\n");
    }

    if (math >= 85 || eng >= 85){
        printf("問題ありません");
    }

    return 0;
}