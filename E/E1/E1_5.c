#include <stdio.h>

int main(void)
{
    char a, b, result;

    a = 50;
    b = 100;

    result = a + b;
    printf("%d + %d = %d\n", a ,b, result);

    result = a - b;
    printf("%d - %d = %d\n", a ,b, result);

    result = a * b;
    printf("%d * %d = %d\n", a ,b, result);

    result = a / b;
    printf("%d / %d = %d\n", a ,b, result);

    return 0;   
}