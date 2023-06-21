#include <stdio.h>

int main(void)
{
    int a, k;
    a = 3;
    k = (a == 1);
    if (k)
        printf("a is 1!!!\n");
    printf("k's value is %d now\n", k);

    return 0;
}
