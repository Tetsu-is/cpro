#include <stdio.h>

int main (void) 
{
    float a = 0;
    for (;;){
        printf("Type positive integer!\n");
        scanf("%f", &a);
        if(a > 0 && a - (int)a == 0.000000){
            break;
        }
    }
    printf("OK");
}