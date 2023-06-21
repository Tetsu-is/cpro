#include <stdio.h>

int main(void)
{
    char x;
    int diff = 32; 
    scanf("%c", &x);
    if(x >= 65 && x <= 90){
        x += diff;
    } else if (x >= 97 && x <= 122){
        x -= diff;
    }
    printf("%c", x);
    return 0;
}