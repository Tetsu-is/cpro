#include <stdio.h>

int main(void)
{
    int n;
    int combi = 0;;
    scanf("%d", &n);

    for(int a = 1; a <= 10; a++){
        for(int b = 1; b <= 20; b++){
            if(a + b < n){
                /* printf("(%d, %d)\n", a, b); */
                combi ++;
            }
        }
    }

    printf("n = %d のとき%d個", n, combi);

    return 0;
}