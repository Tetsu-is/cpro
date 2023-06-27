#include <stdio.h>
#define N 10
int main(void)
{
    int a[N], b[N];
    int m, n;

    for(int i = 0; i < N; i++) {
        a[i] = i*i;
    }

    scanf("%d %d", &m, &n);

    for (int i = 0; i <= n-m; i++) {
        b[i] = a[m+i];
    }

    for(int i = 0; i < N; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");

    for(int i = 0; i <= n-m; i++) {
        printf("%d ", b[i]);
    }

    return 0;
}