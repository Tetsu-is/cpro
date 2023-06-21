#include <stdbool.h>
#include <stdio.h>

int main (void) 
{
    float a = 0;
    bool OKflag = false;
    while(OKflag == false){
        printf("Type positive integer!\n");
        scanf("%f", &a);
        if(a > 0 && a - (int)a == 0.000000){
            OKflag = true;
        }
    }
    printf("OK");

    return 0;
}