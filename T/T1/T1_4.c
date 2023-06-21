#include <stdio.h>

int main(void)
{
    int i;
    int j;
    int n;

    i = 5;
    n = i + j; //未定義のｊの値を引用している
    printf("n = %d\n", n);

    return 0;
}
