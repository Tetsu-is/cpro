#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    printf("t = %d\n", t);
    for (int i = 0; i < t; i++){
        printf("%d \n", 2*i + 1);
    }
    return 0;
}
