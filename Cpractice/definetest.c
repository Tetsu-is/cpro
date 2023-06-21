#include <stdio.h>

#define number 5
const int x = 3;


int main(void)
{   
    #define number 10
    const int n = 2;
    const int x = 2;
    int array[] = {0,1};
    printf("%d\n", array[0]);
    printf("%d\n", array[1]);
    printf("%d\n", number);
    return 0;
}