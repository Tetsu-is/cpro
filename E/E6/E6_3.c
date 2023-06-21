#include <stdio.h>
#define N 7

int main(void)
{
    int a[N], inv[N];
    for (int i = 0; i < N; i++) {
        a[i] = i*i;
    }


    for (int i = 0; i < N; i++) {
        inv[i] = a[N-1-i];
        printf("%d ", inv[i]);
    }

    return 0;
}