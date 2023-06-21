#include <stdio.h>

int main(void)
{
    int i;
    int array[4];
    array[0] = 80;
    array[1] = 75;
    array[2] = 50;
    array[3] = 90;

    printf("type number");
    scanf("%d", &i);
    printf("%d", array[i]);

    return 0;
}