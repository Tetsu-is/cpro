#include <stdio.h>

int main (void)
{   
    int n;
    int count = 0;
    scanf("%d", &n);
    for(int c = 5; c <= n ; c ++) {
        for(int a = 3; a < c; a++) {
            for(int b = a + 1; b < c; b++) {
                if (a*a + b*b == c*c) {
                    /* printf("%d, %d, %d\n", a, b, c); */
                    count ++;
                }
            }
        }
    }
    printf ("n = %dのとき%d個", n, count);

    return 0;
}
