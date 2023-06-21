#include <stdio.h>

int main(void)
{
    int total = 0;
    int array[4];
    array[0] = 80;
    array[1] = 75;
    array[2] = 50;
    array[3] = 90;

    for(int i = 0; i < 4; i++) {
        printf("%d\n", array[i]);
    }

    printf("%d\n", array[0]+array[1]+array[2]+array[3]);

    for(int i = 0; i < 4; i++) {
        total += array[i];
    }
    printf("%d", total);
    
    return 0;
}