#include <stdio.h>

int main(void)
{
    int n;
    int total = 0;
    scanf("%d", &n);
    for (int i = 3; i<n; i+=3){
        total += i ;
    }
    printf("total = %d", total);

    return 0;
}