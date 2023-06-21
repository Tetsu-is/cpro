#include <stdio.h>

int main(void)
{
    int t, total=0;
    scanf("%d", &t);
    for (int i = 0; i < t; i++){
        total += (i+1)*(i+1);
    }
    printf("%d", total);
}